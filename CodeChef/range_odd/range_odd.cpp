#include <iostream>
#include<list>
using namespace std;

int main() {
	// your code goes here
    int n=0;
    int a=0,b=0;
    
    cin >> a;
    cin >> b;
    

    for(int i=a;i<=b;i++)
    {
        if(i % 2 != 0)
        {
            cout << i << " ";
        }
    }    

	return 0;
}
