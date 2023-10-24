// problem(69. Sqrt(x))

class Solution {
public:
    int mySqrt(int x) {
        int start=1;
        int end=x;
        int mid= start+(end-start)/2;
        int ans =-1;
        if(x == 0){
            return x;
            }
        while(start<=end){
            if(mid==x/mid){
                return mid;
            }
            else if (mid<x/mid){
                ans=mid;
                start=mid+1;
            }
              else if (mid>x/mid){
                end=mid-1;
            }
            mid= start+(end-start)/2;

        }
        return ans;
    }
};