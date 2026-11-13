class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        unordered_map<int, int> mp;

        // Step 1: Count frequencies
        for(int i = 0; i < arr1.size(); i++) {
            mp[arr1[i]]++;
        }

        // Step 2: Add elements in order of arr2
        for(int i = 0; i < arr2.size(); i++) {
            while(mp[arr2[i]] > 0) {
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }

        // Step 3: Collect remaining elements
        vector<int> remaining;

        for(auto it : mp) {
            while(it.second > 0) {
                remaining.push_back(it.first);
                it.second--;
            }
        }

        // Step 4: Sort remaining elements
        sort(remaining.begin(), remaining.end());

        // Step 5: Append remaining elements
        for(int i = 0; i < remaining.size(); i++) {
            ans.push_back(remaining[i]);
        }

        return ans;
    }
};