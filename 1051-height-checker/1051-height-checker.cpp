class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();

        int freq[101] = {0};

        for(int i = 0; i < n ; i++){
            freq[heights[i]]++;
        }
        int count = 0;
        int index = 0;

        for(int h = 1; h <= 100; h++){
            while(freq[h] > 0){
                if(heights[index] != h)
                count++;

                index++;
                freq[h]--;
            }
            
        }
        return count;
    }
};