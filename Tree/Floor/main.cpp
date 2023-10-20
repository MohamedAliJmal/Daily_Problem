//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

   Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{

public:
    // int floor(Node* root, int x) 
    // {
    //     // Code here
    //     int tmp;
    //     if(root->data>x && root->left==NULL) return -1;
        
    //     if(root->data==x) return x;
    //     else if(root->data>x)
    //     {
    //         tmp=floor(root->left,x);
    //         if(tmp==x) return x;
    //         else if(tmp!=-1) return max(root->data,tmp);
    //         else return tmp;
    //     }
    //     else if(root->data<x)
    //     {
    //         tmp=floor(root->right,x);
    //         if(tmp==x) return x;
    //         else if(tmp!=-1) return max(root->data,tmp);
    //         else return tmp;
    //     }
    // }

    int floor(Node* root, int x) {
        // Code here
        int ans = -1 ;
        Node * node = root;
        while(node != NULL) {
            if(node -> data <= x) {
                ans = max(ans , node -> data);
                node = node -> right;
            }
            else node = node -> left;
        }
        return ans;
    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        // Node *root = new Node(30);
        // root->left=new Node(20);root->left->left=new Node(15);root->left->right=new Node(25);
        // root->right=new Node(50);root->right->right=new Node(70);root->right->left=new Node(40);
        Node *root=NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends