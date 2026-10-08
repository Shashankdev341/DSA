class Solution {
public:
    vector<int>generateRow(int row){
        long long ans =1;
        vector<int>ansrow;
        ansrow.push_back(ans);
        for(int col =0;col<row;col++){
            ans = ans*(row-col);
            ans=ans/(col+1);
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i =0;i<numRows;i++){
            ans.push_back(generateRow(i));

        }
        return ans;
        
    }
};