// Trie

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;

// creating a trie node
class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char data)
    {
        this->data = data;
        isTerminal = false;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
    }
};
class Trie
{

public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }

    // Insert word
    void insertUtilTrie(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // find the character index
        char ch = word[0];
        int index = ch - 'A';

        TrieNode *child;

        // if character is present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // if not of present then create a new TrieNode
        else
        {
            root->children[index] = new TrieNode(ch);
            child = root->children[index];
        }

        // recursive call
        insertUtilTrie(child, word.substr(1));
    }
    void insertWord(string word)
    {
        insertUtilTrie(root, word);
    }

    // Search word
    bool searchUtilTrie(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        // find the character index
        char ch = word[0];
        int index = ch - 'A';
        TrieNode *child;
        // if character is present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // if not of present then return false
        else
        {
            return false;
        }
        return searchUtilTrie(child, word.substr(1));
    }

    bool search(string word)
    {
        return searchUtilTrie(root, word);
    }

    // delete character
    void deleteUtils(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {

            root->isTerminal = false;
            return;
        }
        char ch = word[0];
        int index = ch - 'A';
        TrieNode *child = root->children[index];
        if (child == nullptr)
            return;
        deleteUtils(child, word.substr(1));
    }
};

int main()
{
    Trie *t = new Trie();
    t->insertWord("HELLO");
    t->insertWord("PARAG");
    bool checkPresent = t->search("HELLO");
    if (checkPresent)
    {
        cout << "Word found!" << endl;
    }
    else
    {
        cout << "Word not found!" << endl;
    }

    // delete 'HELLO ' form the trie
    t->deleteUtils(t->root, "HELLO");

    // check HELLO successfully deleted or not
    checkPresent = t->search("HELLO");
    if (checkPresent)
    {
        cout << "Word found!" << endl;
    }
    else
    {
        cout << "Word not found!" << endl;
    }
    return 0;
}