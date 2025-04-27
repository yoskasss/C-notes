/*
 * C Dilinde Dinamik Bellek Yönetimi
 * 
 * Dinamik bellek yönetimi, program çalışırken bellek ayırma ve serbest bırakma işlemleridir.
 * Temel fonksiyonlar: malloc(), calloc(), realloc(), free()
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. malloc() Kullanımı
    printf("1. malloc() Kullanımı:\n");
    int *ptr1 = (int*)malloc(5 * sizeof(int));
    
    if (ptr1 == NULL) {
        printf("Bellek ayırma başarısız!\n");
        return 1;
    }
    
    // Belleği kullan
    for (int i = 0; i < 5; i++) {
        ptr1[i] = (i + 1) * 10;
    }
    
    printf("malloc ile ayrılan bellek içeriği: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\n");
    
    // Belleği serbest bırak
    free(ptr1);
    
    // 2. calloc() Kullanımı
    printf("\n2. calloc() Kullanımı:\n");
    int *ptr2 = (int*)calloc(5, sizeof(int));
    
    if (ptr2 == NULL) {
        printf("Bellek ayırma başarısız!\n");
        return 1;
    }
    
    // Belleği kullan
    for (int i = 0; i < 5; i++) {
        ptr2[i] = (i + 1) * 20;
    }
    
    printf("calloc ile ayrılan bellek içeriği: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");
    
    // 3. realloc() Kullanımı
    printf("\n3. realloc() Kullanımı:\n");
    int *ptr3 = (int*)realloc(ptr2, 10 * sizeof(int));
    
    if (ptr3 == NULL) {
        printf("Bellek yeniden ayırma başarısız!\n");
        free(ptr2);
        return 1;
    }
    
    // Yeni belleği kullan
    for (int i = 5; i < 10; i++) {
        ptr3[i] = (i + 1) * 30;
    }
    
    printf("realloc ile genişletilmiş bellek içeriği: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr3[i]);
    }
    printf("\n");
    
    // Belleği serbest bırak
    free(ptr3);
    
    // 4. Dinamik 2D Dizi
    printf("\n4. Dinamik 2D Dizi:\n");
    int satir = 3, sutun = 4;
    int **matris = (int**)malloc(satir * sizeof(int*));
    
    if (matris == NULL) {
        printf("Bellek ayırma başarısız!\n");
        return 1;
    }
    
    for (int i = 0; i < satir; i++) {
        matris[i] = (int*)malloc(sutun * sizeof(int));
        if (matris[i] == NULL) {
            printf("Bellek ayırma başarısız!\n");
            // Önceki satırları serbest bırak
            for (int j = 0; j < i; j++) {
                free(matris[j]);
            }
            free(matris);
            return 1;
        }
    }
    
    // Matrisi doldur
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            matris[i][j] = (i + 1) * (j + 1);
        }
    }
    
    // Matrisi yazdır
    printf("Dinamik 2D dizi içeriği:\n");
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    
    // Belleği serbest bırak
    for (int i = 0; i < satir; i++) {
        free(matris[i]);
    }
    free(matris);
    
    // 5. Dinamik String
    printf("\n5. Dinamik String:\n");
    char *str = (char*)malloc(50 * sizeof(char));
    
    if (str == NULL) {
        printf("Bellek ayırma başarısız!\n");
        return 1;
    }
    
    // String'i doldur
    sprintf(str, "Bu bir dinamik string örneğidir.");
    printf("Dinamik string: %s\n", str);
    
    // String'i genişlet
    str = (char*)realloc(str, 100 * sizeof(char));
    if (str == NULL) {
        printf("Bellek yeniden ayırma başarısız!\n");
        return 1;
    }
    
    // String'e ekle
    strcat(str, " Genişletilmiş hali.");
    printf("Genişletilmiş string: %s\n", str);
    
    // Belleği serbest bırak
    free(str);
    
    return 0;
} 