#include <iostream>
#include <queue>
using namespace std;
  
int main()
{
    priority_queue<int> pqueue;
    pqueue.push(5);
    pqueue.push(1);
    pqueue.push(7);
  
    // Priority queue top
    pqueue.pop();
    cout << pqueue.top();

    return 0;}
