class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // string ans = strs[0];

        // for (int i = 1; i < strs.size(); i++) {

        //     int len = min(ans.length(), strs[i].length());

        //     string temp = "";

        //     for (int j = 0; j < len; j++) {
        //         if (ans[j] != strs[i][j]) {
        //             break;
        //         }

        //         temp.push_back(ans[j]);
        //     }

        //     ans = temp;
        // }

        // return ans;


        for (int i = 0; i < strs[0].length(); i++) {

            char c = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {

                if (i >= strs[j].length() || strs[j][i] != c) {
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0];

        /*  Vertical Scanning App 2
        for i -> 0 to strs[0].length
Ex. ["flower", "flow", "flight"]

i=0 & i<6: c="f" -> for j -> 1 to strs.size
                       j=1 & j<3: 0>=4 -> no OR f != f -> no:
                       j=2 & j<3: 0>=6 -> no OR f!=f -> no:
                       j=3 & j<3: -> no
i=1 & i<6: c="l" -> j=1 & j<3: 1>=4 -> no OR l != l -> no:
                      j=2 & j<3: 1>=6 -> no OR l != l -> no:
                      j=3 & j<3: -> no
i=2 & i<6: c="o" -> j=1 & j<3: 2>=4 -> no OR o != o -> no:
                        j=2 & j<3: 2>=6 -> no OR i != o -> yes: -> fl
        */
    }
};