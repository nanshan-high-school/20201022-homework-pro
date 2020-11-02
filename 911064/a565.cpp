#include <iostream>
using namespace std;
int main() {
    
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int total = 0;
        int p = 0;
        string input;
        cin >> input;
        for (int j = 0; j < input.length(); j++) {
            if (input[j] == 'p') {
                p++;
            } else if (input[j] == 'q' && p > 0) {
                total++;
                p--;
            }
        }
        
        cout << total << "\n";
    }
}
