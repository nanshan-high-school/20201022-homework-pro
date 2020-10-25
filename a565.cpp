#include <iostream>
#include <stack>
using namespace std;

int main() {
    string w;
    cin >> w;
    int c = 0;
    int t = 0;
    for (int i = 0; i < w.size(); i++){
        if (w[i] == 'q' && c == 0){
            c = 1;
        }
        else if(w[i] == 'p' && c == 0){
            c = 2;
        }
        else if(w[i] == 'p' && c == 1){
            c = 0;
            t += 1;
        }
        else if(w[i] == 'q' && c == 2){
            c = 0;
            t += 1;
        }
    }
    cout << t;
}
