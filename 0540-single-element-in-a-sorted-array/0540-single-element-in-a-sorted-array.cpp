class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //bruteforce approach
        /* 
          map iterate the nums,
          if the frequency is equal to 1 return the element
        */
        /*
           using the concept of XOR operator
           if we xor the number with 0 we get that number
           1.linearly iterating
           2.using binary search;
        */

        int ans=0; 
        int num=nums.size();
        for(int i=0; i<num; ++i){
            int j=num-i-1;
            if(i<=j){
                if(i==j){
                    ans=ans^nums[i];
                }
                else{
                    ans=ans^nums[i];
                    ans=ans^nums[j];
                }
            }
        }
        return ans;

    }
};