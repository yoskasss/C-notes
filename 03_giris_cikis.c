/*
 * C Dilinde Giriş/Çıkış İşlemleri
 * 
 * C dilinde giriş/çıkış işlemleri için stdio.h kütüphanesi kullanılır.
 * Temel giriş/çıkış fonksiyonları: printf(), scanf(), getchar(), putchar()
 */

#include <stdio.h>

int main() {
    // 1. printf() Fonksiyonu
    printf("printf() Fonksiyonu:\n");
    printf("Merhaba Dünya!\n");
    
    // Format belirteçleri
    int sayi = 42;
    float ondalikli = 3.14;
    char karakter = 'A';
    char metin[] = "C Programlama";
    
    printf("Tam sayi: %d\n", sayi);
    printf("Ondalikli sayi: %.2f\n", ondalikli);
    printf("Karakter: %c\n", karakter);
    printf("Metin: %s\n", metin);
    
    // 2. scanf() Fonksiyonu
    int girilenSayi;
    float girilenOndalikli;
    char girilenKarakter;
    char girilenMetin[50];
    
    printf("\nscanf() Fonksiyonu:\n");
    printf("Bir tam sayi girin: ");
    scanf("%d", &girilenSayi);
    printf("Girilen sayi: %d\n", girilenSayi);
    
    printf("Bir ondalikli sayi girin: ");
    scanf("%f", &girilenOndalikli);
    printf("Girilen ondalikli sayi: %.2f\n", girilenOndalikli);
    
    printf("Bir karakter girin: ");
    scanf(" %c", &girilenKarakter);  // Boşluk önemli!
    printf("Girilen karakter: %c\n", girilenKarakter);
    
    printf("Bir metin girin: ");
    scanf("%s", girilenMetin);
    printf("Girilen metin: %s\n", girilenMetin);
    
    // 3. getchar() ve putchar() Fonksiyonları
    printf("\ngetchar() ve putchar() Fonksiyonları:\n");
    printf("Bir karakter girin: ");
    char ch = getchar();
    printf("Girilen karakter: ");
    putchar(ch);
    printf("\n");
    
    // 4. gets() ve puts() Fonksiyonları (Dikkat: Güvenli değil!)
    char metin2[100];
    printf("\ngets() ve puts() Fonksiyonları:\n");
    printf("Bir metin girin: ");
    gets(metin2);  // Güvenli değil, fgets() kullanılmalı
    printf("Girilen metin: ");
    puts(metin2);
    
    // 5. fgets() Fonksiyonu (Güvenli metin girişi)
    char metin3[100];
    printf("\nfgets() Fonksiyonu:\n");
    printf("Bir metin girin: ");
    fgets(metin3, sizeof(metin3), stdin);
    printf("Girilen metin: %s", metin3);
    
    return 0;
} 