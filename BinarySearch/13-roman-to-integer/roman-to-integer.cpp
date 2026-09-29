class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
         char prev = ' ';

        for(auto it:s)
        {
            switch(it)
            {
                case 'I' :
                sum+=1; break;

                case 'V' :
                sum+=5; break;

                case 'X':
                sum+=10; break;

                case 'L':
                sum+=50; break;

                case 'C':
                sum+=100; break;

                case 'D':
                sum+=500; break;

                case 'M':
                sum+=1000; break;

                default:
                sum=0;
            }

            if ((it == 'V' || it == 'X') && prev == 'I') {
                sum=sum-2;
            }

            else if ((it=='L' || it=='C') && prev== 'X') {
                sum=sum-20;
            }
             else if ((it == 'D' || it == 'M') && prev == 'C') {
                sum -= 200; 
            }

            prev=it;

            


           
        }
        return sum;

        
        
    }
};