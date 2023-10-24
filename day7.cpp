// problem (74. Search a 2D Matrix)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int end=matrix.size()*matrix[0].size()-1;
        int n=matrix[0].size();
        while(start<=end){
              int mid =start+(end-start)/2;
              int row_ind=mid/n;
              int col_ind=mid%n;
            if ( matrix[row_ind][col_ind]==target){
                return true;
                 }
            else if( matrix[row_ind][col_ind]<target){
                start=mid+1;
            }
            else if( matrix[row_ind][col_ind]>target){
                end=mid-1;
            }
           
        }
        return false;

    }
};
