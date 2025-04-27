/*
 * C Dilinde Switch-Case Yapısı
 * 
 * Switch-case yapısı, bir değişkenin değerine göre farklı işlemler yapmak için kullanılır.
 * if-else yapısına alternatif olarak kullanılabilir.
 */

#include <stdio.h>

int main() {
    int secim;
    
    // 1. Basit Switch-Case Yapısı
    printf("Basit Switch-Case Yapısı:\n");
    printf("1-5 arası bir sayı girin: ");
    scanf("%d", &secim);
    
    switch (secim) {
        case 1:
            printf("Birinci seçenek\n");
            break;
        case 2:
            printf("İkinci seçenek\n");
            break;
        case 3:
            printf("Üçüncü seçenek\n");
            break;
        case 4:
            printf("Dördüncü seçenek\n");
            break;
        case 5:
            printf("Beşinci seçenek\n");
            break;
        default:
            printf("Geçersiz seçim!\n");
    }
    
    // 2. Break Kullanımı
    printf("\nBreak Kullanımı:\n");
    printf("1-3 arası bir sayı girin: ");
    scanf("%d", &secim);
    
    switch (secim) {
        case 1:
            printf("Birinci seçenek\n");
            break;  // break olmazsa diğer case'lere geçer
        case 2:
            printf("İkinci seçenek\n");
            break;
        case 3:
            printf("Üçüncü seçenek\n");
            break;
        default:
            printf("Geçersiz seçim!\n");
    }
    
    // 3. Break Olmadan Kullanım
    printf("\nBreak Olmadan Kullanım:\n");
    printf("1-3 arası bir sayı girin: ");
    scanf("%d", &secim);
    
    switch (secim) {
        case 1:
            printf("Birinci seçenek\n");
            // break yok
        case 2:
            printf("İkinci seçenek\n");
            // break yok
        case 3:
            printf("Üçüncü seçenek\n");
            break;
        default:
            printf("Geçersiz seçim!\n");
    }
    
    // 4. Karakter ile Switch-Case
    printf("\nKarakter ile Switch-Case:\n");
    char harf;
    printf("Bir harf girin (A-C): ");
    scanf(" %c", &harf);
    
    switch (harf) {
        case 'A':
        case 'a':
            printf("A harfi seçildi\n");
            break;
        case 'B':
        case 'b':
            printf("B harfi seçildi\n");
            break;
        case 'C':
        case 'c':
            printf("C harfi seçildi\n");
            break;
        default:
            printf("Geçersiz harf!\n");
    }
    
    // 5. İç İçe Switch-Case
    printf("\nİç İçe Switch-Case:\n");
    int anaSecim, altSecim;
    printf("Ana seçim (1-2): ");
    scanf("%d", &anaSecim);
    
    switch (anaSecim) {
        case 1:
            printf("Alt seçim (1-2): ");
            scanf("%d", &altSecim);
            switch (altSecim) {
                case 1:
                    printf("Ana 1 - Alt 1\n");
                    break;
                case 2:
                    printf("Ana 1 - Alt 2\n");
                    break;
                default:
                    printf("Geçersiz alt seçim!\n");
            }
            break;
        case 2:
            printf("Alt seçim (1-2): ");
            scanf("%d", &altSecim);
            switch (altSecim) {
                case 1:
                    printf("Ana 2 - Alt 1\n");
                    break;
                case 2:
                    printf("Ana 2 - Alt 2\n");
                    break;
                default:
                    printf("Geçersiz alt seçim!\n");
            }
            break;
        default:
            printf("Geçersiz ana seçim!\n");
    }
    
    return 0;
} 