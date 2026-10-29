## 01. Painter's Partition Problem

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1)

### Problem Description

**Task:** Given an array arr[] where each element denotes the length of a board, and an integer k representing the number of painters available. Each painter takes 1 unit of time to paint 1 unit length of a board.Each painter can paint only a contiguous sequence of boards (no skipping or splitting allowed).Find the minimum amount of time required to paint all the boards.Examples:Input: arr[] = [5, 10, 30, 20, 15], k = 3

#### Examples

##### Example 1

- **Output:**
```text
1000
```
- **Explanation:** There is only one painter, so the painter must paint all boards sequentially. The total time taken will be the sum of all board lengths, i.e., 100 + 200 + 300 + 400 = 1000.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n * log(sum(arr)))
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-29 21:29:35
- **Status:** Correct
- **Marks:** 8

```cpp
class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        int n=arr.size();
        long long start=0,end=0,mid,ans;
        for(int i=0;i<n;i++){
            start=max(start,(long long)arr[i]);//type casting of arr[i] to avoid error
            end+=arr[i];//sum of all 
        }
        while(start<=end){
            mid=start+(end-start)/2;
            int time=0,count=1;
            for(int i=0;i<n;i++){
                time+=arr[i];
                if(mid<time){
                    count++;
                    time=arr[i];
                }
            }
            if(count<=k){
                end=mid-1;
                ans=mid;
            }
            else{
                start=mid+1;
            }
            
        }
            return ans;
     }
    
};
```

*Generated on: 10/29/2026, 9:47:25 PM*