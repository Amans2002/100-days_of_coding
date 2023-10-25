// problem (70. Climbing Stairs)

class Solution {
public:
    int climbStairs(int n) {
        int a=1;
        int b=2;
        int ans;
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        for( int i =3;i<=n;i++){
            ans=a+b;
            a=b;
            b=ans;
        }
         return ans;
    }
};