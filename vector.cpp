
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v1;
    int i;
    vector <int> :: iterator it;
    cout<<"Demonstrating Basic Vector Operations"<<endl;
    cout<<"**************************************************"<<endl;
    cout<<endl;
    cout<<"Adding elements "<<endl;
    for(i=1;i<=10;i++) {
        v1.push_back(i*i);
        cout<<(i*i)<<"\t";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Size of vector ="<<v1.size()<<endl;
    cout<<"Capacity of vector ="<<v1.capacity()<<endl;
    cout<<"Max Size of vector ="<<v1.max_size()<<endl;

    cout<<endl;
    cout<<"Iterating over the vector"<<endl;
    for(it = v1.begin(); it != v1.end(); ++it) {
        cout<<""<<*it<<"\t";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Element at pos 3 (v1.at(3)) = "<<v1.at(3)<<endl;
    cout<<"Element at pos 4 (v1[4]) = "<<v1[4]<<endl;
    cout<<"Element at front = "<<v1.front()<<endl;
    cout<<"Element at back = "<<v1.back()<<endl;
    cout<<endl;
    cout<<"Adding 999 to back of vector"<<endl;
    v1.push_back(999);
    cout<<"Element at back = "<<v1.back()<<endl;
    cout<<"Removing 999 from back of vector"<<endl;
    v1.pop_back();
    cout<<"Element at back = "<<v1.back()<<endl;
    cout<<endl;
    cout<<"Insert 40 before at the start of the vector"<<endl;
    v1.insert(v1.begin(), 40);
    cout<<"Element at front = "<<v1.front()<<endl;
    cout<<"Create another vector of 2 elements with value 14"<<endl;
    vector <int> v2(2,14);
    cout<<"Size of vector ="<<v2.size()<<endl;
    cout<<"Add the two elements before position 3 in vector 1"<<endl;
    v1.insert(v1.begin()+2, v2.begin(), v2.end());
    cout<<"Iterating over the vector"<<endl;
    for(it = v1.begin(); it != v1.end(); ++it) {
        cout<<""<<*it<<"\t";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Erase first element from vector"<<endl;
    v1.erase(v1.begin());
    cout<<"Element at front = "<<v1.front()<<endl;
    cout<<"Erase the two elements now at pos 2 and 3"<<endl;
    v1.erase(v1.begin()+1,v1.begin()+3);
    cout<<"Iterating over the vector"<<endl;
    for(it = v1.begin(); it != v1.end(); ++it) {
        cout<<""<<*it<<"\t";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Clear the vector"<<endl;
    v1.clear();
    cout<<"Size of vector ="<<v1.size()<<endl;
    cout<<"Capacity of vector ="<<v1.capacity()<<endl;
    cout<<"Max Size of vector ="<<v1.max_size()<<endl;
}
