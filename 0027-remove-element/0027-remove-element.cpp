class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        vector<int>v;
        for (int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                v.push_back(nums[i]);
            }
        }
        nums.clear();
        for(auto i:v) nums.push_back(i);
        return nums.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna