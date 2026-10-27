//Solution 1
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




//Solution 2
class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int ans=1;
        int start=0,end=x;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid==x/mid){// x== mid*mid hi hai 
                ans=mid;
                return ans;
                break;
                }   
            else if(mid>=x/mid){  // mid*mid>x
                end=mid-1;
                mid=start+(end-start)/2;   
            }
            else{  // mid*mid<x
                start=mid+1;
                ans=mid;
                mid=start+(end-start)/2;
               
            }
        }
        return ans;
    }
};
