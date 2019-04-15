#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int alt=0;
    int valleys = 0;
    for (int i=0; i<s.length(); i++){
        if (alt == 0 and s[i] == 'D'){
            valleys++;
        }
        if (s[i] == 'U')
            alt++;
        else
            alt--;
    }
    return valleys;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
