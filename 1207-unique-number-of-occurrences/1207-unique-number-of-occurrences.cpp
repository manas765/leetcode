class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int>mp;

        for(int i = 0; i < arr.size() ; i++){
            mp[arr[i]]++;
        }

        unordered_set<int>st;
        for(auto i : mp){
            int frequency = i.second;

            if(st.find(frequency) != st.end()){
                return false;

            }
            st.insert(frequency);
        }
        return true;
        
    }
};