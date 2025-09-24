#include <stdio.h>
#include <limits.h>

void testarSignedInt() {
    signed int x = INT_MAX;
    printf("\n[signed int]\n");
    printf("Valor máximo: %d\n", x);
    x = x + 1;
    printf("Após overflow: %d\n", x);
}

void testarUnsignedInt() {
    unsigned int y = UINT_MAX;
    printf("\n[unsigned int]\n");
    printf("Valor máximo: %u\n", y);
    y = y + 1;
    printf("Após overflow: %u\n", y);
}

void testarChar() {
    signed char c = SCHAR_MAX;
    printf("\n[signed char]\n");
    printf("Valor máximo: %d\n", c);
    c = c + 1;
    printf("Após overflow: %d\n", c);

    unsigned char uc = UCHAR_MAX;
    printf("\n[unsigned char]\n");
    printf("Valor máximo: %u\n", uc);
    uc = uc + 1;
    printf("Após overflow: %u\n", uc);
}

void mostrarTamanhos() {
    printf("\n--- Tamanhos dos tipos (em bytes) ---\n");
    printf("int: %lu\n", sizeof(int));
    printf("unsigned int: %lu\n", sizeof(unsigned int));
    printf("char: %lu\n", sizeof(char));
    printf("unsigned char: %lu\n", sizeof(unsigned char));
    printf("short: %lu\n", sizeof(short));
    printf("long: %lu\n", sizeof(long));
}

int main() {
    mostrarTamanhos();
    testarSignedInt();
    testarUnsignedInt();
    testarChar();

    return 0;
}
