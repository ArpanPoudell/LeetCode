class Solution {
public:
    int maxDepth(string s) {
        int maxdepth=0;
        int currdepth=0;
        for(auto it:s)
        {
            if (it=='(')
            {
            currdepth++;
            maxdepth=max(maxdepth,currdepth);
            }
            else if( it==')')
            currdepth--;
           
        }
        return maxdepth;
        
    }
};