class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int start=0,end=0,mid,ans=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=piles[i];
            end=max(end,piles[i]);
        }
        start=sum/h;
        if(start==0){
            start=1;
        }
        while(start<=end){
            int time=0;
            mid=start+(end-start)/2;
            for(int i=0;i<n;i++){
                time+=piles[i]/mid;
               if(piles[i]%mid!=0){// or we can write (!piles[i]/mid)
               time++;
               /*for eg. koko eats 1.50 bananas in 3 hours so we will count it 2 hours coz this is condition that he can't leave one pile and go further in that hour he will eat one pile then in next hour he will go for the other pile given in question*/
            }
        }
        if(time<=h){
            ans=mid;
            end=mid-1;
        }
        else{//(time>=h) mtlb usko given time se zyada lag gya usko speed badhani chahie
        start=mid+1;
        }
     }
    return ans;
    }
};