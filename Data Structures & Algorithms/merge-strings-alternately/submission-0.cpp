class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len;
        string new_s;

        if(word1.length() < word2.length()){
            len = word1.length();
        }

        else{
            len = word2.length();
        }

        for(int i = 0; i < len; i++){
            new_s = new_s + word1[i] + word2[i];
        }

        if(word1.length() < word2.length()){
            for(int i = len; i < word2.length(); i++){
                new_s = new_s + word2[i];
            }
        }

        else{
            for(int i = len; i < word1.length(); i++){
                new_s = new_s + word1[i];
            }
        }

        return new_s;
    }
};