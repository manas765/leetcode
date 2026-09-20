class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int , int>mp;

        for(int i = 0; i < arr.size() ; i++){
            mp[arr[i]]++;
        }
    
        int LuckyNum = -1;

        for(auto i : mp){
            int frequency  = i.second;
            int number = i.first;
            if(frequency == number){
                LuckyNum = max(LuckyNum,number);
                
            }
        }
        return LuckyNum;
        
    }
};