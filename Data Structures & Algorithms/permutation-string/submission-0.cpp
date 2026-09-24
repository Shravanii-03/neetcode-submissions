class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.length();
        if(s1.length()>s2.length()){
            return false;
        }

        for(int i=0;i<s2.length();i++){
        string sub=s2.substr(i, k);

        vector<int>ans1(26,0);
        vector<int>ans2(26,0);
        for(char c: s1){
            ans1[c-'a']++;
        }
        for(char e: sub){
            ans2[e-'a']++;
        }

        if(ans1==ans2){
            return true;
        }

    }
    return false;
    }
};
