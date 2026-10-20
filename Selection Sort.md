## 01. Selection Sort

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/selection-sort/1)

### Problem Description

**Task:** Given an array arr[], use selection sort to sort arr[] in increasing order.Examples :Input: arr[] = [4, 1, 3, 9, 7]

#### Examples

##### Example 1

- **Output:**
```text
[14, 20, 30, 31, 38]
```
- **Explanation:** Maintain sorted (in bold) and unsorted subarrays. Select 1. Array becomes 1 4 3 9 7. Select 3. Array becomes 1 3 4 9 7. Select 4. Array becomes 1 3 4 9 7. Select 7. Array becomes 1 3 4 7 9. Select 9. Array becomes 1 3 4 7 9.Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n^2)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-20 14:54:34
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
public:
    void selectionSort(vector<int> &arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) { 
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[i]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};
```

*Generated on: 10/20/2026, 2:55:01 PM*