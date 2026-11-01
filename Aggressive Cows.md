## 01. Aggressive Cows

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/aggressive-cows/1)

### Problem Description

**Task:** Given an integer array arr[], which denotes the positions of stalls. All the positions are distinct. There are k aggressive cows.Assign the cows to the stalls such that the minimum distance between any two cows is maximized.Examples:Input: arr[] = [1, 2, 4, 8, 9], k = 3

#### Examples

##### Example 1

- **Output:**
```text
4
```
- **Explanation:** The first cow can be placed at arr[0], the second at arr[1], and the third at arr[4]. In this arrangement, the minimum distance between any two cows is 4 (between arr[1] and arr[4]), which is the maximum possible among all valid arrangements.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n log m)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-01 20:55:29
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        int n=arr.size();
        //sorting array first
        sort(arr.begin(),arr.end());
        int start=0,end=arr[n-1],ans=-1,mid,pos;
        while(start<=end){
            int count=1;
            pos=arr[0];
            mid=start+(end-start)/2;
            for(int i=0;i<n;i++){
                if(pos+mid<=arr[i]){
                    count++;
                    pos=arr[i];}
            
            }
            if(count>=k){
            start=mid+1;
                ans=mid;
            }
            else{//count<=k
            end=mid-1;
                    }
        }
        return ans;
    }
};
```

*Generated on: 11/1/2026, 8:56:01 PM*