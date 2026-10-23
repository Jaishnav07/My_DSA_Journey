## 01. Insertion Sort

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/insertion-sort/1)

### Problem Description

**Task:** Given an array arr[] of positive integers.The task is to complete the insertsort() function which is used to implement Insertion Sort. Examples:Input: arr[] = [4, 1, 3, 9, 7]

#### Examples

##### Example 1

- **Output:**
```text
[1, 4, 9]Explanation: The sorted array will be [1, 4, 9].
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n^2)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-23 17:03:03
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n=arr.size();
         for(int i=0;i<n;i++){
            for(int j=i;j>0;j--){
                if(arr[j]<arr[j-1]){ 
                swap(arr[j],arr[j-1]);   
            }
            }
         }
        
        
    }
};
```

*Generated on: 10/23/2026, 5:03:33 PM*