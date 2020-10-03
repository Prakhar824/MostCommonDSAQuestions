#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* newNode(int data){
  Node* temp=new Node;
  temp->data=data;
  temp->left=temp->right=NULL;
  return temp;
}

void preOrder(Node* head){
  if(head==NULL)
  return;
  cout<<head->data<<" ";
  preOrder(head->left);
  preOrder(head->right);
}

void postOrder(Node* head){
  if(head==NULL)
  return;
  postOrder(head->left);
  postOrder(head->right);
  cout<<head->data<<" ";
}

void inOrder(Node* head){
  if(head==NULL)
  return;
  inOrder(head->left);
  cout<<head->data<<" ";
  inOrder(head->right);
}

void levelOrder(Node* head){
  queue<Node*> q;
  q.push(head);
  while(!q.empty()){
    Node* temp=q.front();
    cout<<temp->data<<" ";
    q.pop();
    if(temp->left!=NULL)
    q.push(temp->left);
    if(temp->right!=NULL)
    q.push(temp->right);
  }
}


int main(){
  Node* head=newNode(10);
  head->left=newNode(20);
  head->left->left=newNode(40);
  head->left->right=newNode(50);
  head->left->right->left=newNode(70);
  head->left->right->right=newNode(80);
  head->right=newNode(30);
  head->right->right=newNode(60);
  cout<<"\nPreorder traversal:\n";
  preOrder(head);
  cout<<"\nPostorder traversal:\n";
  postOrder(head);
  cout<<"\ninorder traversal:\n";
  inOrder(head);
  cout<<"\nLevelorder traversal:\n";
  levelOrder(head);
  return 0;
}
