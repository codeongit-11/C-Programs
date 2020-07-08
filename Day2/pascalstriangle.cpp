class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        int i,j,k;
        vector<vector<int>> a;
        if(numRows==0)
        {
            return a;
        }
        if(numRows==1)
        {
            vector<int> temp;
            temp.push_back(1);
            a.push_back(temp);
            return a;
        }
        vector<int> temp;
        temp.push_back(1);
        a.push_back(temp);
        for(i=1;i<numRows;i++)
        {
            vector<int> temp1;
            j=i+1;
            temp1.push_back(1);
            for(k=1;k<j-1;k++)
            {
                int x;
                x=a[i-1][k-1]+a[i-1][k];
                temp1.push_back(x);
            }
            temp1.push_back(1);
            a.push_back(temp1);
            
            
        }
        return a;
        
    }
};