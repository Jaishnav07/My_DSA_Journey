## 01. Kadane's Algorithm

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1)

### Problem Description

**Task:** You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].Examples:Input: arr[] = [2, 3, -8, 7, -1, 2, 3]

#### Examples

##### Example 1

- **Output:**
```text
11
```
- **Explanation:** The subarray [7, -1, 2, 3] has the largest sum 11.

##### Example 2

- **Input:**
```text
arr[] = [-2, -4]
```
- **Output:**
```text
25
```
- **Explanation:** The subarray [5, 4, 1, 7, 8] has the largest sum 25.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-04 21:36:49
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        long long maxi=INT_MIN,prefix=0,n=arr.size();// maximum hi chahie isiliea initialize with min
        for(int i=0;i<n;i++){//
            prefix +=arr[i];
            maxi=max(prefix,maxi);
            if(prefix<0){
                prefix=0;
            }
        }
        return maxi;
    }
};
```

*Generated on: 11/4/2026, 11:29:04 PM*