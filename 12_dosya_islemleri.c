/*
 * C Dilinde Dosya İşlemleri
 * 
 * Dosya işlemleri, programın kalıcı veri saklamasını sağlar.
 * Dosya işlemleri için stdio.h kütüphanesi kullanılır.
 */

#include <stdio.h>
#include <stdlib.h>

// Dosya içeriğini yazdırma fonksiyonu
void dosyaYazdir(FILE *dosya) {
    char karakter;
    while ((karakter = fgetc(dosya)) != EOF) {
        printf("%c", karakter);
    }
}

int main() {
    FILE *dosya;
    char metin[100];
    
    // 1. Dosya Yazma
    printf("1. Dosya Yazma:\n");
    dosya = fopen("ornek.txt", "w");
    
    if (dosya == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }
    
    fprintf(dosya, "Merhaba Dünya!\n");
    fprintf(dosya, "Bu bir test dosyasıdır.\n");
    fprintf(dosya, "C programlama dili ile yazılmıştır.\n");
    
    fclose(dosya);
    printf("Dosya başarıyla yazıldı.\n");
    
    // 2. Dosya Okuma
    printf("\n2. Dosya Okuma:\n");
    dosya = fopen("ornek.txt", "r");
    
    if (dosya == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }
    
    printf("Dosya içeriği:\n");
    while (fgets(metin, sizeof(metin), dosya) != NULL) {
        printf("%s", metin);
    }
    
    fclose(dosya);
    
    // 3. Dosyaya Ekleme
    printf("\n3. Dosyaya Ekleme:\n");
    dosya = fopen("ornek.txt", "a");
    
    if (dosya == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }
    
    fprintf(dosya, "Bu satır dosyaya eklendi.\n");
    
    fclose(dosya);
    printf("Dosyaya başarıyla eklendi.\n");
    
    // 4. Dosya İçeriğini Yazdırma
    printf("\n4. Dosya İçeriğini Yazdırma:\n");
    dosyaYazdir(dosya);
    
    // 5. Binary Dosya İşlemleri
    printf("\n5. Binary Dosya İşlemleri:\n");
    int sayilar[] = {1, 2, 3, 4, 5};
    
    // Binary dosyaya yazma
    dosya = fopen("sayilar.bin", "wb");
    
    if (dosya == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }
    
    fwrite(sayilar, sizeof(int), 5, dosya);
    fclose(dosya);
    printf("Binary dosya başarıyla yazıldı.\n");
    
    // Binary dosyadan okuma
    int okunanSayilar[5];
    dosya = fopen("sayilar.bin", "rb");
    
    if (dosya == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }
    
    fread(okunanSayilar, sizeof(int), 5, dosya);
    fclose(dosya);
    
    printf("Okunan sayılar: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", okunanSayilar[i]);
    }
    printf("\n");
    
    // 6. Dosya Konumu İşlemleri
    printf("\n6. Dosya Konumu İşlemleri:\n");
    dosya = fopen("ornek.txt", "r");
    
    if (dosya == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }
    
    // Dosyanın başına git
    fseek(dosya, 0, SEEK_SET);
    printf("Dosyanın başındaki satır: ");
    fgets(metin, sizeof(metin), dosya);
    printf("%s", metin);
    
    // Dosyanın sonuna git
    fseek(dosya, 0, SEEK_END);
    long dosyaBoyutu = ftell(dosya);
    printf("Dosya boyutu: %ld byte\n", dosyaBoyutu);
    
    fclose(dosya);
    
    // 7. Dosya Silme
    printf("\n7. Dosya Silme:\n");
    if (remove("sayilar.bin") == 0) {
        printf("Dosya başarıyla silindi.\n");
    } else {
        printf("Dosya silinemedi!\n");
    }
    
    return 0;
} 