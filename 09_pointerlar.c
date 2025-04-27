/*
 * C Dilinde Pointerlar (İşaretçiler)
 * 
 * Pointerlar, değişkenlerin bellek adreslerini tutan değişkenlerdir.
 * Bellek yönetimi ve veri yapıları için önemlidir.
 */

#include <stdio.h>

// Değerleri değiştiren fonksiyon
void degistir(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    // 1. Temel Pointer Kullanımı
    printf("1. Temel Pointer Kullanımı:\n");
    int sayi = 42;
    int *ptr = &sayi;  // sayi değişkeninin adresini ptr'ye ata
    
    printf("sayi değeri: %d\n", sayi);
    printf("sayi adresi: %p\n", (void*)&sayi);
    printf("ptr değeri (adres): %p\n", (void*)ptr);
    printf("ptr'nin gösterdiği değer: %d\n", *ptr);
    
    // 2. Pointer ile Değer Değiştirme
    printf("\n2. Pointer ile Değer Değiştirme:\n");
    *ptr = 100;  // ptr'nin gösterdiği adresteki değeri değiştir
    printf("Yeni sayi değeri: %d\n", sayi);
    
    // 3. Pointer Aritmetiği
    printf("\n3. Pointer Aritmetiği:\n");
    int dizi[] = {10, 20, 30, 40, 50};
    int *diziPtr = dizi;  // dizi[0]'ın adresini al
    
    printf("dizi[0] = %d\n", *diziPtr);
    diziPtr++;  // Bir sonraki elemana git
    printf("dizi[1] = %d\n", *diziPtr);
    diziPtr += 2;  // İki eleman ileri git
    printf("dizi[3] = %d\n", *diziPtr);
    
    // 4. Pointer ile Dizi İşlemleri
    printf("\n4. Pointer ile Dizi İşlemleri:\n");
    int *p = dizi;
    for (int i = 0; i < 5; i++) {
        printf("dizi[%d] = %d\n", i, *(p + i));
    }
    
    // 5. Çoklu Pointer (Pointer to Pointer)
    printf("\n5. Çoklu Pointer:\n");
    int x = 10;
    int *p1 = &x;
    int **p2 = &p1;
    
    printf("x = %d\n", x);
    printf("*p1 = %d\n", *p1);
    printf("**p2 = %d\n", **p2);
    
    // 6. Void Pointer
    printf("\n6. Void Pointer:\n");
    void *vp = &sayi;
    printf("Void pointer ile sayi değeri: %d\n", *(int*)vp);
    
    // 7. Pointer ile String İşlemleri
    printf("\n7. Pointer ile String İşlemleri:\n");
    char *str = "Merhaba";
    while (*str != '\0') {
        printf("%c", *str);
        str++;
    }
    printf("\n");
    
    // 8. Pointer ile Fonksiyon Parametresi
    printf("\n8. Pointer ile Fonksiyon Parametresi:\n");
    int a = 5, b = 10;
    printf("Değiştirmeden önce: a = %d, b = %d\n", a, b);
    
    degistir(&a, &b);
    printf("Değiştirdikten sonra: a = %d, b = %d\n", a, b);
    
    // 9. Dinamik Bellek Yönetimi
    printf("\n9. Dinamik Bellek Yönetimi:\n");
    int *dinamikDizi = (int*)malloc(5 * sizeof(int));
    
    if (dinamikDizi != NULL) {
        for (int i = 0; i < 5; i++) {
            dinamikDizi[i] = (i + 1) * 10;
        }
        
        printf("Dinamik dizi elemanları: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", dinamikDizi[i]);
        }
        printf("\n");
        
        free(dinamikDizi);  // Belleği serbest bırak
    }
    
    return 0;
} 