#ifndef REVALDI_H
#define REVALDI_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Struktur Node Linked List
typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList {
    infotype info;
    address next;
} ElmtList;

// Definisi List sebagai address (pointer ke elemen pertama)
typedef address List;

// *** Fungsi Dasar Linked List ***
// Membuat node baru
void Create_Node(address *p, infotype data);
// Menghapus node
void DeAlokasi(address *p);
// Mengecek apakah list kosong
bool isEmpty(List L);
// Mencetak seluruh elemen dalam list
void PrintList(List L);

// *** Operasi Penyisipan ***
void InsVFirst(List *L, infotype X);
void InsertFirst(List *L, address P);

// *** Operasi Penghapusan ***
void DelVFirst(List *L, infotype *X);
void DelFirst(List *L, address *P);

#endif
