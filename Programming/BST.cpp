#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
    node(int n){
        this->data = n;
        left = NULL;
        right = NULL;
    }
};

void insert(node* head, int  n){ 
    if(n < head->data){
        if(head->left == NULL){
            head->left = new node(n);
        }
        else  insert(head->left, n);        
    }
    else
    {
        if(head->right == NULL){
            head->right = new node(n);
        }
        else  insert(head->right, n);
    }
}

void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int inorderPrecessor(node* root, int n, node *cur){
    if(root && root->right == NULL){
        cur = root;
        return root->data;
    }
    return inorderPrecessor(root->right, n, root->right);
    return inorderPrecessor(root->left, n, root->left);
}

int inorderSuccesor(node *root, int n, node *cur){
    if(root && root->left == NULL){
        cur = root->left;
        return root->data;
    }
    return inorderSuccesor(root->left, n, root->left);
    return inorderSuccesor(root->right, n, root->right);
}

void search(node* root, int n, node *cur,node *parent){
    if(root == NULL){
        cur = NULL;
        return;
    }
    if(n < root->data){
        search(root->left, n, root->left, root);
    }
    else if(n > root->data){
        search(root->right, n, root->right, root);
    }
    else{
        cur = root;
        return;
    }
}
    

void deleteNode(node *root, int n, node *cur, node *parent){
    if(n < root->data){
        deleteNode(root->left, n, root->left, root);
    }
    else if(n > root->data){
        deleteNode(root->right, n, root->right, root);
    }
    else{
        if(root->left == NULL && root->right == NULL){
            if(parent->left == root){
                parent->left = root;
            }
            else
            {
                parent->right = root;
            }
            return;
        }   
        else if(root->left == NULL){
            root->data = root->right->data;
            root->left = root->right->left;
            root->right = root->right->right;
            return;
        }
        else if(root->right == NULL){
            root->data = root->left->data;
            root->left = root->left->left;
            root->right = root->left->right;
            return;
        }
        else{}

    }
}


int main(){
    node* root = new node(8);
    insert(root, 3);  
    insert(root, 10); 
    insert(root, 1); 
    insert(root, 6); 
    insert(root, 4); 
    insert(root, 7); 
    insert(root, 14); 
    insert(root, 13); 

    // inorder(root);
    node *cur = root;
    cout << inorderSuccesor(root->right, 8, cur) << *(cur)->data;
}