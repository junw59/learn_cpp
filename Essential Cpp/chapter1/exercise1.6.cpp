#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int number;
    cout << "please input a series of numbers:\n";
    const int num_size = 5;
    int num_seq[ num_size ];
    vector<int> num_v(num_size);

    for(int ix = 0; ix < num_size; ++ix)
    {
        int number;
        cin >> number;
        num_seq[ix] = number;
        num_v[ix] = number;
        // cout << "\n";
    }

    int sum = 0;
    float average = 0;
    for(int ix = 0; ix < num_size; ++ix)
    {
        sum += num_seq[ix];
    }
    average = sum/num_size;
    cout << "\n the sum is:" << sum
        << "\n the average is:" << average;

    int sum2 = 0;
    float average2 = 0;
    for(int ix = 0; ix < num_size; ++ix)
    {
        sum2 += num_v[ix];
    }
    average2 = sum2/num_size;
    cout << "\n the sum 2 is:" << sum2
        << "\n the average 2 is:" << average2;
    
}