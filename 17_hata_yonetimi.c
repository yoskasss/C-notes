/*
 * C Dilinde Hata Yönetimi
 * 
 * Hata yönetimi, programın beklenmeyen durumlarla başa çıkmasını sağlar.
 * Temel hata yönetimi teknikleri: errno, perror(), strerror()
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <math.h>
#include <setjmp.h>

// 1. Dosya İşlemleri Hata Yönetimi
void dosyaIslemleri() {
    FILE *dosya = fopen("olmayan_dosya.txt", "r");
    
    if (dosya == NULL) {
        printf("Hata kodu: %d\n", errno);
        perror("Dosya açma hatası");
        printf("Hata mesajı: %s\n", strerror(errno));
        return;
    }
    
    fclose(dosya);
}

// 2. Bellek Yönetimi Hata Yönetimi
void bellekYonetimi() {
    int *ptr = (int*)malloc(1000000000 * sizeof(int));
    
    if (ptr == NULL) {
        printf("Bellek ayırma hatası!\n");
        printf("Hata kodu: %d\n", errno);
        perror("Bellek ayırma hatası");
        return;
    }
    
    free(ptr);
}

// 3. Matematiksel İşlemler Hata Yönetimi
void matematikselIslemler() {
    double sonuc;
    
    // Sıfıra bölme hatası
    errno = 0;
    sonuc = 1.0 / 0.0;
    
    if (errno != 0) {
        printf("Matematiksel işlem hatası!\n");
        printf("Hata kodu: %d\n", errno);
        perror("Matematiksel işlem hatası");
    }
}

// 4. Özel Hata Kodları
#define HATA_BASARILI 0
#define HATA_GECERSIZ_GIRIS 1
#define HATA_DOSYA_BULUNAMADI 2
#define HATA_BELLEK_YETERSIZ 3

// 5. Hata Yönetimi ile Fonksiyon
int bolmeIslemi(int a, int b, int *sonuc) {
    if (b == 0) {
        return HATA_GECERSIZ_GIRIS;
    }
    
    *sonuc = a / b;
    return HATA_BASARILI;
}

// 6. Try-Catch Benzeri Yapı
#define TRY do { \
    jmp_buf jump_buffer; \
    int hata_kodu = 0; \
    if (setjmp(jump_buffer) == 0) {

#define CATCH(x) \
    } else { \
        x = hata_kodu; \
    } \
} while(0)

#define THROW(x) do { \
    hata_kodu = x; \
    longjmp(jump_buffer, 1); \
} while(0)

int main() {
    // 1. Dosya İşlemleri Hata Yönetimi
    printf("1. Dosya İşlemleri Hata Yönetimi:\n");
    dosyaIslemleri();
    
    // 2. Bellek Yönetimi Hata Yönetimi
    printf("\n2. Bellek Yönetimi Hata Yönetimi:\n");
    bellekYonetimi();
    
    // 3. Matematiksel İşlemler Hata Yönetimi
    printf("\n3. Matematiksel İşlemler Hata Yönetimi:\n");
    matematikselIslemler();
    
    // 4. Özel Hata Kodları Kullanımı
    printf("\n4. Özel Hata Kodları Kullanımı:\n");
    int sonuc;
    int hata = bolmeIslemi(10, 0, &sonuc);
    
    switch (hata) {
        case HATA_BASARILI:
            printf("İşlem başarılı. Sonuç: %d\n", sonuc);
            break;
        case HATA_GECERSIZ_GIRIS:
            printf("Hata: Geçersiz giriş (sıfıra bölme)\n");
            break;
        default:
            printf("Bilinmeyen hata\n");
    }
    
    // 5. Try-Catch Benzeri Yapı Kullanımı
    printf("\n5. Try-Catch Benzeri Yapı Kullanımı:\n");
    int hata_kodu;
    
    TRY {
        // Hata oluşturabilecek işlemler
        FILE *dosya = fopen("test.txt", "r");
        if (dosya == NULL) {
            THROW(HATA_DOSYA_BULUNAMADI);
        }
        fclose(dosya);
        
        int *ptr = (int*)malloc(1000000000 * sizeof(int));
        if (ptr == NULL) {
            THROW(HATA_BELLEK_YETERSIZ);
        }
        free(ptr);
    }
    CATCH(hata_kodu){
        switch (hata_kodu) {
            case HATA_DOSYA_BULUNAMADI:
                printf("Hata: Dosya bulunamadı\n");
                break;
            case HATA_BELLEK_YETERSIZ:
                printf("Hata: Bellek yetersiz\n");
                break;
            default:
                printf("Bilinmeyen hata\n");
        }
    }
    
    // 6. errno Kullanımı
    printf("\n6. errno Kullanımı:\n");
    errno = 0;
    double x = sqrt(-1);
    
    if (errno != 0) {
        printf("Matematiksel işlem hatası!\n");
        printf("Hata kodu: %d\n", errno);
        perror("Matematiksel işlem hatası");
    }
    
    return 0;
} 