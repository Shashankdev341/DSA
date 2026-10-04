class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int PostiveIndex =0;
        int NegativeIndex =1;
        vector<int>ans(n);
        for(int i =0;i<n;i++){
            if(nums[i]>0){
                ans[PostiveIndex]=nums[i];
                PostiveIndex +=2;
            }
            else{
                ans[NegativeIndex]=nums[i];
                NegativeIndex +=2;
            }
        }
        return ans;
        
    }
};