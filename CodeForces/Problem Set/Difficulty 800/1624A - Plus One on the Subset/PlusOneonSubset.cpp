#include <bits/stdc++.h>
using namespace std;

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

// ACCEPTED 

void solution(){
    
    int testCase;
    cin >> testCase;
    
    while(testCase--){
       
        // Taking INPUT Array
        int n; cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        cin >> arr[i]; // input-values
        
        ll maxi = INT_MIN;
        ll mini = INT_MAX;

        for (auto &&i : arr){
            maxi = max(i , maxi);
            mini = min(i , mini);
        }
        
        cout << maxi - mini  << "\n"; 

    }
    
}

// Ignored by Online Judges
void setUp_ForLocalMachine(){

    // For Faster Output
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    // if "input.txt" not exist : Create
    std::ifstream infile("input.txt");
    if(!infile.good()){
        ofstream MyFile("input.txt");
        MyFile << "1"; // writing example case
    }
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


int main(){
    setUp_ForLocalMachine();
    solution();
    
    return 0;
}