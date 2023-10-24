// problem (217. Contains Duplicate)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return false;
        }
        sort(nums.begin(),nums.end());
        for(int i=1; i<=nums.size()-1;i++){
             if(nums[i-1]==nums[i]){
                 return true;
                 break;
             }
            
        }
        return false;
    }
};