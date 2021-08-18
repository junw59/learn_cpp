#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <istream>
#include <fstream>

using namespace std;

int main()
{
    // cout << "hello world" << endl;
    // int n = 1000;
    // for(int i = 0; i < 5; i++){
    //     cout << "print " << n << "endl\t";
    //     n += 200;
    // }
    // cout << "print " << n << endl;

    string str;
    // ifstream infile("Stack.h");
    ifstream infile("read.txt");
    // while(infile >> str){
    //     cout << str;
    // }

    // infile.close();
    // ifstream 
    // infile("Stack.h");
    infile.clear();
    // infile.seekg(0,ios::beg);
    // infile.seekg(-10,ios::end);
    infile.seekg(0);
    cout << "\n\ninfile end\n" << endl;

    // for(int i = 0; i < 5; i++){
    while(infile >> str){
        // infile >> str;
        cout << str << " endl\t";
    }
    cout << endl;

    infile.clear();
    infile.seekg(0, ios::beg);

    // for(int i = 0; i < 5; i++){
    while(infile >> str){
        // infile >> str;
        cout << str << " endl\t";
    }
    cout << endl;

    infile >> str;
    cout << str << endl;
    infile >> str;
    cout << str << endl;

}