// 1679. Max Number of K-Sum Pairs
// You are given an integer array nums and an integer k. In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array. Return the maximum number of operations you can perform on the array.

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size(); 
        int low =0, count=0, high = n-1; 
        
        while(low < high){
            if(nums[low] + nums[high] == k){
                count++; 
                low++; high--; 
            }
            else if(nums[low] + nums[high] < k)
                low++; 
            else if(nums[low] + nums[high] > k)
                high--; 
        }
        return count; 
    }
};
