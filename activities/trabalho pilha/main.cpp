#include<iostream>
#include<stack>
using namespace std;

void enterQueue(stack<char> *s, char value) {
    s->push(value);
}

char exitQueue(stack<char> *s) {

    if (s->empty()) {
        abort();
    }

    stack<char> aux;

    // move values from s1 to aux
    while (!s->empty()) {
        aux.push(s->top());
        s->pop();
    }

    // get first of the queue
    char response = aux.top();
    aux.pop();

    // move from aux to s1
    while (!aux.empty()) {
        s->push(aux.top());
        aux.pop();
    }

    return response;

}

int main() {

    stack<char> s1;

    enterQueue(&s1, 'e');
    enterQueue(&s1, 'n');
    enterQueue(&s1, 'z');
    enterQueue(&s1, 'o');

    cout << exitQueue(&s1) << endl;
    cout << exitQueue(&s1) << endl;
    cout << exitQueue(&s1) << endl;
    cout << exitQueue(&s1) << endl;

}