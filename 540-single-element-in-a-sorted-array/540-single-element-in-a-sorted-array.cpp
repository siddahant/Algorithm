class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int idx=0;
        while(idx<nums.size()-1){
            if (nums[idx]==nums[idx+1]){
                idx+=2;
            }
            else {
                return nums[idx];
            }
          
        }
        return nums[idx] ;   
        
        
    }
};