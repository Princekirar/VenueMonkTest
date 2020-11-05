
#include<bits/stdc++.h>
using namespace std;



void solve(){


    int count = 0, days_in_month, days_passed = 1; // refers to monday on 1 jan 1900
    bool leap = 1900%4 == 0 && 1900%400 != 0;
    if(leap){
        //wednesday if leap year
        days_passed = 3;
    }
    else{
        // tuesday if not leap year
        days_passed = 2;
    }
    for (int year = 1901; year <= 2000; year++) {
        for (int month = 1; month <= 12; month++) {
            if (month == 4 || month == 6 || month == 9 || month == 11) {
                days_in_month = 30;
            } else if (month == 2) {
                if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
                    days_in_month = 29;
                } else {
                    days_in_month = 28;
                }
            } else {
                days_in_month = 31;
            }
            if (days_passed % 7 == 0) {
                count++;
            }
            days_passed += days_in_month;
        }
    }

    cout << count << endl;
   
}


int main(){
 #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif 
solve();

return 0;
}