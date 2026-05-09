#ifndef HASH_TABLE_H
#define HASH_TABLE_H
#include "data_structures.h"

#define TABLE_SIZE 13

void init_hash_table();
unsigned int hash_function_type_B(char* str);
void insert_package(char* id, char* city);
void search_package(char* id);
void display_hash_table(); // Bellek raporu için yardýmcý

#endif
