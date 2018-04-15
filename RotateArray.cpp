class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = k%nums.size();
        int i;
        vector<int> nums_temp = nums;
        for (i = 0; i<nums.size(); i++){
            nums[(i + n) % nums.size()] = nums_temp[i];
        } 
    }
};
