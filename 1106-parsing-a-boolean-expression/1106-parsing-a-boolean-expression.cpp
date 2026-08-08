class Solution {
public:
// first time using it for my own uderstanding

     char solveoperator(vector<char>&values,char op){
        if(op == '!'){
            return values[0] == 't' ? 'f' : 't';
        }
        if(op == '&'){
            for(char &ch : values){
                if(ch == 'f')
                return 'f';
            }
            return 't';
        }
        if(op == '|'){
            for(char &ch : values){
                if(ch == 't')
                return 't';
            }
            return 'f';
        }
        return 't';
     }




    bool parseBoolExpr(string expression) {
        int n = expression.length(); // for storing 
        stack<char>st;

        for(int i = 0; i < n ; i++){
            if(expression[i] == ',')
            continue;

            if(expression[i] == ')'){
                vector<char>values;

                while(st.top() != '('){ // till open barcket comes pop all the values inside
                    values.push_back(st.top()); 
                    st.pop();
                }
                st.pop(); // popping the '(' 
                char op = st.top(); // assigning the operator as it will on the top
                st.pop(); //popping the operator
                st.push(solveoperator(values,op));
            }
            else {
                st.push(expression[i]);
            }
        }
        return st.top() == 't' ? true : false;
        
    }
};