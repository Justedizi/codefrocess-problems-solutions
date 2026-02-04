#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int num, s1= 0, s2 = 0 , n1, n2;  
        cin >> num;
        n1 = num -1;
        n2 = num + 1;

        while(n1 > 0){
            s1 += n1%10;
            n1 /= 10;
        }

        while(n2 > 0){
            s2 += n2%10;
            n2 /= 10;
        }

        if(s1 % 3 == 0 || s2 % 3 == 0){
            cout << "First" << '\n';
        }else{
            cout << "Second"<< '\n';
        }


    }
    
}