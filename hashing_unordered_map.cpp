#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> hashTable;
    hashTable[1] = "one";
    hashTable[2] = "two";

    for (const auto& pair : hashTable) {
        std::cout << pair.first << " -> " << pair.second << "\n";
    }

    return 0;
}