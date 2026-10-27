class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,first=-1,last=-1,mid=start+(end-start)/2; // finding first
        int n=nums.size();
       while(start<=end){
            if(target==nums[mid]){
                first=mid;
                end=mid-1;
                mid=start+(end-start)/2;
            }
            else if(target>nums[mid]){
                start=mid+1;
                mid=start+(end-start)/2;
            }
            else{
                end=mid-1;
                mid=start+(end-start)/2;
            }
        }
        start=0,end=n-1,last=-1,mid=start+(end-start)/2;// finding last
         while(start<=end){
            if(target==nums[mid]){
                last=mid;
                start=mid+1;
                mid=start+(end-start)/2;
            }
            else if(target>nums[mid]){
                start=mid+1;
                mid=start+(end-start)/2;
            }
            else{
                end=mid-1;
                mid=start+(end-start)/2;
            }
        }
        return {first,last};
    }
};