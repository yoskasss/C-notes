/*
 * C Dilinde Fonksiyonlar
 * 
 * Fonksiyonlar, belirli bir işi yapmak için yazılan kod bloklarıdır.
 * Kod tekrarını önler ve programı modüler hale getirir.
 */

#include <stdio.h>

// 1. Basit Fonksiyon
void merhaba() {
    printf("Merhaba Dünya!\n");
}

// 2. Parametreli Fonksiyon
void selamla(char isim[]) {
    printf("Merhaba %s!\n", isim);
}

// 3. Değer Döndüren Fonksiyon
int topla(int a, int b) {
    return a + b;
}

// 4. Birden Fazla Parametreli Fonksiyon
float ortalama(int a, int b, int c) {
    return (float)(a + b + c) / 3;
}

// 5. Recursive (Özyinelemeli) Fonksiyon
int faktoriyel(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * faktoriyel(n - 1);
}

// 6. Fonksiyon Prototipi
int carp(int a, int b);  // Fonksiyon prototipi

// 7. Dizi Parametreli Fonksiyon
void diziYazdir(int dizi[], int boyut) {
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

// 8. Pointer Parametreli Fonksiyon
void degistir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // 1. Basit Fonksiyon Çağrısı
    printf("1. Basit Fonksiyon:\n");
    merhaba();
    
    // 2. Parametreli Fonksiyon Çağrısı
    printf("\n2. Parametreli Fonksiyon:\n");
    selamla("Ahmet");
    
    // 3. Değer Döndüren Fonksiyon Çağrısı
    printf("\n3. Değer Döndüren Fonksiyon:\n");
    int sonuc = topla(5, 3);
    printf("5 + 3 = %d\n", sonuc);
    
    // 4. Birden Fazla Parametreli Fonksiyon Çağrısı
    printf("\n4. Birden Fazla Parametreli Fonksiyon:\n");
    float ort = ortalama(10, 20, 30);
    printf("Ortalama: %.2f\n", ort);
    
    // 5. Recursive Fonksiyon Çağrısı
    printf("\n5. Recursive Fonksiyon:\n");
    int n = 5;
    printf("%d! = %d\n", n, faktoriyel(n));
    
    // 6. Fonksiyon Prototipi Kullanımı
    printf("\n6. Fonksiyon Prototipi:\n");
    printf("4 * 5 = %d\n", carp(4, 5));
    
    // 7. Dizi Parametreli Fonksiyon Çağrısı
    printf("\n7. Dizi Parametreli Fonksiyon:\n");
    int dizi[] = {1, 2, 3, 4, 5};
    diziYazdir(dizi, 5);
    
    // 8. Pointer Parametreli Fonksiyon Çağrısı
    printf("\n8. Pointer Parametreli Fonksiyon:\n");
    int x = 10, y = 20;
    printf("Değiştirmeden önce: x = %d, y = %d\n", x, y);
    degistir(&x, &y);
    printf("Değiştirdikten sonra: x = %d, y = %d\n", x, y);
    
    return 0;
}

// 6. Fonksiyon Tanımı
int carp(int a, int b) {
    return a * b;
} 