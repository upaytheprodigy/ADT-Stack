#include "revaldi.h"

// Membuat node baru
void Create_Node(address *p, infotype data) {
    *p = (address)malloc(sizeof(ElmtList));
    if (*p != NULL) {
        (*p)->info = data;
        (*p)->next = NULL;
    } else {
        printf("Alokasi memori gagal!\n");
    }
}

// Menghapus node
void DeAlokasi(address *p) {
    free(*p);
    *p = NULL;
}

// Mengecek apakah list kosong
bool isEmpty(List L) {
    return (L == NULL);
}

// Mencetak seluruh elemen dalam list
void PrintList(List L) {
    address temp = L;
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->next;
    }
    printf("NULL\n");
}

// *** Operasi Penyisipan ***
// Menyisipkan elemen di awal list (dengan alokasi memori baru)
void InsVFirst(List *L, infotype X) {
    address P;
    Create_Node(&P, X);
    if (P != NULL) {
        InsertFirst(L, P);
    }
}

// Menyisipkan node yang sudah dialokasikan ke awal list
void InsertFirst(List *L, address P) {
    P->next = *L;
    *L = P;
}

// *** Operasi Penghapusan ***
// Menghapus elemen pertama dan mengembalikan nilainya
void DelVFirst(List *L, infotype *X) {
    address P;
    if (!isEmpty(*L)) {
        DelFirst(L, &P);
        *X = P->info;
        DeAlokasi(&P);
    }
}

// Menghapus elemen pertama dalam list
void DelFirst(List *L, address *P) {
    if (!isEmpty(*L)) {
        *P = *L;
        *L = (*P)->next;
        (*P)->next = NULL;
    }
}
