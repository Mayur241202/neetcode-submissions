class Solution {
public:

    // bool isPalindrome(string &s, int i, int j){
    //     while(i < j){
    //         if(s[i] != s[j]){
    //             return false;
    //         }

    //         i++;
    //         j--;
    //     }

    //     return true;
    // }

    // bool validPalindrome(string s) {
    //     int i = 0;
    //     int j = s.size() - 1;

    //     while(i < j){
    //         if(s[i] !=  s[j]){
    //             return isPalindrome(s, i+1, j) || isPalindrome(s, i, j - 1);
    //         }

    //         i++;
    //         j--;

    //     }

    //     return true;
    // }



    bool checkPalindrome(string &s, int i, int j, bool isDeleted){
        if(i >= j){
            return true;
        }

        if(s[i] == s[j]){
            return checkPalindrome(s, i+1, j-1, isDeleted);
        }

        else{
            if(isDeleted){
                return false;
            }

            return checkPalindrome(s, i+1, j, true) || checkPalindrome(s, i, j-1, true);
        }
    }

    bool validPalindrome(string s){
        return checkPalindrome(s, 0, s.size() - 1, false);
    }
};