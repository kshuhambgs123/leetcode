class Solution {
public:
    bool isPalindrome(int x) {
        //int t = x/2,p=x;
        int s=0;
        if(x<0 || (x>0 && x%10==0)){
            return false;;
        }
        else if(x>=0 && x<=9){
            return true;
        }
        else{
            while(x>s){
                int r = x%10;
                    s = s*10 + r;
                    x = x/10;
                
            }
            if(x==s || x==s/10){
                return true;
            }
        }
        return false;
    }
    
};