#include <stdio.h>
#include <limits.h>

void mostrarTamanhos() {
    printf("\n--- Tamanhos dos tipos (em bytes) ---\n");
    printf("short: %lu\n", sizeof(short));
    printf("unsigned short: %lu\n", sizeof(unsigned short));
    printf("int: %lu\n", sizeof(int));
    printf("unsigned int: %lu\n", sizeof(unsigned int));
    printf("long: %lu\n", sizeof(long));
    printf("unsigned long: %lu\n", sizeof(unsigned long));
    printf("char: %lu\n", sizeof(char));
    printf("unsigned char: %lu\n", sizeof(unsigned char));
}

void testarSignedShort() {
    signed short s = SHRT_MAX;
    printf("\n[signed short]\n");
    printf("Valor máximo: %d\n", s);
    s = s + 1;
    printf("Após overflow: %d\n", s);
}

void testarUnsignedShort() {
    unsigned short us = USHRT_MAX;
    printf("\n[unsigned short]\n");
    printf("Valor máximo: %u\n", us);
    us = us + 1;
    printf("Após overflow: %u\n", us);
}

void testarSignedLong() {
    signed long l = LONG_MAX;
    printf("\n[signed long]\n");
    printf("Valor máximo: %ld\n", l);
    l = l + 1;
    printf("Após overflow: %ld\n", l);
}

void testarUnsignedLong() {
    unsigned long ul = ULONG_MAX;
    printf("\n[unsigned long]\n");
    printf("Valor máximo: %lu\n", ul);
    ul = ul + 1;
    printf("Após overflow: %lu\n", ul);
}

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

void testarSignedChar() {
    signed char c = SCHAR_MAX;
    printf("\n[signed char]\n");
    printf("Valor máximo: %d\n", c);
    c = c + 1;
    printf("Após overflow: %d\n", c);
}

void testarUnsignedChar() {
    unsigned char uc = UCHAR_MAX;
    printf("\n[unsigned char]\n");
    printf("Valor máximo: %u\n", uc);
    uc = uc + 1;
    printf("Após overflow: %u\n", uc);
}

int main() {
    int opcao;

    do {
        printf("\n=== Menu Interativo ===\n");
        printf("1. Mostrar tamanhos dos tipos\n");
        printf("2. Testar signed int\n");
        printf("3. Testar unsigned int\n");
        printf("4. Testar signed char\n");
        printf("5. Testar unsigned char\n");
        printf("6. Testar signed short\n");
        printf("7. Testar unsigned short\n");
        printf("8. Testar signed long\n");
        printf("9. Testar unsigned long\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: mostrarTamanhos(); break;
            case 2: testarSignedInt(); break;
            case 3: testarUnsignedInt(); break;
            case 4: testarSignedChar(); break;
            case 5: testarUnsignedChar(); break;
            case 6: testarSignedShort(); break;
            case 7: testarUnsignedShort(); break;
            case 8: testarSignedLong(); break;
            case 9: testarUnsignedLong(); break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
