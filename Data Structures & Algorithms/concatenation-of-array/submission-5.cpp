class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // vector<int>ans;
        // int x = 2;

        // for(int j = 0; j < x; j++){
        //     for(int i = 0; i < nums.size(); i++){
        //         ans.push_back(nums[i]);
        //     }
        // }


        // ans.insert(ans.end(), nums.begin(), nums.end());
        // ans.insert(ans.end(), nums.begin(), nums.end());


        // nums.insert(nums.end(), nums.begin(), nums.end());


        vector<int> ans(nums);
        ans.insert(ans.end(), nums.begin(), nums.end());
        
        return ans;
    }

    
};