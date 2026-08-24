class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(begin(nums),end(nums));

    int n = nums.size(); 
    
     int i = 0;
     int j = nums.size() - 1;  
       

    
     
        

    int maxsum = 0;

         while(i < j){
            int sum = nums[i] + nums[j];
            maxsum = max(maxsum,sum);
            i++;
            j--;
            
         }
         return maxsum;

        
    }
};