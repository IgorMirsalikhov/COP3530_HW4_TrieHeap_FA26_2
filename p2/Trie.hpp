#ifndef TRIE_HPP
#define TRIE_HPP

#include <string>
#include <vector>
#include "TrieNode.hpp"

class Trie {
public:
    Trie();
    Trie(const std::vector<std::string>& v);
    void insert(const std::string& s);
    bool search(const std::string& s) const;
    bool contains(const std::string& word) const; 
    

    void print() const; 
    
private:
    TrieNode* root;
    int word_count;
    void print(const TrieNode* node, std::string& word) const;

    char IndexToLetter(int i) const;
    int letterToIndex(char i) const;
};

#endif
