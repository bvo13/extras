

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        if(!root){
            return nullptr;
        }
        if(root->data==v1||root->data==v2){
            return root;
        }
        Node *l = lca(root->left,v1,v2);
        Node *r = lca(root->right,v1,v2);
        if(l&&r){
            return root;
        }
        else{
            if(l){
                return l;
            }
            return r;
        }
         
    }