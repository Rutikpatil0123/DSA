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

void levelOrder(Node* root){

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

Node* buildTree(Node* root){
    
    cout <<"Enter the data" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout <<"Enter thr left of " << data << endl;
    root->left = buildTree(root->left);

    cout <<"Enter thr right of " << data << endl;
    root->right = buildTree(root->right);

    return root; 
}

void inorder(Node* root){

    if(root == NULL)
    {
        return ;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root){

    if(root == NULL)
    {
        return ;
    }
    cout << root->data << " ";
    preorder(root->left);

    preorder(root->right);
}

vector<int> inorder_Treversal(Node* root){

    stack<Node*> st;
    vector<int> in;
    Node* temp = root;

    while(true){
        if(root != NULL){
            st.push(root);
            root = root->left;
        }else{

            if(st.empty()){
                break;
            }
            root = st.top();
            st.pop();
            in.push_back(root->data);
            root = root->right;
        }
    }
    return in;
}

vector<int> preorderTreversal(Node* root){

    vector<int> pre;
    if(root == NULL){
        return pre;
    }

    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        root = st.top();

        st.pop();

        pre.push_back(root->data);

        if(root->right != NULL){
            st.push(root->right);
        }

        if(root->left != NULL){
            st.push(root->left);
        }
    }

    return pre;
}

void buildTreeLevelOrder(Node* &root){

    queue<Node*> q;
    int data;
    cout <<"Enter the data of root" << endl;
    cin >> data;

    root = new Node(data);
    q.push(root);

    while(!q.empty()){

        auto front = q.front();
        q.pop();

        cout << "Enter the left node for " << front->data << endl;
        int leftdata;
        cin >> leftdata;

        if(leftdata != -1){
            front->left = new Node(leftdata);
            q.push(front->left);
        }

        cout <<"Enter the right node for " << front->data << endl;
        int rightdata;
        cin >> rightdata;

        if(rightdata != -1){
            front->right = new Node(rightdata);
            q.push(front->right);
        }
    }
}

int main(){
   
   Node* root = NULL;

   buildTreeLevelOrder(root);

   //root = buildTree(root);

   inorder(root);
   cout << endl;

   vector<int> ans = inorder_Treversal(root);

   for(auto i : ans){

    cout << i <<" ";
   }
    
    cout << endl;

//    preorder(root);
//    cout << endl;

//    vector<int> ans = preorderTreversal(root);

//    for(auto i : ans){
//      cout << i <<" ";
//    }

   //levelOrder(root);

}

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1