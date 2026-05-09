#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "graph.h"

City cities[MAX_CITIES];
int city_count = 0;

void add_city(char* name) {
    if (city_count < MAX_CITIES) {
        strcpy(cities[city_count].name, name);
        cities[city_count].neighbors = NULL;
        city_count++;
    }
}

void add_edge(int src, int dest) {
    Edge* new_edge = (Edge*)malloc(sizeof(Edge));
    new_edge->dest_index = dest;
    new_edge->next = cities[src].neighbors;
    cities[src].neighbors = new_edge;
}

void bfs_traversal(int start_index) {
    int visited[MAX_CITIES];
    int queue[MAX_CITIES];
    int front = 0, rear = 0;
    int i; // Degiskenler disarida

    for(i = 0; i < MAX_CITIES; i++) visited[i] = 0;

    visited[start_index] = 1;
    queue[rear++] = start_index;

    printf("BFS Gezintisi: ");
    while (front < rear) {
        int curr = queue[front++];
        printf("%s ", cities[curr].name);

        Edge* temp = cities[curr].neighbors;
        while (temp) {
            if (!visited[temp->dest_index]) {
                visited[temp->dest_index] = 1;
                queue[rear++] = temp->dest_index;
            }
            temp = temp->next;
        }
    }
    printf("\n");
}

int get_city_index(char* name) {
    int i;
    for (i = 0; i < city_count; i++) {
        if (strcmp(cities[i].name, name) == 0) return i;
    }
    return -1;
}
