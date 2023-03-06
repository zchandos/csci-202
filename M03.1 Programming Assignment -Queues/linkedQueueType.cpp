//Programming Exercise #17 - Ch. 17 (p. 1278) - Write the definition of the class linkedQueueType,
//which is derived from the class unorderedLinkedList, as explained in this chapter.  
//Also, write a program to test various operations of this class

//Definition: A linkedQueueType is a type of queue that makes use of a linked list. Data is stored in "nodes"
//which also contain an address of the next node in line. The linked list is a queue so the functionaility includes
//adding items to the end of the list, and removing items from the front. It also contains operations such as output
//for how many items are in the list, and what the front value is.


//Program testing operations
#include <iostream>
using namespace std;


struct node {
    int data;
    node *next;
};

class linkedQueueType {
private:
    node *front, *rear;

public:
    linkedQueueType() {
        front = NULL;
        rear = NULL;
    }

    bool isEmpty() {
        return (front == NULL);
    }

    void addQueue(int data) {
        node *temp = new node;
        temp->data = data;
        temp->next = NULL;

        if (isEmpty()) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
    }

    int deleteQueue() {
        int value = front->data;
        node *temp = front;
        front = front->next;
        delete temp;

        return value;
    }

    int frontValue() {
        return front->data;
    }

    int size() {
        int count = 0;
        node *current = front;
        while (current != NULL) {
            count++;
            current = current->next;
        }
        return count;
    }
};

int main() {

    linkedQueueType myQueue;

    myQueue.addQueue(1);
    myQueue.addQueue(2);
    myQueue.addQueue(3);

    cout << "Size of queue: " << myQueue.size() << endl;
    cout << "Front value: " << myQueue.frontValue() << endl;

    cout << "Dequeued value: " << myQueue.deleteQueue() << endl;
    cout << "Dequeued value: " << myQueue.deleteQueue() << endl;

    cout << "Size of queue: " << myQueue.size() << endl;
    cout << "Front value: " << myQueue.frontValue() << endl;

    return 0;
}