class Solution {
public:
    
    
    long long subArrayRanges(vector<int>& nums) {
        
        long long sum=0;
       
        for (int i=0; i<nums.size()-1;i++){
             int max=nums[i];
             int min=nums[i];
            for (int j=i+1; j<nums.size();j++){
                if(min>nums[j]){
                    min=nums[j];
                }
                if(max<nums[j]){
                    max=nums[j];
                }
                sum+=max-min;
            }
        }
        return sum;
        
    }
};