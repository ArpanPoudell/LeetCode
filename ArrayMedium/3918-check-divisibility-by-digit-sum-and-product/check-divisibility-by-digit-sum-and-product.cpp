class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int x=n;
        while(x>0)
        {
            int num=x%10;
            sum+=num;
            pro*=num;
            x=x/10;
        }
        return n%(sum+pro)==0;
        
    }
};