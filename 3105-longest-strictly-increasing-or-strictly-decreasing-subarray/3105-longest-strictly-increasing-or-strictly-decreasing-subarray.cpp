class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int increasing_subarrays = 1;
        int decreasing_subarrays = 1;
        int max_length = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums.at(i) < nums.at(i+1)){
                increasing_subarrays ++;
                decreasing_subarrays = 1;
            }else if(nums.at(i) > nums.at(i+1)){
                decreasing_subarrays ++;
                increasing_subarrays = 1;
            }else{
                decreasing_subarrays = 1;
                increasing_subarrays = 1;
            }
        max_length = max(max_length, max(increasing_subarrays,  decreasing_subarrays));
        }
        return max_length;
    }
};