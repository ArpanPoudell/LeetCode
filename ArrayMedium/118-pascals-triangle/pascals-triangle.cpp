class Solution {
public:

vector<int> getRow(int rowIndex) {
        vector<int> finall;
        long long ans=1;
        finall.push_back(ans);

        for(int i=1;i<=rowIndex;i++)
        {
        ans=ans*(rowIndex-i+1)/i;
        
        finall.push_back(ans);
        }
        return finall;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ansfinal;

        for(int i=0;i<numRows;i++)
        {
            ansfinal.push_back(getRow(i));
            
        }
        return ansfinal;

        

        
    }
};