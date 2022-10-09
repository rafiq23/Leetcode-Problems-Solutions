class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)
        {
            return NULL;
        }
        
        vector<int> v;
        inorder(root,v);
        
        int i=0;
        int j=v.size()-1;
        
        while(i<j)
        {
            if(v[i]+v[j]==k)
            {
                return true;
            }
            
            if(v[i]+v[j]>k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        
        return false;
        
    }
    
    void inorder(TreeNode* root, vector<int> &v)
    {
        if(root==NULL)
        {
            return;
        }
        
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
};
