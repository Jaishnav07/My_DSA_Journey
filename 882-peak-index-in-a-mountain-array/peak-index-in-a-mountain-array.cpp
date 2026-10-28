class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0,end=n-1,mid;
        while(start<=end){ 
        mid=start+(end-start)/2;
        bool leftcheck(mid==0 || arr[mid]>arr[mid-1]);
        bool rightcheck = (mid == n - 1 || arr[mid] > arr[mid+1]);

        if( leftcheck && rightcheck){
            return mid;
        }
        else if(mid < n-1 && arr[mid]<arr[mid+1]){ 
                start=mid+1;
            }
        else{
            end=mid-1;
          }
        }
        return mid;
    }
};