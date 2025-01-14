#include <iostream>
#include <vector>
#include <list>


class HashTable {
    int bucketSize;
    std::vector<std::list<int>> table;

public:
    HashTable(int size) : bucketSize(size) {
        table.resize(size);
    }

    void insert(int key) {
        int index = key % bucketSize;
        table[index].push_back(key);
    }

    bool search(int key) {
        int index = key % bucketSize;
        for (int x : table[index]) {
            if (x == key)
                return true;
        }
        return false;
    }

    void display() {
        for (int i = 0; i < bucketSize; ++i) {
            std::cout << "Bucket " << i << ":";
            for (int x : table[i]) {
                std::cout << " " << x;
            }
            std::cout << "\n";
        }
    }
};

int main() {
    HashTable ht(7);
    ht.insert(15);
    ht.insert(11);
    ht.insert(27);
    ht.insert(8);
    ht.insert(12);

    ht.display();

    std::cout << "Search 15: " << (ht.search(15) ? "Found" : "Not Found") << "\n";
    std::cout << "Search 99: " << (ht.search(99) ? "Found" : "Not Found") << "\n";
}