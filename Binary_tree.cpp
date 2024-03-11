// Binary tree all about
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;

// Node creation
class node
{
public:
    int data;
    node *left;
    node *right;
    // constructor
    node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Build tree

node *buildTree(node *root)
{
    int data;
    cout << "Enter the data :";
    cin >> data;
    root = new node(data);

    // base case
    if (data == -1)
    {
        return nullptr;
    }

    cout << "Enter data for inserting left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

// level order traversel also khown depth first
void LevelOrderTreaversal(node *root)
{
    /*
    //Print one line
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }

   */

    // Print level wise
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

/// Teaversal
void InOrderTraversal(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    InOrderTraversal(root->left);
    cout << root->data << " ";
    InOrderTraversal(root->right);
}
void PreOrderTraversal(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}
void PostOrderTraversal(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << " ";
}

// Create tree from level order traversal
node *CreateTreeFromLevelOrder()
{
    queue<node *> q;
    int data;
    cout << "Enter data for root :";
    cin >> data;
    node *root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "Enter data for left of " << temp->data << " : ";
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            node *leftNode = new node(leftData);
            temp->left = leftNode;
            q.push(temp->left);
        }

        cout << "Enter data for right of " << temp->data << " : ";
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            node *rightNode = new node(rightData);
            temp->right = rightNode;
            q.push(temp->right);
        }
    }
    cout<<endl;
    return root;
}
int main()
{
    /*
    // input  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = nullptr;

    // Creating tree
    root = buildTree(root);

    // Traversal
    // Level order traversal
    cout << "Lavel order traversal !" << endl;
    LevelOrderTreaversal(root);

    // Inorder traversal
    cout << "InOrder traversal :";
    InOrderTraversal(root);
    cout << endl;

    // Preorder traversal
    cout << "PreOrder traversal :";
    PreOrderTraversal(root);
    cout << endl;

    // Postorder traversal
    cout << "PostOrder traversal :";
    PostOrderTraversal(root);
    cout << endl;
    */

    // Build tree from level order traversal
    //input: 3 7 6 13 24 17 4 18 12 11 23 3 5 31 32 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
    cout<<"Print tree which is create using level order traversal"<<endl;

    LevelOrderTreaversal(CreateTreeFromLevelOrder());
    return 0;
}