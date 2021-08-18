#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <istream>
#include "Stack.h"
#include "Stack.cpp"

using namespace std;

void fill_stack(Stack &stack, istream &is = cin)
{
    string str;
    while(is >> str && ! stack.full()){
        if(str == "quit") break;
        stack.push(str);
    }
    
    cout << "Read in " << stack.size() << " elements\n";
}
int main()
{   
    Stack stack;
    fill_stack(stack);
    return 0;
}