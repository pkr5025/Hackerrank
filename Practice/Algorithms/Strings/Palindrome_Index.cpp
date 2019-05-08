//Hackerrank Problem URL
//https://www.hackerrank.com/challenges/palindrome-index/problem

#include <bits/stdc++.h>

using namespace std;

bool ispalindrome(string s){
    for (int i=0; i<s.size(); i++){
        if (s[i]!= s[s.size()-i-1])
            return 0;
    }
    return 1;
}

// Complete the palindromeIndex function below.
int palindromeIndex(string s) {
    for (int i=0; i<s.size(); i++){
        if (s[i]!= s[s.size()-i-1]){
            if (ispalindrome(s.substr(i,s.size()-2*i-1)) == 1)
                return s.size()-i-1;
            else if (ispalindrome(s.substr(i+1,s.size()-2*i-1)) == 1)
                return i;
            else    
                return -1;
        }
    }
    return -1;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
