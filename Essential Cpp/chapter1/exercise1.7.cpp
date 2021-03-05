#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;

int main()
{
    ifstream infile("test.txt");
    vector<string> fileline(5);

    if( ! infile )
    {
        cout << "file open fail";
    }
    else
    {
        string line;
        int ix = 0;
        while( infile >> line )
        {
            fileline[ix++] = line;
            cout << line << "\n";
        }

        for (int ix = 0; ix < 5 ; ix++)
        {
            cout << fileline[ix] << ix << "\n";
        }

        sort(fileline.begin(), fileline.end());

        for (int ix = 0; ix < 5 ; ix++)
        {
            cout << fileline[ix] << ix << "\n";
        }
    }

    ofstream outfile("sortedfile.txt");
    if ( ! outfile )
    {
        cerr << "file open fail";
    }
    else
    {
        for (int ix = 0; ix < 5 ; ix++)
        {
            outfile << fileline[ix] << endl;
        }
    }
}