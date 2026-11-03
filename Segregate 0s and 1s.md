## 01. Segregate 0s and 1s

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1)

### Problem Description

**Task:** Given an array arr[] consisting of only 0's and 1's. Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array. Examples :Input: arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]

#### Examples

##### Example 1

- **Output:**
```text
[1, 1]
```
- **Explanation:** There are no 0s in the given array, so the modified array is [1, 1]

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-03 18:41:51
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        //O(n)
        int n= arr.size();
        int start=0,end=n-1;
       while(start<=end){ 
           if(arr[start]==0){
            start++;}
           else{
            if(arr[end]==0){
                swap(arr[start],arr[end]);
                end--;
                start++;
            }
            else{
                end--;}
            }    
          }  
           
    
       
        
       }
      
};
```

*Generated on: 11/3/2026, 6:42:16 PM*