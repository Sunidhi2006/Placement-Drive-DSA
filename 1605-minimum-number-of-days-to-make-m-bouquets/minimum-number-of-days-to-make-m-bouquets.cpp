class Solution {
public:
    bool Possible(vector<int>& bloomDay,int mid,int m,int k){
        int total_bouq        = 0;
        int consecutive_flwrs = 0;
        for(int i=0; i< bloomDay.size();i++){
            if(bloomDay[i] <= mid){
                consecutive_flwrs++;
                if(consecutive_flwrs == k){
                    total_bouq++;
                    consecutive_flwrs = 0;
                }
            }
            else{
                consecutive_flwrs = 0;
            }
        }
        return total_bouq >= m ;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int min_day = -1;
        if( 1ll * m * k > bloomDay.size() ) return min_day;

        int lo  = *min_element(begin(bloomDay),end(bloomDay));
        int hi  = *max_element(begin(bloomDay),end(bloomDay));

        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(Possible (bloomDay,mid,m,k)){
                min_day = mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return min_day;
    }
};