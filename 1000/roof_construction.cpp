#include <bits/stdc++.h>
using namespace std;

float find_mean(int arr[],int n){
  if(n > 1){
    arr[n-2] +=arr[n-1];
    n--;
    return find_mean(arr,n);
  }else{
    return arr[0]/n;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int msb = log2(n- 1);
    int num = (1 << msb) -1;
    // numbers with 0 at msb first and then number with one at msb but in reverse order 
    vector<int> a;  
    while(num >= 0){
      a.push_back(num); 
      num --;
    }
    num = (1 << msb);
    while(num < n){
      a.push_back(num); 
      num ++;
    }
    for(auto x : a){
      cout << x << " ";
    } 
    cout << endl; 
  }
  return 0;
}
