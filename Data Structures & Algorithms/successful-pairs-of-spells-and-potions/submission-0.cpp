class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> ans;
        int n=potions.size();
        for(int i=0;i<spells.size();i++){
            int l=0;
            int r=n-1;
            int count=0;

            while(l<=r){
                int mid=(l+r)/2;

                long long product=(long long)spells[i]* potions[mid];
                if(product>=success){
                    count=n-mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
