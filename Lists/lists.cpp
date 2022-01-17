#include<iostream>
#include<list>

using namespace std;

int main()
{
    // to initialise a pair 
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(5);

    // to push the element in the front 
    l.push_front(0);

    
    for(list<int> ::iterator it=l.begin(); it != l.end();it++)
    {
        cout << *it << endl;
    }

    // for(int i=0;i<(l.size());i++)
    // {
    //     cout << l[i] << endl;
    // }
     
    return 0;
}
