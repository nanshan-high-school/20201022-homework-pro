#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        int ans[N];
        while (cin >> ans[0] && ans[0] != 0) {
            for (int i = 1; i < N; i++) {
                cin >> ans[i];
            }
            stack<int> A;
            for (int i = N; i > 0; i--) {
                A.push(i);
            }
            stack<int> B;
            stack<int> station;
            int j = 0;
            while (A.empty() == false) {
                if (ans[j] == A.top()) {
                    B.push(A.top());
                    A.pop();
                    j++;
                } else if (station.empty() == false && ans[j] == station.top()) {
                    B.push(station.top());
                    station.pop();
                    j++;
                } else {
                    station.push(A.top());
                    A.pop();
                }
            }
            while (station.empty() == false) {
                B.push(station.top());
                station.pop();
            }
            bool check = true;
            for (int i = N; i > 0; i--) {
                if (ans[i - 1] != B.top()) {
                    check = false;
                    cout << "No\n";
                    break;
                }
                B.pop();
            }
            if (check) {
                cout << "Yes\n";
            }
        }
    }
    cout << "\n";
}