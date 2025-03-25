#include "stack.h"

int main() {
    int desimal;

    printf("Masukkan bilangan desimal: ");
    scanf("%d", &desimal);

    if (desimal < 0) {
        printf("Bilangan harus positif!\n");
    } else {
        KonversiDesimalKeBiner(desimal);
    }

    return 0;
}