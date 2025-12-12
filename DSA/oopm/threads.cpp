#include <iostream>
#include <thread>
using namespace std;

void task(int n) {
    for (int i = 0; i < 5; i++) {
        cout << "Task " << n << " running\n";
    }
}

int main() {
    thread t1(task, 1);   // thread 1
    thread t2(task, 2);   // thread 2

    t1.join();   // wait for t1 to finish
    t2.join();   // wait for t2 to finish

    cout << "Main thread ends\n";
    return 0;
}