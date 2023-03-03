#include <iostream>
#include <queue>
using namespace std;

struct person{
    
    string name;
    int numInLine;
    
};

void printQ(queue<person> myq){

    queue<person> q = myq;
    int i = 1;

    while (!q.empty()){
        cout << "Hello, " << q.front().name  << " " << i <<endl;
        i++;
        q.pop();
        
    }

    cout << "We are now closed, thanks for coming" << endl;

}

int main(){

person myPerson1;
person myPerson2;
person myPerson3;
person myPerson4;
person myPerson5;

myPerson1.name = "Zach";
myPerson2.name = "Chris";
myPerson3.name = "Clayton";
myPerson4.name = "Grayson";
myPerson5.name = "Amanda";

queue<person> myQueue;
myQueue.push(myPerson1);
myQueue.push(myPerson2);
myQueue.push(myPerson3);
myQueue.push(myPerson4);
myQueue.push(myPerson5);

printQ(myQueue);

}