class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxi=0;
        for(auto x: st){
            if(st.find(x-1)==st.end()){
                 int len=1;
            int cur=x;
            

            while(st.find(cur+1)!=st.end()){
                len++;
                cur++;
            }
           maxi=max(len, maxi);
        }
        }
        return maxi;
    }

};
