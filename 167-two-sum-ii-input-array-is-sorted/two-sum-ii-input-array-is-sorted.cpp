// isko O(n) approach se solve krte hai 
// One indexed hai yeh sala
#include <iostream>
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target){
       int start=0,n=arr.size(),end=n-1;
        while(start<=end){
            if(arr[start]+arr[end]==target){
                return{start+1,end+1};// 1 indexed hai
            }
            else{
                if(arr[start]+arr[end]>target){
                    end--;}
                else{
                    start++;
                }    

                }
            }
        
    return{start+1,end+1};// One indexed answer hai
    }
};
