
#include <iostream>
#include <queue>
using namespace std;

int main()
{

    cout<<"Demonstrating Basic Queue Operations"<<endl;
    cout<<"**************************************************"<<endl;
    queue<int> q1;
    cout<<endl;
    q1.push(1);
    cout<<"Pushing on the queue=1"<<endl;;
    q1.push(20);
    cout<<"Pushing on the queue=20"<<endl;;
    q1.push(2);
    cout<<"Pushing on the queue=2"<<endl;;
    cout<<endl;
    cout<<"Size of queue="<<q1.size()<<endl;
    cout<<endl;
    while(!q1.empty()) {
        cout<<"Popping:: Front of queue="<<q1.front()<<", back="<<q1.back()<<endl;
        q1.pop();
        
    }
    return 0;
}
