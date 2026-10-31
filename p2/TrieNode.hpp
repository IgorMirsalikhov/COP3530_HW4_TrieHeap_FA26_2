#ifndef HASHNODE_HPP
#define HASHNODE_HPP

#include <string>

const int ALPHABET_SIZE = 26;

// Trie Node class
class TrieNode {
public:
    TrieNode* children[ALPHABET_SIZE] = {};
    bool end_of_word = false;
};


#endif 
