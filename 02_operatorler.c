/*
 * C Dilinde Operatörler
 * 
 * Operatörler, değişkenler ve değerler üzerinde işlem yapmak için kullanılan sembollerdir.
 */

#include <stdio.h>

int main() {
    // 1. Aritmetik Operatörler
    int a = 10, b = 3;
    printf("Aritmetik Operatörler:\n");
    printf("a + b = %d\n", a + b);    // Toplama
    printf("a - b = %d\n", a - b);    // Çıkarma
    printf("a * b = %d\n", a * b);    // Çarpma
    printf("a / b = %d\n", a / b);    // Bölme
    printf("a %% b = %d\n", a % b);   // Mod alma
    
    // 2. Karşılaştırma Operatörleri
    printf("\nKarşılaştırma Operatörleri:\n");
    printf("a > b: %d\n", a > b);     // Büyüktür
    printf("a < b: %d\n", a < b);     // Küçüktür
    printf("a == b: %d\n", a == b);   // Eşittir
    printf("a != b: %d\n", a != b);   // Eşit değildir
    printf("a >= b: %d\n", a >= b);   // Büyük eşittir
    printf("a <= b: %d\n", a <= b);   // Küçük eşittir
    
    // 3. Mantıksal Operatörler
    int x = 1, y = 0;
    printf("\nMantıksal Operatörler:\n");
    printf("x && y: %d\n", x && y);   // VE
    printf("x || y: %d\n", x || y);   // VEYA
    printf("!x: %d\n", !x);           // DEĞİL
    
    // 4. Atama Operatörleri
    int c = 5;
    printf("\nAtama Operatörleri:\n");
    c += 3;  // c = c + 3
    printf("c += 3: %d\n", c);
    c -= 2;  // c = c - 2
    printf("c -= 2: %d\n", c);
    c *= 4;  // c = c * 4
    printf("c *= 4: %d\n", c);
    c /= 2;  // c = c / 2
    printf("c /= 2: %d\n", c);
    
    // 5. Artırma/Azaltma Operatörleri
    int d = 5;
    printf("\nArtırma/Azaltma Operatörleri:\n");
    printf("d++: %d\n", d++);     // Sonra artır
    printf("++d: %d\n", ++d);     // Önce artır
    printf("d--: %d\n", d--);     // Sonra azalt
    printf("--d: %d\n", --d);     // Önce azalt
    
    // 6. Bit Operatörleri
    int e = 5, f = 3;
    printf("\nBit Operatörleri:\n");
    printf("e & f: %d\n", e & f);   // Bit AND
    printf("e | f: %d\n", e | f);   // Bit OR
    printf("e ^ f: %d\n", e ^ f);   // Bit XOR
    printf("~e: %d\n", ~e);         // Bit NOT
    printf("e << 1: %d\n", e << 1); // Sola kaydırma
    printf("e >> 1: %d\n", e >> 1); // Sağa kaydırma
    
    return 0;
} 