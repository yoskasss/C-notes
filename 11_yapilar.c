/*
 * C Dilinde Yapılar (Struct)
 * 
 * Yapılar, farklı veri tiplerini bir arada tutmak için kullanılan veri yapılarıdır.
 * Yapılar, gerçek dünya nesnelerini modellemek için kullanılır.
 */

#include <stdio.h>
#include <string.h>

// 1. Basit Yapı Tanımı
struct Ogrenci {
    int numara;
    char ad[50];
    char soyad[50];
    float not;
};

// 2. typedef ile Yapı Tanımı
typedef struct {
    int x;
    int y;
} Nokta;

// 3. İç İçe Yapılar
struct Adres {
    char sokak[100];
    char sehir[50];
    char postaKodu[10];
};

struct Kisi {
    char ad[50];
    char soyad[50];
    struct Adres adres;
    int yas;
};

// 4. Yapı Dizisi
struct Ders {
    char kod[10];
    char ad[50];
    int kredi;
};

// Öğrenci yazdırma fonksiyonu
void ogrenciYazdir(struct Ogrenci o) {
    printf("Öğrenci Bilgileri:\n");
    printf("Numara: %d\n", o.numara);
    printf("Ad: %s\n", o.ad);
    printf("Soyad: %s\n", o.soyad);
    printf("Not: %.2f\n", o.not);
}

int main() {
    // 1. Basit Yapı Kullanımı
    printf("1. Basit Yapı Kullanımı:\n");
    struct Ogrenci ogrenci1;
    ogrenci1.numara = 1001;
    strcpy(ogrenci1.ad, "Ahmet");
    strcpy(ogrenci1.soyad, "Yılmaz");
    ogrenci1.not = 85.5;
    
    printf("Öğrenci Bilgileri:\n");
    printf("Numara: %d\n", ogrenci1.numara);
    printf("Ad: %s\n", ogrenci1.ad);
    printf("Soyad: %s\n", ogrenci1.soyad);
    printf("Not: %.2f\n", ogrenci1.not);
    
    // 2. typedef ile Yapı Kullanımı
    printf("\n2. typedef ile Yapı Kullanımı:\n");
    Nokta p1 = {10, 20};
    printf("Nokta: (%d, %d)\n", p1.x, p1.y);
    
    // 3. İç İçe Yapı Kullanımı
    printf("\n3. İç İçe Yapı Kullanımı:\n");
    struct Kisi kisi1;
    strcpy(kisi1.ad, "Mehmet");
    strcpy(kisi1.soyad, "Demir");
    strcpy(kisi1.adres.sokak, "Atatürk Caddesi No: 123");
    strcpy(kisi1.adres.sehir, "Ankara");
    strcpy(kisi1.adres.postaKodu, "06100");
    kisi1.yas = 30;
    
    printf("Kişi Bilgileri:\n");
    printf("Ad: %s\n", kisi1.ad);
    printf("Soyad: %s\n", kisi1.soyad);
    printf("Adres: %s, %s, %s\n", kisi1.adres.sokak, kisi1.adres.sehir, kisi1.adres.postaKodu);
    printf("Yaş: %d\n", kisi1.yas);
    
    // 4. Yapı Dizisi Kullanımı
    printf("\n4. Yapı Dizisi Kullanımı:\n");
    struct Ders dersler[3] = {
        {"CSE101", "Programlama", 6},
        {"CSE102", "Veri Yapıları", 6},
        {"CSE103", "Algoritma", 6}
    };
    
    printf("Ders Listesi:\n");
    for (int i = 0; i < 3; i++) {
        printf("Ders Kodu: %s\n", dersler[i].kod);
        printf("Ders Adı: %s\n", dersler[i].ad);
        printf("Kredi: %d\n", dersler[i].kredi);
        printf("---\n");
    }
    
    // 5. Yapı Pointer'ı
    printf("\n5. Yapı Pointer'ı:\n");
    struct Ogrenci *ptr = &ogrenci1;
    printf("Pointer ile Öğrenci Bilgileri:\n");
    printf("Numara: %d\n", ptr->numara);
    printf("Ad: %s\n", ptr->ad);
    printf("Soyad: %s\n", ptr->soyad);
    printf("Not: %.2f\n", ptr->not);
    
    // 6. Yapı Fonksiyonu
    printf("\n6. Yapı Fonksiyonu:\n");
    ogrenciYazdir(ogrenci1);
    
    // 7. Yapı Dönüştürme
    printf("\n7. Yapı Dönüştürme:\n");
    struct Ogrenci ogrenci2 = ogrenci1;  // Yapı kopyalama
    ogrenci2.numara = 1002;
    strcpy(ogrenci2.ad, "Ayşe");
    
    printf("Kopyalanan Öğrenci Bilgileri:\n");
    printf("Numara: %d\n", ogrenci2.numara);
    printf("Ad: %s\n", ogrenci2.ad);
    printf("Soyad: %s\n", ogrenci2.soyad);
    printf("Not: %.2f\n", ogrenci2.not);
    
    return 0;
} 