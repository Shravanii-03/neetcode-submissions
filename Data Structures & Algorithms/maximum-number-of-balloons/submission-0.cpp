class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<int, int> mp;
        for(int i=0;i<text.size();i++){
            mp[text[i]]++;
        }

        mp['l']=mp['l']/2;
        mp['o']=mp['o']/2;

         int ans = min({mp['b'], mp['a'], mp['l'], mp['o'], mp['n']});

        return ans;
    }
};