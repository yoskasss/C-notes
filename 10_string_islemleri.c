/*
 * C Dilinde String İşlemleri
 * 
 * Stringler, karakter dizileridir ve sonlarında null karakter ('\0') bulunur.
 * String işlemleri için string.h kütüphanesi kullanılır.
 */

#include <stdio.h>
#include <string.h>

int main() {
    // 1. String Tanımlama
    printf("1. String Tanımlama:\n");
    char str1[] = "Merhaba";
    char str2[20] = "Dünya";
    char str3[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    
    // 2. String Uzunluğu
    printf("\n2. String Uzunluğu:\n");
    printf("str1 uzunluğu: %lu\n", strlen(str1));
    printf("str2 uzunluğu: %lu\n", strlen(str2));
    printf("str3 uzunluğu: %lu\n", strlen(str3));
    
    // 3. String Kopyalama
    printf("\n3. String Kopyalama:\n");
    char hedef[50];
    strcpy(hedef, str1);
    printf("Kopyalanan string: %s\n", hedef);
    
    // 4. String Birleştirme
    printf("\n4. String Birleştirme:\n");
    char birlesik[100] = "";
    strcat(birlesik, str1);
    strcat(birlesik, " ");
    strcat(birlesik, str2);
    printf("Birleştirilmiş string: %s\n", birlesik);
    
    // 5. String Karşılaştırma
    printf("\n5. String Karşılaştırma:\n");
    char str4[] = "Merhaba";
    char str5[] = "Merhaba";
    char str6[] = "Dünya";
    
    if (strcmp(str4, str5) == 0) {
        printf("str4 ve str5 aynı\n");
    } else {
        printf("str4 ve str5 farklı\n");
    }
    
    if (strcmp(str4, str6) == 0) {
        printf("str4 ve str6 aynı\n");
    } else {
        printf("str4 ve str6 farklı\n");
    }
    
    // 6. String Arama
    printf("\n6. String Arama:\n");
    char metin[] = "Merhaba Dünya";
    char aranan[] = "Dünya";
    
    char *sonuc = strstr(metin, aranan);
    if (sonuc != NULL) {
        printf("'%s' metni '%s' içinde bulundu\n", aranan, metin);
        printf("Bulunduğu konum: %ld\n", sonuc - metin);
    } else {
        printf("'%s' metni '%s' içinde bulunamadı\n", aranan, metin);
    }
    
    // 7. String Parçalama
    printf("\n7. String Parçalama:\n");
    char cumle[] = "Merhaba,Dünya,C";
    char *parca = strtok(cumle, ",");
    
    while (parca != NULL) {
        printf("Parça: %s\n", parca);
        parca = strtok(NULL, ",");
    }
    
    // 8. String Dönüştürme
    printf("\n8. String Dönüştürme:\n");
    char sayiStr[] = "123";
    int sayi = atoi(sayiStr);
    printf("String'den sayıya dönüşüm: %d\n", sayi);
    
    // 9. String Formatlama
    printf("\n9. String Formatlama:\n");
    char formatli[100];
    sprintf(formatli, "%s %s %d", str1, str2, 2024);
    printf("Formatlanmış string: %s\n", formatli);
    
    // 10. String Karakter İşlemleri
    printf("\n10. String Karakter İşlemleri:\n");
    char str7[] = "Merhaba";
    
    // Büyük harfe çevirme
    for (int i = 0; str7[i] != '\0'; i++) {
        if (str7[i] >= 'a' && str7[i] <= 'z') {
            str7[i] = str7[i] - 32;
        }
    }
    printf("Büyük harfler: %s\n", str7);
    
    // Küçük harfe çevirme
    for (int i = 0; str7[i] != '\0'; i++) {
        if (str7[i] >= 'A' && str7[i] <= 'Z') {
            str7[i] = str7[i] + 32;
        }
    }
    printf("Küçük harfler: %s\n", str7);
    
    return 0;
} 