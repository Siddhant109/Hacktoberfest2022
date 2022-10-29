struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    int ans;
    void solve(Node* root, int K, int &idx){
        if(!root) return;
        solve(root->right, K, idx);
        if(K==idx){
            ans = root->data;
            idx++;
            return;
        }
        else idx++;
        solve(root->left, K, idx);
    }
    
    public:
    int kthLargest(Node *root, int K)
    {
        //Your code here
         int idx = 1;
        ans = -1;
        solve(root, K, idx);
        return ans;
    }
};
