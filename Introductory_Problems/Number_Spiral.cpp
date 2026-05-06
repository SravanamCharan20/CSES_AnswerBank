#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    
    while(t--){
        long long y,x;
        cin >> y >> x;
        
        if(y == 1 && x == 1){
            cout << 1 << "\n";
            continue;
        }
        
        long long maxi = max(y,x);
        long long mini = min(y,x);
        
        bool decreasing = true;
        if(maxi % 2 == 1) decreasing = false;
        
        long long middle_ele = (maxi * (maxi - 1)) + 1;
        long long diff = maxi - mini;
        if(maxi == y){
            if(decreasing){
                cout << middle_ele + diff;
            }
            else{
                cout << middle_ele - diff;
            }
        }
        else{
            if(decreasing){
                cout << middle_ele - diff;
            }
            else{
                cout << middle_ele + diff;
            }
        }
        
        cout << "\n";
    }
}