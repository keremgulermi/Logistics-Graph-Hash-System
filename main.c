#include <stdio.h>
#include "hash_table.h"
#include "graph.h"

int main() {
    init_hash_table();

    // 1. Graf Kurulumu
    add_city("Istanbul");
    add_city("Ankara");
    add_city("Izmir");
    add_city("Bursa");
    
    add_edge(0, 1); // Istanbul -> Ankara
    add_edge(0, 3); // Istanbul -> Bursa
    add_edge(1, 2); // Ankara -> Izmir
    add_edge(3, 2); // Bursa -> Izmir

    // 2. Paket Ekleme
    insert_package("TR101", "Istanbul");
    insert_package("TR102", "Ankara");
    insert_package("TR103", "Izmir");
    insert_package("TR104", "Bursa");
    insert_package("TR105", "Istanbul");

    int choice;
    char search_id[20];

    while (1) {
        printf("\n--- Lojistik Yonetim Sistemi ---\n");
        printf("1. Paket Ara (Hash Table)\n");
        printf("2. Sehirleri Gez (BFS)\n");
        printf("3. Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Paket ID giriniz: ");
            scanf("%s", search_id);
            search_package(search_id);
        } else if (choice == 2) {
            bfs_traversal(0);
        } else if (choice == 3) {
            break;
        }
    }
    return 0;
}
