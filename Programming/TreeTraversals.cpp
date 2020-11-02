#include<bits/stdc++.h>
using namespace std;
int count   =0, max = 0;

struct Node{
    Node* left;
    Node* right;
    int data;
    Node(int n){
        this->data = n;
        left = NULL;
        right = NULL;
    }
};       

// struct tree(){
//     node *head, *q;
//     tree(){
//         head = NULL;
//     }
//     push(int n){
//         node* temp = new node(n);
//         if(head == NULL){
//             head = temp;
//         }
//         q->next = temp;
//         q = temp;
//     }
// }
int maxn(int a, int b){
    return (a<b)? b: a;
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int max_height(Node* root){
    if(root == NULL) return 0;
    else
    {
        int lh = max_height(root->left);
        int rh = max_height(root->right);
        if(lh > rh) return (lh+1);
        else return (rh+1);
    }
}


void levelordertraversal(Node* root, int h){
    if(root == NULL) return;
    if(h == 0){
        cout << root->data << " ";
        // h++;
        return;
    }
    levelordertraversal(root->left, h-1);
    levelordertraversal(root->right, h-1);
}

void printLOT(Node* root, int height){
    for(int i = 0; i < height; i++){
        levelordertraversal(root, i);
    }
}

void LOTbfs(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        if(q.front()->left != NULL) q.push(q.front()->left);
        if(q.front()->right != NULL) q.push(q.front()->right);
        int p = q.front()->data;
        q.pop();
        cout << p << " ";
    }
}

int diameter(Node* root){
    if(root == NULL) return 0;
    int temp = max_height(root->left) + max_height(root->right);
    // if(max < temp) max = temp;
    int ld = diameter(root->left);
    int rd = diameter(root->right);
    return maxn(temp + 1, maxn(ld,rd));
}

int diameteropt(Node* root, int& h){
    if(root == NULL) return 0;
    int lheight = diameteropt(root->left, h);
    int rheight = diameteropt(root->right, h);
    h = maxn(1 + lheight + rheight, h);
    return maxn(lheight, rheight) + 1;
} 
int diameteropt(Node* root){
    int h = 0;
    diameteropt(root, h);
    return h;
}

int main(){
    struct Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5); 
    root->right->left = new Node(6);
    root->right->left = new Node(7);
    root->right->left->left = new Node(8);
    root->right->left->right = new Node(9);
    root->right->left->right->right = new Node(10);
    // inorder(root);
    // cout << endl;
    // preorder(root);
    // cout << endl;
    // postorder(root);
    // cout << max_height(root);
    // int height = max_height(root);
    // printLOT(root, height);
    // LOTbfs(root);
    // cout << diameter(root) ;
    cout << diameteropt(root);
}