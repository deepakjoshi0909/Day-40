class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;  
        
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int size = q.size();
            Node* prev = nullptr;
            
            for (int i = 0; i < size; i++) {
                Node* current = q.front();
                q.pop();
                
                if (prev) {
                    prev->next = current;
                }
                prev = current;
                
                if (current->left) q.push(current->left);
                if (current->right) q.push(current->right);
            }
            
            prev->next = nullptr;
        }
        
        return root;
    }
};
