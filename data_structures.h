#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

// Paket bilgileri (Hash Tablosu için)
typedef struct Package {
    char id[20];
    char city_name[50];
    struct Package* next; // Zincirleme (Chaining) için
} Package;

// Graf yapýsý (Komþuluk Listesi)
typedef struct Edge {
    int dest_index;
    struct Edge* next;
} Edge;

typedef struct City {
    char name[50];
    Edge* neighbors;
} City;

#endif
