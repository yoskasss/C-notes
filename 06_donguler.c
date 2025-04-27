/*
 * C Dilinde Döngüler
 * 
 * Döngüler, belirli bir işlemi tekrar tekrar yapmak için kullanılır.
 * Temel döngü tipleri: for, while, do-while
 */

#include <stdio.h>

int main() {
    int i;
    
    // 1. for Döngüsü
    printf("for Döngüsü:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // 2. while Döngüsü
    printf("\nwhile Döngüsü:\n");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    // 3. do-while Döngüsü
    printf("\ndo-while Döngüsü:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");
    
    // 4. İç İçe Döngüler
    printf("\nİç İçe Döngüler:\n");
    for (i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }
    
    // 5. break Kullanımı
    printf("\nbreak Kullanımı:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            break;  // Döngüyü sonlandır
        }
        printf("%d ", i);
    }
    printf("\n");
    
    // 6. continue Kullanımı
    printf("\ncontinue Kullanımı:\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Bu iterasyonu atla
        }
        printf("%d ", i);
    }
    printf("\n");
    
    // 7. Sonsuz Döngü
    printf("\nSonsuz Döngü (Ctrl+C ile sonlandırılabilir):\n");
    /*
    while (1) {
        printf("Sonsuz döngü...\n");
    }
    */
    
    // 8. for Döngüsü ile Dizi İşlemleri
    printf("\nfor Döngüsü ile Dizi İşlemleri:\n");
    int dizi[] = {10, 20, 30, 40, 50};
    for (i = 0; i < 5; i++) {
        printf("dizi[%d] = %d\n", i, dizi[i]);
    }
    
    // 9. while Döngüsü ile Kullanıcı Girişi
    printf("\nwhile Döngüsü ile Kullanıcı Girişi:\n");
    int sayi;
    printf("Pozitif bir sayı girin (0 ile sonlandır): ");
    while (1) {
        scanf("%d", &sayi);
        if (sayi == 0) {
            break;
        }
        if (sayi > 0) {
            printf("Girilen sayı: %d\n", sayi);
        } else {
            printf("Lütfen pozitif bir sayı girin!\n");
        }
    }
    
    return 0;
} 