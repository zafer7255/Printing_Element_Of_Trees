#include<iostream>
using namespace std;

class node
{
    public:
    int value;
    node* right;
    node* left;
    node(int v)
    {
        value = v;
        left = right = NULL;
    }

};

void Display_At_paticular_Level(node* root , int level)
{
    if (level == 0)
    {
        cout << root->value << endl;
    }
    else
    {
        Display_At_paticular_Level(root->left , level-1);
        Display_At_paticular_Level(root->right , level-1);
    }

};

int main()
{
    system("clear");
     node *root = new node(50);
    root->left = new node(25);
    root->right = new node(75);
    root->left->right = new node(30);
    root->left->left = new node(20);
    root->right->right = new node(80);
    root->right->left = new node(70);
    Display_At_paticular_Level(root , 1);

};
