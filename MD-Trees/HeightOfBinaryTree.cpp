
class Solution{
    public:
    int height(struct Node* node){
        if(node == NULL)
        {
            return 0;
        }
        return std::max(height(node->left), height(node->right))+1;
    }
};