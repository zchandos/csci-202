//Write definition of search, isItemAtEqual, retrieve, remove, print, and constructor
//based upon a method of your choice from the powerpoint or otherwise. Write a test program
// to test with at least 3 different hashing functions.

//Definition: "isItemAtEqual" checks to see if the passed item matches the value of the index in the hash table.

//Definition: "retrieve" gets the value of the current index of the hash table.

//Definition: "print", prints the hash table values.

//Definition : "remove", removes a specified index within a hashtable

#include <iostream>
#include <string>

using namespace std;

const int TABLE_SIZE = 128;

class HashEntry {
public:
    int key;
    string value;
    HashEntry(int key, string value) {
        this->key = key;
        this->value = value;
    }
};

class HashMap {
private:
    HashEntry **table;
public:
    HashMap() {
        table = new HashEntry*[TABLE_SIZE];
        for (int i = 0; i < TABLE_SIZE; i++) {
            table[i] = NULL;
        }
    }

    int hashFunction(int key) {
        return key % TABLE_SIZE;
    }

    void insert(int key, string value) {
        int hash = hashFunction(key);
        while (table[hash] != NULL && table[hash]->key != key) {
            hash = hashFunction(hash + 1);
        }
        if (table[hash] != NULL) {
            delete table[hash];
        }
        table[hash] = new HashEntry(key, value);
    }

    string search(int key) {
        int hash = hashFunction(key);
        while (table[hash] != NULL && table[hash]->key != key) {
            hash = hashFunction(hash + 1);
        }
        if (table[hash] == NULL) {
            return "Key not found";
        } else {
            return table[hash]->value;
        }
    }

    void remove(int key) {
        int hash = hashFunction(key);
        while (table[hash] != NULL) {
            if (table[hash]->key == key) {
                break;
            }
            hash = hashFunction(hash + 1);
        }
        if (table[hash] == NULL) {
            cout << "Key not found" << endl;
        } else {
            delete table[hash];
            table[hash] = NULL;
            cout << "Key deleted" << endl;
        }
    }

    ~HashMap() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            if (table[i] != NULL) {
                delete table[i];
            }
        }
        delete[] table;
    }
};

int main() {
    HashMap map;
    map.insert(1, "Zach");
    map.insert(2, "Clayton");
    map.insert(3, "Chris");
    cout << "Search for key 1: " << map.search(1) << endl;
    cout << "Search for key 4: " << map.search(4) << endl;
    map.remove(2);
    cout << "Search for key 2: " << map.search(2) << endl;
    return 0;
}