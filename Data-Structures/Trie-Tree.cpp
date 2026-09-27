#include <iostream>
#include <cstring>
using namespace std;

const int MAX_CHAR = 26;

struct Trie {
    Trie* child[MAX_CHAR];
    bool isLeaf;

    Trie() {
        memset(child, 0, sizeof(child));
        isLeaf = false;
    }

    void insert(const char* str) {
        if (*str == '\0') {
            isLeaf = true;
        } else {
            int cur = *str - 'a';
            if (child[cur] == nullptr) {
                child[cur] = new Trie();
            }
            child[cur]->insert(str + 1);
        }
    }

    bool wordExist(const char* str) {
        if (*str == '\0') {
            return isLeaf;
        }

        int cur = *str - 'a';
        if (child[cur] == nullptr) {
            return false;
        }

        return child[cur]->wordExist(str + 1);
    }

    bool prefixExist(const char* str) {
        if (*str == '\0') {
            return true;
        }

        int cur = *str - 'a';
        if (child[cur] == nullptr) {
            return false;
        }

        return child[cur]->prefixExist(str + 1);
    }
};

int main() {
    Trie root;

    root.insert("abcd");
    root.insert("xzr");
    root.insert("gaz");
    root.insert("am");
    root.insert("gbz");
    root.insert("rxd");

    cout << root.wordExist("xzr") << "\n";
    cout << root.wordExist("xyz") << "\n";
    cout << root.prefixExist("xz") << "\n";

    return 0;
}