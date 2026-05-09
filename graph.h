#ifndef GRAPH_H
#define GRAPH_H
#include "data_structures.h"

#define MAX_CITIES 10

void add_city(char* name);
void add_edge(int src, int dest);
void bfs_traversal(int start_index);
int get_city_index(char* name);

extern City cities[MAX_CITIES];
extern int city_count;

#endif
