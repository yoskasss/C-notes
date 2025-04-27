/*
 * C Dilinde Modüler Programlama
 * 
 * Modüler programlama, programı daha küçük ve yönetilebilir parçalara böler.
 * Header dosyaları ve kaynak dosyaları kullanılır.
 */








// main.c - Ana program
#include <stdio.h>
#include "matematik.h"
#include "dizi.h"

int main() {
    // 1. Matematik Modülü Kullanımı
    printf("1. Matematik Modülü Kullanımı:\n");
    int a = 10, b = 5;
    
    printf("Toplama: %d\n", topla(a, b));
    printf("Çıkarma: %d\n", cikar(a, b));
    printf("Çarpma: %d\n", carp(a, b));
    printf("Bölme: %.2f\n", bol(a, b));
    
    // 2. Dizi Modülü Kullanımı
    printf("\n2. Dizi Modülü Kullanımı:\n");
    int dizi[] = {1, 2, 3, 4, 5};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    
    printf("Dizi elemanları: ");
    diziYazdir(dizi, boyut);
    
    printf("Dizi toplamı: %d\n", diziToplami(dizi, boyut));
    printf("Dizi ortalaması: %.2f\n", diziOrtalamasi(dizi, boyut));
    printf("Dizi maksimum: %d\n", diziMax(dizi, boyut));
    printf("Dizi minimum: %d\n", diziMin(dizi, boyut));
    
    // 3. Modüllerin Birlikte Kullanımı
    printf("\n3. Modüllerin Birlikte Kullanımı:\n");
    int dizi2[] = {10, 20, 30, 40, 50};
    int boyut2 = sizeof(dizi2) / sizeof(dizi2[0]);
    
    printf("Dizi elemanları: ");
    diziYazdir(dizi2, boyut2);
    
    int toplam = diziToplami(dizi2, boyut2);
    float ortalama = diziOrtalamasi(dizi2, boyut2);
    
    printf("Toplam: %d\n", toplam);
    printf("Ortalama: %.2f\n", ortalama);
    printf("Toplam * 2: %d\n", carp(toplam, 2));
    printf("Ortalama / 2: %.2f\n", bol(toplam, 2));
    
    return 0;
} 