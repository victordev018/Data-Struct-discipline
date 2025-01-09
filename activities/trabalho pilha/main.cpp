#include<iostream>
#include<stack>
using namespace std;

int main() {

    int max;

    // get quantity elements
    cout << "> quantidade de elementos: ";
    cin >> max;

    // creating stacks
    stack<char> s1;
    stack<char> s2;

    // entry values
    for (int i = 0; i < max; i++) {
        cout << (i+1) << " letra: ";
        char current;
        cin >> current;
        s1.push(current);
    }

    // move data from s1 to s2
    for (int i = 0; i < max; i++) {
        s2.push(s1.top());
        s1.pop();
    }

    // unstack values
    for (int i = 0; i < max; i++) {
        cout << "\n> desempilha: " << s2.top();
        s2.pop();
    }

}