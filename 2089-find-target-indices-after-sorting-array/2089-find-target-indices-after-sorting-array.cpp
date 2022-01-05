class Solution {
public:

    vector<int> targetIndices(vector<int>& nums, int target) {
    vector<int>ans;
      
        int counter=1;
        while(counter<nums.size()){
            for(int i=0; i<nums.size()-counter;i++){
                if(nums[i]>nums[i+1]){
                    int temp=nums[i];
                    nums[i]=nums[i+1];
                    nums[i+1]=temp;
                }
            }
            counter++;
        }
            for (int i=0;i<nums.size();i++){
            if (nums[i]==target)
                ans.push_back(i);
        }
        return ans;
        
        }
        
        
    
};