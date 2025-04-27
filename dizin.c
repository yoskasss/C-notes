// dizi.c - Kaynak dosyası
#include "dizi.h"
#include <stdio.h>

void diziYazdir(int dizi[], int boyut) {
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

int diziToplami(int dizi[], int boyut) {
    int toplam = 0;
    for (int i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }
    return toplam;
}

float diziOrtalamasi(int dizi[], int boyut) {
    return (float)diziToplami(dizi, boyut) / boyut;
}

int diziMax(int dizi[], int boyut) {
    int max = dizi[0];
    for (int i = 1; i < boyut; i++) {
        if (dizi[i] > max) {
            max = dizi[i];
        }
    }
    return max;
}

int diziMin(int dizi[], int boyut) {
    int min = dizi[0];
    for (int i = 1; i < boyut; i++) {
        if (dizi[i] < min) {
            min = dizi[i];
        }
    }
    return min;
}