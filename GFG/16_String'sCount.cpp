//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int countStr(long long int n){
    //complete the function here
    long long int strings_all_a = 1;
    long long int strings_at_most_1_b = n;
    long long int strings_at_most_1_c = n;
    long long int strings_one_b_one_c = n * (n - 1);
    long long int strings_two_c = (n * (n - 1)) / 2;
    long long int strings_one_b_two_c = (n * (n - 1) * (n - 2)) / 2;

    long long int total_strings = strings_all_a + strings_at_most_1_b + strings_at_most_1_c +
                        strings_one_b_one_c + strings_two_c + strings_one_b_two_c;

    return total_strings;
}
