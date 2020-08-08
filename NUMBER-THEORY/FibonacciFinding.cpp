#include <bits/stdc++.h>
#define lli long long int 
using namespace std;
#define N 2
vector<string> split_string(string);
lli ar[N][N], I[N][N];
// Complete the solve function below.

void mul(lli A[][N],lli B[][N]){
   lli res[N][N];
   for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        res[i][j]=0;
        for(int k=0;k<2;k++){
            lli b=(A[i][k]*B[k][j])%1000000007;
            res[i][j]=(res[i][j]+b)%1000000007;
        }
    }
   }
   for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        A[i][j]=res[i][j];

}
   }
}
int power(lli A[][N],int n,int a, int b){
I[0][0]=I[1][1]=1;
I[0][1]=I[1][0]=0;

// for(int i=0;i<n-1;i++)
// mul(I,A);
n--;
while(n){
    if(n%2==0){
        mul(A,A);
        n/=2;
    }
    else{
        mul(I,A);
        n--;
    }
}

return  (a*I[0][1]%1000000007+b*I[1][1]%1000000007)%1000000007;
}

int solve(int a, int b, int n) {

ar[0][0]=0;
ar[0][1]=ar[1][0]=ar[1][1]=1;
return power(ar,n,a,b);
// for(int i=0;i<2;i++){
//     for(int j=0;j<2;j++){
//         cout<<T[i][j]<<" ";
//     }

// }
return 0;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string abn_temp;
        getline(cin, abn_temp);

        vector<string> abn = split_string(abn_temp);

        int a = stoi(abn[0]);

        int b = stoi(abn[1]);

        int n = stoi(abn[2]);

        int result = solve(a, b, n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
