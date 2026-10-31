class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      int size=nums.size();
      vector<int> firsthalf(size / 2);
      vector<int> secondhalf(size / 2);
        
      for(int i=0;i<size/2;i++){
        firsthalf[i]=nums[i];
      }
      for(int i=size/2;i<size;i++){
        secondhalf[i-size/2]=nums[i];
      }
      for(int i=1;i<size;i++){
        
        if(i%2==0){
        nums[i]=firsthalf[i/2]; // i/2 isilea coz for eg. n=6 tak loop chla first half ke baas khali 3 hi elements hain 
        }
        else{
            nums[i]=secondhalf[i/2];  // i/2 isilea coz for eg. n=6 tak loop chla second half ke baas khali rest 3 hi elements hain 
        }
        
        
      }
        return nums;
    }
};