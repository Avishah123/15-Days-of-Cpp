#include <iostream>
#include<list>
using namespace std;

int main() {
	// your code goes here
    int n=0;
    int a=0;
    int temp=0;
    int num=0;
    int count =0;

    cin >> n >> num;
    list<int> l;

    
    

    for(int i=0;i<n;i++)
    {
        
        cin >> temp;
        l.push_back(temp);
    }
    
    for(list<int> ::iterator it=l.begin(); it != l.end();it++)
    {
        // cout << *it << " ";
        if(*it == num)
        {
            count = count +1;
        }        
    }
    

    if(count > 0)
    {
        cout << 1;
    }
    else 
    {
        cout << -1;
    }

	
}