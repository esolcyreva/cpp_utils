#include <iostream>
#include <stack>
using namespace std;

int main()
{
    cout<<"Demonstrating Basic Stack Operations"<<endl;
    cout<<"**************************************************"<<endl;
    stack<int> s1;
    cout<<endl;
    s1.push(1);
    cout<<"Pushing on the stack=1"<<endl;;
    s1.push(20);
    cout<<"Pushing on the stack=20"<<endl;;
    s1.push(2);
    cout<<"Pushing on the stack=2"<<endl;;
    cout<<endl;
    cout<<"Size of stack="<<s1.size()<<endl;
    cout<<endl;
    while(!s1.empty()) {
        cout<<"Popping out of stack="<<s1.top()<<endl;
        s1.pop();
    }
    return 0;
}
