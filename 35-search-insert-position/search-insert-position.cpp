class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=nums.size(),start=0,end=nums.size()-1,mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
           else if(nums[mid]>target){
            end=mid-1;
            index=mid;
            mid=start+(end-start)/2;}
            else{
            start=mid+1;
            mid=start+(end-start)/2;}          
        }
        return index;
    }
};