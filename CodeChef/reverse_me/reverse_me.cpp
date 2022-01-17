#include <iostream>
#include<list>
using namespace std;

int main() {
	// your code goes here
    int n=0;
    int a=0;
    int temp=0;
    cin >> n;
    list<int> l;

    for(int i=0;i<n;i++)
    {
        
        cin >> temp;
        l.push_back(temp);
    }

    l.reverse();

    for(list<int> ::iterator it=l.begin(); it != l.end();it++)
    {
        cout << *it << " ";
    }    

	return 0;
}
