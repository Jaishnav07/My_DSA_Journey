class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,n=nums.size(),alpha=0;
        if(n==1){
            if (nums[0]==1)
            return 1;
        }
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                alpha=max(count,alpha);
                }
            else{
                count=0;
            }
            }
            
            
            return alpha;
        }
    
};