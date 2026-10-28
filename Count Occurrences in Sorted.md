## 01. Count Occurrences in Sorted

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1)

### Problem Description

**Task:** Given a sorted array arr[] and a number target, find the number of occurrences of target in given array. Examples:Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2

#### Examples

##### Example 1

- **Output:**
```text
3
```
- **Explanation:** target = 12 occurs 3 times in the given array so the output is 3.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(log n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-28 20:22:40
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
       int n=arr.size();
       int ans=0;
    
    int first=-1,last=-1;
    int start=0,end=n-1,mid=start+(end-start)/2;
    //finding first position
    while(start<=end){
        if(target==arr[mid]){
            first=mid;//storing first occurence
            end=mid-1;
            mid=start+(end-start)/2;
        }
        else if(target>arr[mid]){
            start=mid+1;
            mid=start+(end-start)/2;
        }
        else{
             end=mid-1;
             mid=start+(end-start)/2;
        }
    }
    
    if (first == -1) {
                    return ans; //ans=0 hi hai
     }
    else{
    // finding last position
    start=0,end=n-1,last=0,mid=start+(end-start)/2;
    while(start<=end){
        if(target==arr[mid]){
            last=mid;//storing first occurence
            start=mid+1;
            mid=start+(end-start)/2;
        }
        else if(target>arr[mid]){
            start=mid+1;
            mid=start+(end-start)/2;
        }
        else{
             end=mid-1;
             mid=start+(end-start)/2;
        }
    }
    
    ans=last-first+1;
    }
    
    
    return ans;
    
}
    
};
```

*Generated on: 10/28/2026, 8:34:26 PM*