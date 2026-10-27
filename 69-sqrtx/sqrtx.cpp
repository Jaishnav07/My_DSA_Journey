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