/*
 * C Dilinde Önişlemci Direktifleri
 * 
 * Önişlemci direktifleri, derleme öncesi işlemler için kullanılır.
 * Temel direktifler: #include, #define, #ifdef, #ifndef, #endif
 */

#include <stdio.h>

// 1. #define ile Makro Tanımlama
#define PI 3.14159
#define KARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// 2. Koşullu Derleme
#define DEBUG 1

// 3. Çoklu Satır Makro
#define YAZDIR(x) \
    printf("Değer: %d\n", x); \
    printf("Karesi: %d\n", KARE(x))

// 4. String Birleştirme
#define BIRLESTIR(x, y) x##y

// 5. String Dönüştürme
#define STR(x) #x

int main() {
    // 1. #define Kullanımı
    printf("1. #define Kullanımı:\n");
    printf("PI değeri: %f\n", PI);
    printf("5'in karesi: %d\n", KARE(5));
    printf("MAX(10, 20): %d\n", MAX(10, 20));
    
    // 2. Koşullu Derleme
    printf("\n2. Koşullu Derleme:\n");
    #ifdef DEBUG
        printf("Debug modu aktif\n");
    #else
        printf("Debug modu pasif\n");
    #endif
    
    // 3. Çoklu Satır Makro Kullanımı
    printf("\n3. Çoklu Satır Makro Kullanımı:\n");
    YAZDIR(5);
    
    // 4. String Birleştirme
    printf("\n4. String Birleştirme:\n");
    int BIRLESTIR(sayi, 1) = 100;
    printf("sayi1 değeri: %d\n", sayi1);
    
    // 5. String Dönüştürme
    printf("\n5. String Dönüştürme:\n");
    printf("String olarak: %s\n", STR(Hello));
    
    // 6. #if, #elif, #else Kullanımı
    printf("\n6. #if, #elif, #else Kullanımı:\n");
    #define VERSION 2
    
    #if VERSION == 1
        printf("Versiyon 1\n");
    #elif VERSION == 2
        printf("Versiyon 2\n");
    #else
        printf("Bilinmeyen versiyon\n");
    #endif
    
    // 7. #pragma Kullanımı
    printf("\n7. #pragma Kullanımı:\n");
    #pragma message("Bu bir derleme mesajıdır")
    
    // 8. #error Kullanımı
    printf("\n8. #error Kullanımı:\n");
    #define STANDART 1
    #ifndef STANDART
        #error "STANDART tanımlanmamış!"
    #endif
    
    // 9. #undef Kullanımı
    printf("\n9. #undef Kullanımı:\n");
    #define TEST 100
    printf("TEST değeri: %d\n", TEST);
    #undef TEST
    // printf("TEST değeri: %d\n", TEST);  // Hata! TEST tanımlı değil
    
    // 10. #line Kullanımı
    printf("\n10. #line Kullanımı:\n");
    #line 100 "yeni_dosya.c"
    printf("Satır numarası: %d\n", __LINE__);
    printf("Dosya adı: %s\n", __FILE__);
    
    return 0;
} 