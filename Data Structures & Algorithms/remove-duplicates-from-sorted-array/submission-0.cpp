class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int k = 1;
        vector<int>temp;
        temp.push_back(nums[0]);

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                temp.push_back(nums[i]);
                k++;
            }
        }

        for(int i = 0; i < k ; i++){
            nums[i] = temp[i];
        }

        return k;
    }
};