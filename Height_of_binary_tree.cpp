int height(Node* root) {
        if(root == NULL)
            return -1;
        int lhight = height(root->left);
        int rhight = height(root->right);
        if(lhight> rhight)
            return lhight+1;
        return rhight+1;
    }
