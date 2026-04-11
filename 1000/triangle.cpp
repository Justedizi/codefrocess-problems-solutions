#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int w, h;
        cin >> w >> h;
        long long max_area = 0;
        
        int k;
        vector<int> points; 
        // expriesions are evalutaed left to right so to use 1LL do 1LL * ... rest
        cin >> k;
        points.resize(k); 
        for(int i = 0; i < k; i++) cin >> points[i];
        max_area = max(1LL * (points[k-1] - points[0]) * h, max_area); // 1LL first!

        cin >> k;
        points.resize(k);
        for(int i = 0; i < k; i++) cin >> points[i];
        max_area = max(1LL * (points[k-1] - points[0]) * h, max_area);

        cin >> k;
        points.resize(k);
        for(int i = 0; i < k; i++) cin >> points[i];
        max_area = max(1LL * (points[k-1] - points[0]) * w, max_area); 

        cin >> k;
        points.resize(k);
        for(int i = 0; i < k; i++) cin >> points[i];
        max_area = max(1LL * (points[k-1] - points[0]) * w, max_area);

        cout << max_area << "\n";
    }
    return 0;
}