#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_table.h"

Package* hashTable[TABLE_SIZE];

void init_hash_table() {
    int i; // Degisken disarida tanimlandi
    for (i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = NULL;
    }
}

unsigned int hash_function_type_B(char* str) {
    unsigned int hash = 0;
    while (*str) {
        hash = (hash * 31) + *str++;
    }
    return hash % TABLE_SIZE;
}

void insert_package(char* id, char* city) {
    unsigned int index = hash_function_type_B(id);
    Package* new_node = (Package*)malloc(sizeof(Package));
    strcpy(new_node->id, id);
    strcpy(new_node->city_name, city);
    
    new_node->next = hashTable[index];
    hashTable[index] = new_node;
    printf("Paket %s, Indeks %u konumuna eklendi.\n", id, index);
}

void search_package(char* id) {
    unsigned int index = hash_function_type_B(id);
    Package* temp = hashTable[index];
    while (temp) {
        if (strcmp(temp->id, id) == 0) {
            printf("Paket Bulundu: %s -> Sehir: %s\n", temp->id, temp->city_name);
            return;
        }
        temp = temp->next;
    }
    printf("Paket bulunamadi.\n");
}
