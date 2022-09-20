#include<bits/stdc++.h>
using namespace std;

class Node{
    
    public:
      int data;
      Node* left;
      Node* right;

      Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
      }
};

Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data < root->data){
        root->left = insertIntoBST(root->left, data);
    }else{
        root->right = insertIntoBST(root->right, data);
    }

    return root;

}

void takeInput(Node* &root){

  int data;
  cin >> data;

  while(data != -1){
    root = insertIntoBST(root, data);
    cin >> data;
  }       
}

Node* minValue(Node* root){

    Node* temp = root;

    while(temp->left!=NULL){

        temp = temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }

    return temp;
}

Node* deleteFromBST(Node* root, int data){

    if(root == NULL){
        return root;
    }

    if(root->data == data){
        
       if(root->left == NULL && root->right == NULL){
          delete root;
          return NULL;
       }

       if(root->right != NULL && root->left == NULL){
          Node* temp = root->left;
          delete root;
          return temp;
       }

       if(root->right == NULL && root->left != NULL){
        Node* temp = root->right;
        delete root;
        return temp;
       }

       if(root->right != NULL && root->left != NULL){
           
          Node* temp = minValue(root->right);
          root->data = temp->data;
          root->right = deleteFromBST(root->right, temp->data);
          return root;

       }

    }else if(root->data < data){

        root->left = deleteFromBST(root->left, data);
        return root;
    }else{
        root->right = deleteFromBST(root->right, data);
        return root;
    }

}

void levelorder(Node* root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        auto front = q.front();

        q.pop();

        if(front == NULL){

            cout << endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }else{

            cout << front->data <<" ";

            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }
}

int main(){

   Node* root = NULL;

   cout <<"Enter the data" << endl;
   takeInput(root);

   levelorder(root);

   cout << endl;

}