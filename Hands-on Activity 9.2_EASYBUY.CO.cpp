
#include <iostream>
using namespace std;


struct Node{
    char val;
  Node* left;
  Node* right;
  
  Node(char val) : val(val), left(nullptr), right(nullptr) {}
};

void preorder(Node* node){
	if (node == nullptr) return;

	cout<< node-> val<< " ";
	preorder(node->left);
	preorder(node->right);

};

void inorder(Node* node){
	if (node == nullptr) return;
	inorder(node->left);
	cout << node-> val<< " " ;
	inorder(node -> right);
};


void postorder(Node* node){
	if (node == nullptr) return;
	postorder(node->left);
	postorder(node->right);
	cout << node-> val<< " ";

};



int main() {
    Node* root = new Node('A');
    root-> left = new Node('B');
    root-> right = new Node('C');
    root-> left-> left = new Node('D');
    root-> left -> right = new Node('E');
    root-> right -> left = new Node('F');
    root-> right -> right = new Node('G');
    
    
    cout << "PRE ORDER TRAVERSAL: ";
    preorder(root);
    cout << endl;
    
    
    cout << "INORDER TRAVERSAL: ";
    inorder(root);
    cout << endl;
    
    
    cout << "POSTORDER TRAVERSAL: ";
    postorder(root);
    cout << endl;
    
    
    
    

    return 0;
}