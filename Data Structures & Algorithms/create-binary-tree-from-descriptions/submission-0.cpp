class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> mp;
        unordered_set<int> children;

        for(int i=0;i<descriptions.size();i++){
            int parent=descriptions[i][0];
            int child=descriptions[i][1];
            int isleft=descriptions[i][2];

            if(mp.find(parent)==mp.end()){
                mp[parent]=new TreeNode(parent);
            }
            if(mp.find(child)==mp.end()){
                mp[child]=new TreeNode(child);
            }
            if(isleft==1){
                mp[parent]->left=mp[child];
            }
            else{
                mp[parent]->right=mp[child];
            }
            children.insert(child);
        }
        for(auto it: mp){
            if(children.find(it.first)==children.end()){
                return it.second;
            }
        }
        return  nullptr;
    }
};
