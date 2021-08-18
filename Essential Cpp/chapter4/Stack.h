#include <string>
#include <vector>
using namespace std;

#ifndef _STACK_H
#define _STACK_H
class Stack
{
private:
    vector<string> _stack;

public:
    bool push(const string &);
    bool pop(string &elem);
    bool peek(string &elem);

    bool empty();
    bool full();

    int size() { return _stack.size(); }

    bool find(const string &);
};
#endif