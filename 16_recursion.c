/*
 * C Dilinde Recursion (Özyineleme)
 * 
 * Recursion, bir fonksiyonun kendini çağırmasıdır.
 * Karmaşık problemleri daha basit alt problemlere bölmek için kullanılır.
 */

#include <stdio.h>

// 1. Faktöriyel Hesaplama
int faktoriyel(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * faktoriyel(n - 1);
}

// 2. Fibonacci Sayıları
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 3. Üs Alma
int usAl(int taban, int us) {
    if (us == 0) {
        return 1;
    }
    return taban * usAl(taban, us - 1);
}

// 4. Dizi Toplamı
int diziToplami(int dizi[], int n) {
    if (n <= 0) {
        return 0;
    }
    return dizi[n - 1] + diziToplami(dizi, n - 1);
}

// 5. Dizi Maksimum Elemanı
int diziMax(int dizi[], int n) {
    if (n == 1) {
        return dizi[0];
    }
    int max = diziMax(dizi, n - 1);
    return (dizi[n - 1] > max) ? dizi[n - 1] : max;
}

// 6. Dizi Minimum Elemanı
int diziMin(int dizi[], int n) {
    if (n == 1) {
        return dizi[0];
    }
    int min = diziMin(dizi, n - 1);
    return (dizi[n - 1] < min) ? dizi[n - 1] : min;
}

// 7. Dizi Ters Çevirme
void diziTersCevir(int dizi[], int baslangic, int bitis) {
    if (baslangic >= bitis) {
        return;
    }
    
    // Elemanları değiştir
    int temp = dizi[baslangic];
    dizi[baslangic] = dizi[bitis];
    dizi[bitis] = temp;
    
    // Recursive çağrı
    diziTersCevir(dizi, baslangic + 1, bitis - 1);
}

// 8. Dizi Sıralama (Quick Sort)
void quickSort(int dizi[], int baslangic, int bitis) {
    if (baslangic < bitis) {
        // Pivot seç ve böl
        int pivot = dizi[bitis];
        int i = baslangic - 1;
        
        for (int j = baslangic; j < bitis; j++) {
            if (dizi[j] <= pivot) {
                i++;
                int temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
        
        int temp = dizi[i + 1];
        dizi[i + 1] = dizi[bitis];
        dizi[bitis] = temp;
        
        int pivotIndex = i + 1;
        
        // Sol ve sağ parçaları sırala
        quickSort(dizi, baslangic, pivotIndex - 1);
        quickSort(dizi, pivotIndex + 1, bitis);
    }
}

int main() {
    // 1. Faktöriyel Hesaplama
    printf("1. Faktöriyel Hesaplama:\n");
    int n = 5;
    printf("%d! = %d\n", n, faktoriyel(n));
    
    // 2. Fibonacci Sayıları
    printf("\n2. Fibonacci Sayıları:\n");
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    
    // 3. Üs Alma
    printf("\n3. Üs Alma:\n");
    int taban = 2, us = 3;
    printf("%d^%d = %d\n", taban, us, usAl(taban, us));
    
    // 4. Dizi Toplamı
    printf("\n4. Dizi Toplamı:\n");
    int dizi[] = {1, 2, 3, 4, 5};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    printf("Dizi toplamı: %d\n", diziToplami(dizi, boyut));
    
    // 5. Dizi Maksimum Elemanı
    printf("\n5. Dizi Maksimum Elemanı:\n");
    printf("Maksimum eleman: %d\n", diziMax(dizi, boyut));
    
    // 6. Dizi Minimum Elemanı
    printf("\n6. Dizi Minimum Elemanı:\n");
    printf("Minimum eleman: %d\n", diziMin(dizi, boyut));
    
    // 7. Dizi Ters Çevirme
    printf("\n7. Dizi Ters Çevirme:\n");
    printf("Orijinal dizi: ");
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    
    diziTersCevir(dizi, 0, boyut - 1);
    
    printf("Ters çevrilmiş dizi: ");
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    
    // 8. Dizi Sıralama (Quick Sort)
    printf("\n8. Dizi Sıralama (Quick Sort):\n");
    int siralanacakDizi[] = {64, 34, 25, 12, 22, 11, 90};
    int siralanacakBoyut = sizeof(siralanacakDizi) / sizeof(siralanacakDizi[0]);
    
    printf("Sıralanmamış dizi: ");
    for (int i = 0; i < siralanacakBoyut; i++) {
        printf("%d ", siralanacakDizi[i]);
    }
    printf("\n");
    
    quickSort(siralanacakDizi, 0, siralanacakBoyut - 1);
    
    printf("Sıralanmış dizi: ");
    for (int i = 0; i < siralanacakBoyut; i++) {
        printf("%d ", siralanacakDizi[i]);
    }
    printf("\n");
    
    return 0;
} 