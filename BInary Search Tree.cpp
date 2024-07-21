// Binary Search Tree
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void CreateBST(node *&root, int data)
{
    if (root == nullptr)
        root = new node(data);
    else
    {
        if (data < root->data)
            CreateBST(root->left, data);
        else
            CreateBST(root->right, data);
    }
    return;
}

void DisplayInorder(node *root)
{
    if (root != nullptr)
    {
        DisplayInorder(root->left);
        cout << root->data << " ";
        DisplayInorder(root->right);
    }
    return;
}

// Finding max value of a binary search tree
int FindMaxValue(node *root)
{
    if (root == nullptr)
        return -1;
    while (root->right != nullptr)
        root = root->right;
    return root->data;
}

// Finding minimum value of a binary search tree
int FindMinValue(node *root)
{
    if (root == nullptr)
    {
        return -1;
    }
    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root->data;
}
// Delete node

// Approch :1(using Recurson)
void DeleteNode(node *&root, int data)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data == data)
    {
        // First case: No chile node present
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
            return;
        }

        // Second Case: Only left Child present
        else if (root->right == NULL && root->left != NULL)
        {
            node *temp = root;
            root = root->left;
            delete temp;
        }

        // Third Case: Only Right Child Present
        else if (root->left == NULL && root->right != NULL)
        {
            node *temp = root;
            root = root->right;
            delete temp;
        }

        // Fourth Case: Two Child/ Subtree present
        else
        {
            // way:1-> change the value with the left subtree max value
            int maxValue = FindMaxValue(root->left);
            root->data = maxValue;
            DeleteNode(root->left, maxValue);
            /*
            //way:2-> change the value with the right subtree min value
            int minValue= FindMinValue(root->right);
            root->data= minValue;
            DeleteNode(root->right,minValue);
             */
        }
    }
    else if (root->data > data)
    {
        DeleteNode(root->left, data);
    }
    else
    {
        DeleteNode(root->right, data);
    }
}

// Approch:2(Using iterative)
void DeleteNodeIterative(node *&root, int data)
{
    //   TODO:Complete this Functions
}
int main()
{
    node *root = nullptr;
    cout << "Enter data to create Binary Search Tree " << endl;
    int data;
    cout << "Enter data: ";
    cin >> data;
    while (data != -1)
    {
        CreateBST(root, data);
        cout << "Enter data: ";
        cin >> data;
    }
    DisplayInorder(root);
    cout << endl;
    cout << "Maximum value of Binary Search Tree :" << FindMaxValue(root) << endl;
    cout << "Minimum value of Binary Search Tree :" << FindMinValue(root) << endl;

    cout << "Deleting Node ...... Proccessing..." << endl;
    DeleteNode(root, 14);
    DisplayInorder(root);
    return 0;
}