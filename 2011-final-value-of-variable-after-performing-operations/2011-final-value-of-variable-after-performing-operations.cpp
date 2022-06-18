class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int t = 0;
        for(int i = 0;i<operations.size();i++){
            if(operations[i]=="++X"){
            t = t+1;
           }
           else if(operations[i]=="X++"){
               t++;
           } 
           else if(operations[i]=="X--"){
               t--;
           }
            else
                t--;
    }
        return t;
    }
};