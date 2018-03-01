#include <iostream>
#include <queue>
using namespace std;

int main()
{

    cout<<"Demonstrating Basic Priority Queue Operations"<<endl;
    cout<<"**************************************************"<<endl;
    priority_queue<int> q1;
    cout<<endl;
    q1.push(1);
    cout<<"Pushing on the priority_queue=1"<<endl;;
    q1.push(20);
    cout<<"Pushing on the priority_queue=20"<<endl;;
    q1.push(2);
    cout<<"Pushing on the priority_queue=2"<<endl;;
    cout<<endl;
    cout<<"Size of priority_queue="<<q1.size()<<endl;
    cout<<endl;
    while(!q1.empty()) {
        cout<<"Popping:: Top of priority_queue="<<q1.top()<<endl;
        q1.pop();
        
    }
    return 0;
}
