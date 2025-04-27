/*
 * C Standart Kütüphanesi
 * 
 * C standart kütüphanesi, programlama için gerekli temel fonksiyonları içerir.
 * Temel kütüphaneler: stdio.h, stdlib.h, string.h, math.h, time.h
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main() {
    // 1. stdio.h Kütüphanesi
    printf("1. stdio.h Kütüphanesi:\n");
    
    // printf ve scanf
    int sayi;
    printf("Bir sayı girin: ");
    scanf("%d", &sayi);
    printf("Girilen sayı: %d\n", sayi);
    
    // Dosya işlemleri
    FILE *dosya = fopen("test.txt", "w");
    if (dosya != NULL) {
        fprintf(dosya, "Bu bir test dosyasıdır.\n");
        fclose(dosya);
    }
    
    // 2. stdlib.h Kütüphanesi
    printf("\n2. stdlib.h Kütüphanesi:\n");
    
    // Rastgele sayı üretme
    srand(time(NULL));
    int rastgele = rand() % 100;
    printf("Rastgele sayı: %d\n", rastgele);
    
    // String dönüştürme
    char sayiStr[] = "123";
    int sayi2 = atoi(sayiStr);
    printf("String'den sayıya dönüşüm: %d\n", sayi2);
    
    // Bellek yönetimi
    int *ptr = (int*)malloc(5 * sizeof(int));
    if (ptr != NULL) {
        for (int i = 0; i < 5; i++) {
            ptr[i] = i + 1;
        }
        printf("Dinamik dizi: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", ptr[i]);
        }
        printf("\n");
        free(ptr);
    }
    
    // 3. string.h Kütüphanesi
    printf("\n3. string.h Kütüphanesi:\n");
    
    // String kopyalama
    char str1[50] = "Merhaba";
    char str2[50];
    strcpy(str2, str1);
    printf("Kopyalanan string: %s\n", str2);
    
    // String birleştirme
    strcat(str1, " Dünya");
    printf("Birleştirilmiş string: %s\n", str1);
    
    // String karşılaştırma
    if (strcmp(str1, str2) == 0) {
        printf("Stringler aynı\n");
    } else {
        printf("Stringler farklı\n");
    }
    
    // String uzunluğu
    printf("String uzunluğu: %lu\n", strlen(str1));
    
    // 4. math.h Kütüphanesi
    printf("\n4. math.h Kütüphanesi:\n");
    
    // Temel matematik fonksiyonları
    double x = 2.5;
    printf("Karekök: %.2f\n", sqrt(x));
    printf("Kare: %.2f\n", pow(x, 2));
    printf("Sinüs: %.2f\n", sin(x));
    printf("Kosinüs: %.2f\n", cos(x));
    printf("Mutlak değer: %.2f\n", fabs(-x));
    
    // 5. time.h Kütüphanesi
    printf("\n5. time.h Kütüphanesi:\n");
    
    // Zaman işlemleri
    time_t simdi = time(NULL);
    struct tm *zaman = localtime(&simdi);
    
    printf("Şu anki zaman: %s", asctime(zaman));
    printf("Saat: %d:%d:%d\n", zaman->tm_hour, zaman->tm_min, zaman->tm_sec);
    printf("Tarih: %d/%d/%d\n", zaman->tm_mday, zaman->tm_mon + 1, zaman->tm_year + 1900);
    
    // 6. ctype.h Kütüphanesi
    printf("\n6. ctype.h Kütüphanesi:\n");
    
    // Karakter işlemleri
    char ch = 'A';
    printf("Büyük harf mi? %d\n", isupper(ch));
    printf("Küçük harf mi? %d\n", islower(ch));
    printf("Harf mi? %d\n", isalpha(ch));
    printf("Rakam mı? %d\n", isdigit(ch));
    printf("Boşluk mu? %d\n", isspace(ch));
    
    // 7. Sıralama ve Arama
    printf("\n7. Sıralama ve Arama:\n");
    
    int dizi[] = {5, 2, 8, 1, 9};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    
    // qsort kullanımı
    qsort(dizi, boyut, sizeof(int), (int (*)(const void*, const void*))strcmp);
    
    printf("Sıralanmış dizi: ");
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    
    // bsearch kullanımı
    int aranan = 8;
    int *sonuc = (int*)bsearch(&aranan, dizi, boyut, sizeof(int), (int (*)(const void*, const void*))strcmp);
    
    if (sonuc != NULL) {
        printf("%d sayısı dizide bulundu\n", *sonuc);
    } else {
        printf("%d sayısı dizide bulunamadı\n", aranan);
    }
    
    return 0;
} 