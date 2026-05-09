# 🚚 Lojistik Yönetim Sistemi (Logistics Management System)

Bu proje, bir lojistik firmasının şehirler arası bağlantılarını ve paket takip süreçlerini yönetmek amacıyla geliştirilmiş **C tabanlı konsol uygulamasıdır**. Sistem, Graf (Graph) ve Hash Tablosu (Hash Table) veri yapılarının hibrit bir mimaride kullanılmasını temel alır.

## ⚙️ Kullanılan Teknolojiler ve Algoritmalar

Bu proje, spesifik bellek ve veri yapısı optimizasyonları içermektedir:

*   **Dil:** C
*   **Paket Yönetimi (Hash Tablosu):** 
    *   **Algoritma:** Tip B Hash (Rolling Hash / Ağırlıklı Toplama)
    *   **Çakışma Kontrolü:** Zincirleme (Chaining) yöntemi ile bağlı liste (Linked List) kullanılarak veri kaybı önlenmiştir.
*   **Şehir/Rota Yönetimi (Graf):**
    *   **Yapı:** Komşuluk Listesi (Adjacency List)
    *   **Gezinme:** BFS (Genişlik Öncelikli Arama / Breadth-First Search) algoritması ile merkeze en yakın şehirlerin taranması sağlanmıştır.

## 📂 Dosya Yapısı (Modüler Mimari)

Proje, mantıksal katmanlarına göre çoklu dosya yapısında (modular structure) tasarlanmıştır:

```text
├── data_structures.h   # Ortak struct (City, Edge, Package) tanımlamaları
├── hash_table.h / .c   # Hash fonksiyonları ve paket arama/ekleme işlemleri
├── graph.h / .c        # Şehir bağlantıları ve BFS gezinme işlemleri
└── main.c              # Menü arayüzü ve modüllerin entegrasyonu
