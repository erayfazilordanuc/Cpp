#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main() {
    int N;
    int Q;
    
    cin >> N >> Q;

    vector<string> Nlines;
    
    for(int i=0; i<N; i++){
        string input;
        
        cin >> input;

        Nlines.push_back(input);
    }

    vector<string> Qlines;

    for(int i=0; i<Q; i++){
        string input;

        cin >> input;

        Qlines.push_back(input);
    }

    // cout << Qlines[0];

    // cout << N << Q;
    
    return 0;
}
