class Solution {
public:
    int helper(int week){
        int ans = 0;
        for(int i=0; i<week; i++){
            ans += 28 + (i*7);
        }
        return ans;
    }
    int totalMoney(int n) {
        int week = n/7;
        int ans = helper(week);
        int day = n%7;

        if(day == 0){
            return ans;
        }
        else{
            week++;
            while(day--){
                ans += week++;
            }
        }
        return ans;
    }
};
