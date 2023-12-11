class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int sz = arr.size();
        int qtr = sz/4;
        int count = 1;
        int p = arr[0];

        for (int i=1; i<sz; i++) {
            if(p == arr[i]) 
                count++;
            else 
                count = 1;
            
            if(count>qtr) 
                return arr[i];
            
            p = arr[i];
        }
        return p;
    }
};
