class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int p=-1;
        int start=0,end=n-1,mid=(start+mid)/2;
        while(start<=end){ 
        if(nums[mid]==target){
            p=mid;
            return p;
            break;
            }
        else if(nums[mid]>target){
            end=mid-1;
            mid=(end+start)/2;
        }    
        else{
            start=mid+1;
            mid=(end+start)/2;
        }
        
        }

        return p;
    }
};