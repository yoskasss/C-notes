/*
 * C Dilinde Bit İşlemleri
 * 
 * Bit işlemleri, verilerin bit seviyesinde manipüle edilmesini sağlar.
 * Temel bit operatörleri: &, |, ^, ~, <<, >>
 */

#include <stdio.h>

// 1. Bit AND (&)
void bitAND() {
    printf("1. Bit AND (&):\n");
    int a = 5;  // 0101
    int b = 3;  // 0011
    int sonuc = a & b;  // 0001
    
    printf("%d & %d = %d\n", a, b, sonuc);
    printf("Binary: %d & %d = %d\n", a, b, sonuc);
}

// 2. Bit OR (|)
void bitOR() {
    printf("\n2. Bit OR (|):\n");
    int a = 5;  // 0101
    int b = 3;  // 0011
    int sonuc = a | b;  // 0111
    
    printf("%d | %d = %d\n", a, b, sonuc);
    printf("Binary: %d | %d = %d\n", a, b, sonuc);
}

// 3. Bit XOR (^)
void bitXOR() {
    printf("\n3. Bit XOR (^):\n");
    int a = 5;  // 0101
    int b = 3;  // 0011
    int sonuc = a ^ b;  // 0110
    
    printf("%d ^ %d = %d\n", a, b, sonuc);
    printf("Binary: %d ^ %d = %d\n", a, b, sonuc);
}

// 4. Bit NOT (~)
void bitNOT() {
    printf("\n4. Bit NOT (~):\n");
    int a = 5;  // 0101
    int sonuc = ~a;  // 1010
    
    printf("~%d = %d\n", a, sonuc);
    printf("Binary: ~%d = %d\n", a, sonuc);
}

// 5. Sola Kaydırma (<<)
void solaKaydirma() {
    printf("\n5. Sola Kaydırma (<<):\n");
    int a = 5;  // 0101
    int sonuc = a << 2;  // 10100
    
    printf("%d << 2 = %d\n", a, sonuc);
    printf("Binary: %d << 2 = %d\n", a, sonuc);
}

// 6. Sağa Kaydırma (>>)
void sagaKaydirma() {
    printf("\n6. Sağa Kaydırma (>>):\n");
    int a = 20;  // 10100
    int sonuc = a >> 2;  // 00101
    
    printf("%d >> 2 = %d\n", a, sonuc);
    printf("Binary: %d >> 2 = %d\n", a, sonuc);
}

// 7. Bit Maskeleme
void bitMaskeleme() {
    printf("\n7. Bit Maskeleme:\n");
    int a = 42;  // 00101010
    int maske = 0x0F;  // 00001111
    
    printf("Sayı: %d\n", a);
    printf("Maske: %d\n", maske);
    printf("Sonuç: %d\n", a & maske);
}

// 8. Bit Ayarlama
void bitAyarlama() {
    printf("\n8. Bit Ayarlama:\n");
    int a = 5;  // 0101
    int bit = 2;  // 3. bit
    
    // Bit'i 1 yap
    a |= (1 << bit);
    printf("Bit %d 1 yapıldı: %d\n", bit, a);
    
    // Bit'i 0 yap
    a &= ~(1 << bit);
    printf("Bit %d 0 yapıldı: %d\n", bit, a);
}

// 9. Bit Kontrolü
void bitKontrolu() {
    printf("\n9. Bit Kontrolü:\n");
    int a = 5;  // 0101
    int bit = 2;  // 3. bit
    
    if (a & (1 << bit)) {
        printf("Bit %d 1\n", bit);
    } else {
        printf("Bit %d 0\n", bit);
    }
}

// 10. Bit Sayma
int bitSayisi(int n) {
    int sayac = 0;
    while (n) {
        sayac += n & 1;
        n >>= 1;
    }
    return sayac;
}

int main() {
    // 1. Bit AND
    bitAND();
    
    // 2. Bit OR
    bitOR();
    
    // 3. Bit XOR
    bitXOR();
    
    // 4. Bit NOT
    bitNOT();
    
    // 5. Sola Kaydırma
    solaKaydirma();
    
    // 6. Sağa Kaydırma
    sagaKaydirma();
    
    // 7. Bit Maskeleme
    bitMaskeleme();
    
    // 8. Bit Ayarlama
    bitAyarlama();
    
    // 9. Bit Kontrolü
    bitKontrolu();
    
    // 10. Bit Sayma
    printf("\n10. Bit Sayma:\n");
    int sayi = 42;
    printf("%d sayısındaki 1 bit sayısı: %d\n", sayi, bitSayisi(sayi));
    
    return 0;
} 