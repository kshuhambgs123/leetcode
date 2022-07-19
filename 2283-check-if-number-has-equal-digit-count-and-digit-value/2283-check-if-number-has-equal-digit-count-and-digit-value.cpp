class Solution {
public:
    bool digitCount(string num) {
      // 1 to cal frequency of each character
    // check for each char its freq ! = value at key
        // return falae
        // return true
            
            int n = num.length();
            vector<int> arr(n,0);
            for( int i=0;i<n;i++){
                if(num[i]-'0'<n)
                arr[num[i]-'0']++; 
            }
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        // {0,1,2,3} -- digit
        // {1,2,1,0} --  freq
        
            // for(int i=0;i<n;i++){
            //      int freq = num[i]-'0';
            //      arr[i]-=freq;
            // }
            
            for(int i=0;i<n;i++){
                if(arr[i]!=num[i]-'0')
                    return false;
         }
        return true;
            
    }
};