class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
       // TC : O(3N),SC: O(N)
        unordered_set<int> s;
        
        for(int num : nums){  // hash all num into set
            s.insert(num);
        }
        
        int ans = 0;
        
        for(int num : nums){
            if(!s.count(num-1)){  // IF nums-1 is not present int set then num is starting elem/Current elem of subsequence and current length becomes 1
                int currNum = num;
                int currLen = 1;
            //if num+1 is present until consecutive seq is ended set curr num as mnum +1 and currlen as currlen+1
            while(s.count(currNum+1)){
                currNum+=1;
                currLen+=1;
            }
            ans = max(ans,currLen); //store  max of length of sequence for each iteration
        } 
        }
    return ans;
}
};