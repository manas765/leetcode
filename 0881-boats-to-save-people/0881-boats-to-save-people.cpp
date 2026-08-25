class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();

        sort(begin(people),end(people));
        int i = 0;
        int j = people.size() - 1;

        int result = 0;

        while(i <= j){
            int sum = people[i] + people[j];

            if(sum <= limit){
                
                i++;
                j--;
                result += 1;
               
               
            }
            else { 
                 j--;
                result += 1;
            
                 
            }
           
        }
        return result;

    
        
    }
};