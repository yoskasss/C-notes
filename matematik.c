// matematik.c - Kaynak dosyası
#include "matematik.h"

int topla(int a, int b) {
    return a + b;
}

int cikar(int a, int b) {
    return a - b;
}

int carp(int a, int b) {
    return a * b;
}

float bol(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return (float)a / b;
}
