#include <iostream>
#include<list>
using namespace std;

int main() {
	// your code goes here
    int n=0,i=1;
    int count =0;
    list<int> l;
    
    cin >> n;
    
    while(i<=n)
    {        
        if(n % i == 0)
        {
            l.push_back(i);
            // cout << i << " ";
            count = count+1;
        }
        i++;     
    }
    cout << count << endl;
    for(list<int> ::iterator it=l.begin(); it != l.end();it++)
    {
        cout << *it << " ";
    }

	return 0;
}
