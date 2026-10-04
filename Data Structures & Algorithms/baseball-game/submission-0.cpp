class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> ops;
        int ans = 0;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                int f = ops.top();
                ops.pop();
                int s = ops.top();
                ops.pop();
                   
                ops.push(s);
                ops.push(f); 
                ops.push(f + s);        
            }

            else if(operations[i] == "D"){
                ops.push(ops.top()*2);
            }

            else if(operations[i] == "C"){
                ops.pop();
            }

            else{
                ops.push(stoi(operations[i]));
            }
        }

        while(!ops.empty()){
            ans += ops.top();
            ops.pop();
        }

        return ans;
    }
};