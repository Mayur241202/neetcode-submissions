class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2, -1);

        for(int j = 0; j < nums.size(); j++){
            int ans0 = target - nums[j];
            ans[0] = j;
            for(int i = 0; i < nums.size(); i++){
                
                if(ans0 == nums[i] && i != j){
                    ans[1] = i;
                    return ans;
                }
            }
        }

        return ans;
        
    }
};
