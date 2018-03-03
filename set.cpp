#include <iostream>
#include <set>
using namespace std;

int main()
{
    int i;
    set<int> s1;
    set<int> :: iterator it;
    int count = 0;
    cout<<"Demonstrating Basic Set Operations"<<endl;
    cout<<"**************************************************"<<endl;
    cout<<endl;
    cout<<"Adding elements "<<endl;
    for(i=100;i>0;i=i-10) {
        s1.insert(i);
        cout<<(i)<<"\t";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Size ="<<s1.size()<<endl;
    cout<<"Max Size ="<<s1.max_size()<<endl;

    cout<<endl;
    cout<<"Iterating over set"<<endl;
    for(it=s1.begin(); it!=s1.end();++it) {
        cout<<*it<<"\t";
    }
    cout<<endl;
    cout<<endl;

}
