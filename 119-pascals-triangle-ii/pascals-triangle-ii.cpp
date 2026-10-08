class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long value=1;
        ans.push_back(value);
        for(int i =0;i<rowIndex;i++){
            value=value * (rowIndex-i);
            value = value/(i+1);
            ans.push_back(value);
        }
        return ans;
        
    }
};