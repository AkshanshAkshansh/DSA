class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int res=0;
        int d;
        while(n!=0){
            d=n%10;
            if(num%d==0){
                res++;
            }
            n=n/10;
        }
        return res;
    }
};