class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();

        int l=0;
        int h=r*c-1;

        while(l<=h){
            int mid=(l+h)/2;

            int row=mid/c;
            int col=mid% c;

            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
};
