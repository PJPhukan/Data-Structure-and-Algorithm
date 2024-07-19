
#include <bits/stdc++.h>
using namespace std;
 
/* A binary tree tNode has data, a pointer to left child
   and a pointer to right child */
struct tNode {
    int data;
    struct tNode* left;
    struct tNode* right;
};
 
/* Function to traverse the binary tree without recursion
   and without stack */
void MorrisTraversal(struct tNode* root)
{
    struct tNode *current, *pre;
     if (root == NULL)
        return;
 
    current = root;
    while (current != NULL) {
 
        if (current->left == NULL) {
            cout << current->data << " ";
            current = current->right;
        }
        else {
             /* Find the inorder predecessor of current */
            pre = current->left;
            while (pre->right != NULL
                   && pre->right != current)
                pre = pre->right;
 
            /* Make current as the right child of its
               inorder predecessor */
            if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }
 
            /* Revert the changes made in the 'if' part to
               restore the original tree i.e., fix the right
               child of predecessor */
            else {
                pre->right = NULL;
                cout << current->data << " ";
                current = current->right;
            } 
        } 
    } 
}