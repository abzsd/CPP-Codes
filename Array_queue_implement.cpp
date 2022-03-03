#include <bits/stdc++.h>
using namespace std;
 
class Queue {
private:
	int head, tail;
	int capacity;
	int* array;
 
public:
	//Initialisation
	Queue(int capacity) {
		this->capacity = capacity;
		head = 0;
		tail = 0;
		array = new int[(capacity * sizeof(int))];
	}
 
	//Check if Queue is Full
	int isFull()
	{
		return (tail == capacity);
	}
 
	// Queue is empty or not
	int isEmpty()
	{
		return (head == tail);
	}
 
	//Enqueue Operation
	void enqueue(int item)
	{
		if (isFull()) //Check if there is space in Queue or not
		{
			cout << "Can't enqueue. Queue is full.\n";
			return;
		}
		array[tail] = item;
		tail++;
		cout << item << " enqueued to queue\n";
	}
 
	//Dequeue Operation
	int dequeue()
	{
		if (isEmpty())
		{
			cout << "Can't dequeue. Queue is empty.\n";
			return INT_MIN;
		}
		int item = array[head];
		head++;
		return item;
	}
 
	// Function to get front of queue
	int front() {
		if (isEmpty()) {
			return INT_MIN;
		}
		return array[head];
	}
 
	// Function to get rear of queue
	int back() {
		if (isEmpty()) {
			return INT_MIN;
		}
		return array[tail - 1];
	}
 
	//Function to get size of queue
	int size() {
		return tail - head;
	}
};
 
 
// Driver code
int main()
{
	Queue q(100);
 
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
 
	cout << q.dequeue() << " dequeued from queue\n";
 
	cout << "Front item is " << q.front() << endl;
 
	cout << "Rear item is " << q.back() << endl;
 
	cout << "Size of queue is " << q.size() << endl;
 
	return 0;
}