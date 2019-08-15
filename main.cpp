#include <iostream>
using namespace std

struct BSTNode{
  int data;
  struct BSTNode* left;
  struct BSTNode* right;
};

BSTNode* FindMax(BSTNode** root){
  if (root == NULL){
    cout << "Error tree is empty\n";
    return -1;
  }
  
  else if(root->right == NULL){
    return root->data;
  }
  
  return FindMax(root->right);
}
