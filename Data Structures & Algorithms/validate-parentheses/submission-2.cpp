class Solution {
public:
    bool isValid(string s) {

        if(s.size() % 2 != 0){
            return false;
        }

        stack<char> brackets;

        // for(int i = 0; i < s.size(); i++){
        //     if(s[i] == '(' || s[i] == '{' || s[i] == '['){
        //         brackets.push(s[i]);
        //     }

        //     else{
        //         if(brackets.empty()){
        //             return false;
        //         }

                
        //         if((s[i] == ')' && brackets.top() == '(') || (s[i] == ']' && brackets.top() == '[') || (s[i] == '}' && brackets.top() == '{')){
        //             brackets.pop();
        //         }

        //         else{
        //             return false;
        //         }
        //     }

            
        // }

        
        // return brackets.empty();





        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                brackets.push(')');
            }

            else if(s[i] == '{'){
                brackets.push('}');
            }

            else if(s[i] == '['){
                brackets.push(']');
            }

            else{
                if(brackets.empty() || brackets.top() != s[i]){
                    return false;
                }

                else{
                    brackets.pop();
                }
            }
        }

        return brackets.empty();
    }
};
