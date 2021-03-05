#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    const int min_size = 4;
    cout << "please press word \n";
    while(cin >> word)
    {
        if (word.size() < min_size)
            continue;
        cout << "yes good \n";
    }
    cout << "best";
    return 0;
}