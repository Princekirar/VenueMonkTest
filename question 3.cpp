#include<bits/stdc++.h>
using namespace std;


void solve(){ 
    int sum = 1000; // triplet sum
    for (int a = 1; a <= sum/2; a++) 
    {
        for (int b = a + 1; b <= sum/2; b++)
        {
            int c = sum - a - b; // as for pythogrean triplet of 1000 a+b+c = 1000
            if ( a*a + b*b == c*c ){
                cout << "pythagoras triplet for 1000\n";
                cout << a << " " <<b << " "<<c;
                break; // as mentioned contains only 1 triplet
            }
        }
    }
}

int main(){
 #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif 
solve();
return 0;

}