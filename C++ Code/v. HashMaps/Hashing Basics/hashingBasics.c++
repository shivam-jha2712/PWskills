#include <bits/stdc++.h> // HEADER FILE
#include <vector>
#include <list>

using namespace std;

class Hashing
{
public:
    // just made them public to make the main function work.
    vector<list<int>> hashtable; // A vector of linked lists used for implementing hash table.
    int buckets;                 // The number of buckets in the hash table.

public:
    Hashing(int size)
    {
        buckets = size;
        hashtable.resize(size); // Resizing the vector to 'size' number of buckets, initializing each bucket with an empty linked list.
    }

    int hashFunction(int key)
    {
        return key % buckets; // A simple hash function that returns the remainder when 'key' is divided by the number of buckets.
    }

    void addKey(int key)
    {
        // Finding the hash value of the 'key' using the hash function.
        int idx = hashFunction(key);

        // Inserting 'key' at the back of the linked list in the bucket at 'idx'.
        hashtable[idx].push_back(key);
    }

    // Searching function returns an iterator to the key value in the linked list,
    // and, thus it returns an iterator to the list at that index.
    list<int>::iterator searchKey(int key)
    {
        int idx = hashFunction(key);

        // Using std::find to search for 'key' in the linked list at index 'idx'.
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }

    // Deleting key only if it is already present in the hash table.
    void deleteKey(int key)
    {
        int idx = hashFunction(key);
        auto it = searchKey(key); // Finding the iterator to the 'key' in the linked list at index 'idx'.

        if (it != hashtable[idx].end())
        {
            hashtable[idx].erase(it); // Erasing 'key' from the linked list if it exists.
            cout << key << " is deleted" << endl;
        }
        else
        {
            cout << "No matching key is present." << endl; // 'key' not found in the hash table.
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Hashing h(10);

    // Testing addKey() function
    h.addKey(5);
    h.addKey(6);
    h.addKey(7);
    h.addKey(8);
    h.addKey(9);
    h.addKey(10);

    // Testing searchKey() function
    list<int>::iterator it = h.searchKey(7);
    if (it != h.hashtable[h.hashFunction(7)].end())
    {
        cout << "7 is found in the hash table." << endl;
    }
    else
    {
        cout << "7 is not found in the hash table." << endl;
    }

    // Testing deleteKey() function
    h.deleteKey(7); // Deleting an existing key
    h.deleteKey(7); // Deleting a non-existing key

    return 0;
}