/*
#include <iostream>
using namespace std;

______________ _______ _________________ = 10;  // size of the hash table

class _____________ {
private:
    int table[_______________________];

public:
    HashTable() {
        // initialize all slots to -1 (means empty)
        for (int i = 0; i < TABLE_SIZE; i++) {
            _____________________ = __________;
        }
    }

    // simple hash function: key modulo table size
    int hashFunction(_______ key) {
        return _____________________________;
    }

    void insert(int key) {
        int index = hashFunction(key);

        // if slot is already taken, use linear probing
        while (table[index] != ________) {
            index = (____________ + 1) % _______________________;

        }

        table[index] = ______________;
        cout << "Inserted " << key << " at index " << index << endl;
    }

    void display() {
        cout << "\n----- HASH TABLE -----\n";
        for (int i = 0; i < ________________; i++) {
            cout <<"[" <<__________ << "]: ";
            if (table[i] == -1)
                cout << "____________________}" << endl;
            else
                cout << ________________ << endl;
        }
    }
};

int main() {
    HashTable ht;

    ht.insert(88);
    ht.insert(44);
    ht.insert(37);
    ht.insert(98);
    ht.insert(100);
    ht.insert(85);
    ht.insert(54);

    ht.display();

    return 0;
}
*/