class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();

        sort(begin(nums),end(nums));

        for(int i = 1; i < n ; i++){
            nums[i] += nums[i - 1];
        }

        vector<int>result;

        for(int &query : queries) {
            int count = upper_bound(begin(nums),end(nums),query) - begin(nums);
            result.push_back(count);
        }
         return result;
        
    }
};