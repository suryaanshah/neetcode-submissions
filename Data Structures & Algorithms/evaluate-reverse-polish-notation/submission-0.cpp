class Solution {
private:
    bool isOperator(std::string s) {
        return s=="+" || s=="-" || s == "/" || s=="*";
        }
public:
    

    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;

        
        for (int i = 0; i< tokens.size(); i++) {
                if (isOperator(tokens[i])) {
                    int b = st.top(); st.pop();
                    int a = st.top(); st.pop();
                    if (tokens[i] == "+")
                            st.push(a + b);
                        else if (tokens[i] == "-")
                            st.push(a - b);
                        else if (tokens[i] == "/")
                                st.push(a/b);
                            else if (tokens[i] == "*")
                                    st.push(a*b);
                }
                else {
                    int val = std::stoi(tokens[i]);
                        st.push(val);
                }
        }
    return  st.top();
    }           
};
