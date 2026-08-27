class Solution {
public:
      bool checkbalanced(vector<int>& freq){
        int common = 0;
        for(int i = 0; i < 26;i++){
            if(freq[i] == 0)
            continue;
            if(common == 0)
            common = freq[i];
            else if(common != freq[i]){
                return false;
            }
        }
        return true;
      }
    int longestBalanced(string s) {
        int n = s.length();

        int maxL = 0;

        for(int i = 0; i < n; i++){
            vector<int>freq(26,0);
            for(int j = i; j < n; j++){
                freq[s[j] - 'a']++;
                if(checkbalanced(freq)){
                    maxL = max(maxL,j-i+1);
                }
            }
        }
        return maxL;
        
    }
};