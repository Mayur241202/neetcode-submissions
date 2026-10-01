class Solution {
public:
    bool isPalindrome(string s) {
        // problem 1 : Captical small cannot equal
        // problem 2 : include only alphanumeric characters
        // problem 3 : make a new string with problem 1 & 2 solved and then use 2 pointers

        // string new_s;
        // for(int i = 0; i < s.length(); i++){
        //     if(s[i] >= 'A' && s[i] < 'a' - ('g' - 'a')){
        //         s[i] = s[i] + 'a' - 'A';
        //     }

        //     if(s[i] >= 48 && s[i] <= 57 || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
        //         new_s.push_back(s[i]);
        //     }
        // }

        // int i = 0;
        // int j = new_s.length() - 1;

        // while(i < j){
        //     if(new_s[i] != new_s[j]){
        //         return false;
        //     }

        //     i++;
        //     j--;
        // }

        // return true;








        int i = 0;
        int j = s.length() - 1;

        while(i < j){

            while(i < j && !isalnum(s[i])){
                i++;
            }

            while(i < j && !isalnum(s[j])){
                j--;
            }

            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};
