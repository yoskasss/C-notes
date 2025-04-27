/*
 * C Dilinde Enum ve Typedef
 * 
 * Enum: Sabit değerleri temsil eden özel veri tipi
 * Typedef: Mevcut veri tiplerine yeni isimler vermek için kullanılır
 */

#include <stdio.h>

// 1. Enum Tanımlama
enum Gunler {
    PAZARTESI = 1,
    SALI,
    CARSAMBA,
    PERSEMBE,
    CUMA,
    CUMARTESI,
    PAZAR
};

// 2. Typedef ile Enum Tanımlama
typedef enum {
    KUCUK,
    ORTA,
    BUYUK
} Boyut;

// 3. Typedef ile Yapı Tanımlama
typedef struct {
    int x;
    int y;
} Nokta;

// 4. Typedef ile Pointer Tanımlama
typedef int* IntPtr;

// 5. Typedef ile Dizi Tanımlama
typedef int IntArray[10];

// Toplama ve çarpma fonksiyonları
int topla(int a, int b) {
    return a + b;
}

int carp(int a, int b) {
    return a * b;
}

// 6. Typedef ile Fonksiyon Pointer'ı Tanımlama
typedef int (*IslemFonksiyonu)(int, int);

int main() {
    // 1. Enum Kullanımı
    printf("1. Enum Kullanımı:\n");
    enum Gunler bugun = CARSAMBA;
    printf("Bugün: %d\n", bugun);
    
    // Enum değerlerini yazdır
    printf("Günler:\n");
    printf("Pazartesi: %d\n", PAZARTESI);
    printf("Salı: %d\n", SALI);
    printf("Çarşamba: %d\n", CARSAMBA);
    printf("Perşembe: %d\n", PERSEMBE);
    printf("Cuma: %d\n", CUMA);
    printf("Cumartesi: %d\n", CUMARTESI);
    printf("Pazar: %d\n", PAZAR);
    
    // 2. Typedef ile Enum Kullanımı
    printf("\n2. Typedef ile Enum Kullanımı:\n");
    Boyut urunBoyutu = ORTA;
    printf("Ürün boyutu: %d\n", urunBoyutu);
    
    // 3. Typedef ile Yapı Kullanımı
    printf("\n3. Typedef ile Yapı Kullanımı:\n");
    Nokta p1 = {10, 20};
    printf("Nokta: (%d, %d)\n", p1.x, p1.y);
    
    // 4. Typedef ile Pointer Kullanımı
    printf("\n4. Typedef ile Pointer Kullanımı:\n");
    int sayi = 42;
    IntPtr ptr = &sayi;
    printf("Pointer değeri: %d\n", *ptr);
    
    // 5. Typedef ile Dizi Kullanımı
    printf("\n5. Typedef ile Dizi Kullanımı:\n");
    IntArray dizi = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Dizi elemanları: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    
    // 6. Typedef ile Fonksiyon Pointer'ı Kullanımı
    printf("\n6. Typedef ile Fonksiyon Pointer'ı Kullanımı:\n");
    
    IslemFonksiyonu islem;
    islem = topla;
    printf("Toplama sonucu: %d\n", islem(5, 3));
    
    islem = carp;
    printf("Çarpma sonucu: %d\n", islem(5, 3));
    
    // 7. Enum Switch-Case Kullanımı
    printf("\n7. Enum Switch-Case Kullanımı:\n");
    switch (bugun) {
        case PAZARTESI:
            printf("Pazartesi\n");
            break;
        case SALI:
            printf("Salı\n");
            break;
        case CARSAMBA:
            printf("Çarşamba\n");
            break;
        case PERSEMBE:
            printf("Perşembe\n");
            break;
        case CUMA:
            printf("Cuma\n");
            break;
        case CUMARTESI:
            printf("Cumartesi\n");
            break;
        case PAZAR:
            printf("Pazar\n");
            break;
        default:
            printf("Geçersiz gün\n");
    }
    
    // 8. Typedef ile Karmaşık Yapı
    printf("\n8. Typedef ile Karmaşık Yapı:\n");
    typedef struct {
        char ad[50];
        int yas;
        Boyut boyut;
    } Kisi;
    
    Kisi kisi1 = {"Ahmet", 25, ORTA};
    printf("Kişi Bilgileri:\n");
    printf("Ad: %s\n", kisi1.ad);
    printf("Yaş: %d\n", kisi1.yas);
    printf("Boyut: %d\n", kisi1.boyut);
    
    return 0;
} 