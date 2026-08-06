class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int>result;
        stack<int>st;

        st.push(0);

        for(int i = 1 ; i < height.size() ; ++i){
            if(height[i - 1] > threshold){
                result.push_back(i);
            }
            st.pop();
            st.push(i);
        }
        return result;

        
    }
};