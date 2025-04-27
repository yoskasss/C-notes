/*
 * C Dilinde Değişkenler ve Veri Tipleri
 * 
 * Değişkenler, program içerisinde veri depolamak için kullanılan bellek alanlarıdır.
 * Her değişkenin bir veri tipi, ismi ve değeri vardır.
 */

#include <stdio.h>

int main() {
    // 1. Temel Veri Tipleri
    
    // Tam sayı değişkenleri
    int sayi = 42;                    // 4 byte, -2,147,483,648 ile 2,147,483,647 arası
    short kisaSayi = 32767;           // 2 byte, -32,768 ile 32,767 arası
    long uzunSayi = 2147483647L;      // 4 byte, daha geniş aralık
    unsigned int pozitifSayi = 100;   // Sadece pozitif sayılar
    
    // Ondalıklı sayı değişkenleri
    float ondalikli = 3.14f;          // 4 byte, 6-7 basamak hassasiyet
    double buyukOndalikli = 3.14159;  // 8 byte, 15-16 basamak hassasiyet
    
    // Karakter değişkeni
    char karakter = 'A';              // 1 byte, tek karakter
    
    // 2. Değişken Tanımlama Kuralları
    // - Değişken isimleri harf veya alt çizgi (_) ile başlamalıdır
    // - Sadece harf, rakam ve alt çizgi kullanılabilir
    // - C büyük/küçük harf duyarlıdır (sayi ve Sayi farklı değişkenlerdir)
    // - Anahtar kelimeler (int, float, if, while vb.) kullanılamaz
    
    int _degisken1 = 10;    // Geçerli
    int degisken2 = 20;     // Geçerli
    // int 1degisken = 30;  // Geçersiz - rakamla başlayamaz
    
    // 3. Değişken Kullanımı
    printf("Tam sayi: %d\n", sayi);
    printf("Ondalikli sayi: %.2f\n", ondalikli);
    printf("Karakter: %c\n", karakter);
    
    // 4. Değişken Değerini Değiştirme
    sayi = 100;
    printf("Yeni sayi değeri: %d\n", sayi);
    
    // 5. Sabit Değişkenler (const)
    const int SABIT_SAYI = 50;
    // SABIT_SAYI = 60;  // Hata! Sabit değişken değeri değiştirilemez
    
    // 6. Değişken Boyutları
    printf("\nDeğişken Boyutları:\n");
    printf("int boyutu: %lu byte\n", sizeof(int));
    printf("float boyutu: %lu byte\n", sizeof(float));
    printf("double boyutu: %lu byte\n", sizeof(double));
    printf("char boyutu: %lu byte\n", sizeof(char));
    
    return 0;
} 