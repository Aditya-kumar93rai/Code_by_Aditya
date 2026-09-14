class Solution {
public:
    string triangleType(vector<int>& nums) {
        // Sort the sides
        sort(nums.begin(), nums.end());
        
        // Check triangle validity
        if (nums[0] + nums[1] <= nums[2]) {
            return "none";
        }
        
        // Check types
        if (nums[0] == nums[1] && nums[1] == nums[2]) {
            return "equilateral";
        }
        else if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) {
            return "isosceles";
        }
          else {
            return "scalene";
        }
    }
};