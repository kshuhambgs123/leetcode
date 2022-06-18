class Solution {
public:
    string defangIPaddr(string address) {
        string temp="",s=address;
        for(int i = 0;i<address.length();i++){
            if(s[i]=='.'){
                temp+="[.]";
            }else{
                temp+=s[i];
            }
        }
        return temp;
    }
};