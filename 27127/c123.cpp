#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        int answer[N];
        while (cin >> answer[0] && answer[0] != 0) {
            for (int i = 1; i < N; i++) {
                cin >> answer[i];
            }
            stack<int> A;
            for (int i = N; i > 0; i--) {
                A.push(i);
            }
            stack<int> B;
            stack<int> stn;
            int j = 0;
            while (A.empty() == false) {
                if (answer[j] == A.top()) {
                    B.push(A.top());
                    A.pop();
                    j++;
                } else if (stn.empty() == false && answer[j] == stn.top()) {
                    B.push(stn.top());
                    stn.pop();
                    j++;
                } else {
                    stn.push(A.top());
                    A.pop();
                }
            }
            while (stn.empty() == false) {
                B.push(stn.top());
                stn.pop();
            }
            bool check = true;
            for (int i = N; i > 0; i--) {
                if (answer[i - 1] != B.top()) {
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