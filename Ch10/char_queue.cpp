#include <iostream>
#include <vector>

using namespace std;

class Char_queue {
public:
    Char_queue(int sz = 0);

    void push(char c);           // adds character to end of queue
    char pop();                  // returns character at end of queue
    int length() const;          // returns current table size
    void print() const;          // prints elements of Char_queue

private:
    vector<char> queue;
    int size;
};

Char_queue::Char_queue(int sz) {
    if (sz <= 0)
        size = 0;
    size = sz;
}

void Char_queue::push(char c) {
    queue.push_back(c);
    size++;
}

char Char_queue::pop() {
    char ret = queue[--size];
    queue.pop_back();      // deletes iostream
    return ret;
}

int Char_queue::length() const {
    return size;
}

void Char_queue::print() const {
    for (int i = 0; i < size; i++)
        cout << queue[i] << " ";
    cout << "\n";
}

int main() {
    Char_queue cq;

    // fill queue
    for (int i = 0; i < 10; i++) {
        cq.push('a' + i);
    }

    cout << "cq.length() = " << cq.length() << endl;
    cq.print();

    char c = cq.pop();
    cout << "Popped: " << c << endl;

    cq.push('$');
    cq.print();
}
