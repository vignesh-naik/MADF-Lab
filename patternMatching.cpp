// patternMatching.cpp

#include <iostream>
#include <string>
using namespace std;

int patternMatching(string main_string, string pattern, int n, int m)
{
    for (int i = 0; i < n - m; i++)
    {
        int j = 0;
        while (j < m && pattern[j] == main_string[i + j])
            j++;
        if (j == m)
            return i;
    }
    return (-1);
}

int main()
{
    string main_string;
    string pattern;
    cout << "Enter the main string : ";
    getline(cin, main_string, '\n');
    int n = main_string.length();
    cout << "Enter string to be matched : ";
    getline(cin, pattern, '\n');
    int m = pattern.length();

    int result = patternMatching(main_string, pattern, n, m);
    if (result == -1)
        cout << "Pattern Match Not Found ! \n"; 
    else
        cout << "Pattern Match found at index " << result << endl;
}

