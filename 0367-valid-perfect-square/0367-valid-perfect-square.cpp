class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num ==0 )return 0;
        if(num ==1) return 1;
        long long i=2;
        while(i*i<=num){
            if(i*i==num)return  true;
             else if(i*i<num) i++;
             else return false;
        }
        return false;
    }
};