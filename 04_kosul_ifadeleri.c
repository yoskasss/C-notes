/*
 * C Dilinde Koşul İfadeleri
 * 
 * Koşul ifadeleri, programın akışını belirli koşullara göre yönlendirmek için kullanılır.
 * Temel koşul ifadeleri: if, if-else, if-else if-else
 */

#include <stdio.h>

int main() {
    int sayi;
    
    // 1. if Yapısı
    printf("if Yapısı:\n");
    sayi = 10;
    if (sayi > 0) {
        printf("%d pozitif bir sayidir.\n", sayi);
    }
    
    // 2. if-else Yapısı
    printf("\nif-else Yapısı:\n");
    sayi = -5;
    if (sayi > 0) {
        printf("%d pozitif bir sayidir.\n", sayi);
    } else {
        printf("%d negatif bir sayidir.\n", sayi);
    }
    
    // 3. if-else if-else Yapısı
    printf("\nif-else if-else Yapısı:\n");
    sayi = 0;
    if (sayi > 0) {
        printf("%d pozitif bir sayidir.\n", sayi);
    } else if (sayi < 0) {
        printf("%d negatif bir sayidir.\n", sayi);
    } else {
        printf("%d sifirdir.\n", sayi);
    }
    
    // 4. İç İçe if Yapısı
    printf("\nİç İçe if Yapısı:\n");
    int yas = 25;
    char cinsiyet = 'E';
    
    if (yas >= 18) {
        if (cinsiyet == 'E') {
            printf("Yetiskin erkek.\n");
        } else if (cinsiyet == 'K') {
            printf("Yetiskin kadin.\n");
        } else {
            printf("Gecersiz cinsiyet.\n");
        }
    } else {
        printf("Reşit değil.\n");
    }
    
    // 5. Kısa if Yapısı (Ternary Operator)
    printf("\nKısa if Yapısı (Ternary Operator):\n");
    int a = 10, b = 20;
    int buyuk = (a > b) ? a : b;
    printf("Büyük sayi: %d\n", buyuk);
    
    // 6. Mantıksal Operatörlerle Koşul İfadeleri
    printf("\nMantıksal Operatörlerle Koşul İfadeleri:\n");
    int not = 85;
    if (not >= 0 && not <= 100) {
        if (not >= 90) {
            printf("AA\n");
        } else if (not >= 80) {
            printf("BA\n");
        } else if (not >= 70) {
            printf("BB\n");
        } else if (not >= 60) {
            printf("CB\n");
        } else if (not >= 50) {
            printf("CC\n");
        } else {
            printf("FF\n");
        }
    } else {
        printf("Gecersiz not!\n");
    }
    
    return 0;
} 