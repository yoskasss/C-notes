/*
 * C Dilinde Diziler
 * 
 * Diziler, aynı tipteki verileri bir arada tutmak için kullanılan veri yapılarıdır.
 * Diziler 0'dan başlayan indekslere sahiptir.
 */

#include <stdio.h>

int main() {
    // 1. Tek Boyutlu Diziler
    printf("Tek Boyutlu Diziler:\n");
    
    // Dizi tanımlama
    int sayilar[5] = {10, 20, 30, 40, 50};
    
    // Dizi elemanlarına erişim
    printf("Dizi elemanları:\n");
    for (int i = 0; i < 5; i++) {
        printf("sayilar[%d] = %d\n", i, sayilar[i]);
    }
    
    // 2. Dizi Boyutu
    printf("\nDizi Boyutu:\n");
    int boyut = sizeof(sayilar) / sizeof(sayilar[0]);
    printf("Dizi boyutu: %d\n", boyut);
    
    // 3. Dizi Elemanlarını Değiştirme
    printf("\nDizi Elemanlarını Değiştirme:\n");
    sayilar[2] = 35;
    printf("Değiştirilmiş dizi elemanları:\n");
    for (int i = 0; i < 5; i++) {
        printf("sayilar[%d] = %d\n", i, sayilar[i]);
    }
    
    // 4. Çok Boyutlu Diziler
    printf("\nÇok Boyutlu Diziler:\n");
    int matris[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Matris elemanlarına erişim
    printf("Matris elemanları:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    
    // 5. Karakter Dizileri (String)
    printf("\nKarakter Dizileri (String):\n");
    char metin[] = "Merhaba Dünya";
    printf("Metin: %s\n", metin);
    
    // String uzunluğu
    int uzunluk = 0;
    while (metin[uzunluk] != '\0') {
        uzunluk++;
    }
    printf("Metin uzunluğu: %d\n", uzunluk);
    
    // 6. Dizi Sıralama (Bubble Sort)
    printf("\nDizi Sıralama (Bubble Sort):\n");
    int dizi[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    
    printf("Sıralanmamış dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    
    // Bubble Sort algoritması
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (dizi[j] > dizi[j+1]) {
                // Elemanları değiştir
                int temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
        }
    }
    
    printf("Sıralanmış dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    
    // 7. Dizi Arama (Linear Search)
    printf("\nDizi Arama (Linear Search):\n");
    int aranan = 25;
    int bulundu = 0;
    
    for (int i = 0; i < n; i++) {
        if (dizi[i] == aranan) {
            printf("%d sayısı dizinin %d. indeksinde bulundu.\n", aranan, i);
            bulundu = 1;
            break;
        }
    }
    
    if (!bulundu) {
        printf("%d sayısı dizide bulunamadı.\n", aranan);
    }
    
    return 0;
} 