class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> count(n + 1, 0); // n+1 elements ka arry with all 0's in it 
        int original_sum=(n+1)*n/2,arr_sum=0,dublicate=-1;
        for(int i=0;i<n;i++){
            int current_num=nums[i];
            count[current_num]++;
            arr_sum+=nums[i];
            if(count[current_num]==2){
                dublicate=current_num;
            }
           
            }
     int missing=original_sum-arr_sum+dublicate;
        
     return {dublicate,missing};
    }
};