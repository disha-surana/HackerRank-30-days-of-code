//Day 22: Binary Search Trees

#include <iostream>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
        
        int max(int a,int b){
            if(a>=b)
                return a;
            else
                return b;
        }
		
        int getHeight(Node* root){
           
            if(root->left==NULL && root->right==NULL)
                return 0;
            
            int l,r;
            
            if(root->left!= NULL)
                 l=getHeight(root->left);
            else
                l=0;
            if(root->right!=NULL)
                 r=getHeight(root->right);
            else
                r=0;
            
            return max(l,r)+1;
            
        }
}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}
    
       
            
        
        
