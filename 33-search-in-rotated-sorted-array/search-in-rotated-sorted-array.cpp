class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1,mid,ans=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
            return mid;
            }
            else if(nums[mid]>nums[0]){
                if(nums[start]<=target && target<=nums[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            } 
            else if(mid==0){
                start=mid+1;
            }
            else { // nums[mid]<nums[0]
                if(nums[mid]<=target && target<=nums[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            
        }

    return -1;
   }
};