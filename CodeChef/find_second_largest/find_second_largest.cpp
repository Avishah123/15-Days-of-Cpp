#include <iostream>
#include<list>
using namespace std;

int main() {
	// your code goes here
    int n=0;
    int a=0,b=0,c=0;
    
    cin >> a;
    cin >> b;
    cin >> c;

    if(b > a && b < c && c > a )
    {
        cout << b;
    }
    else if(a > b && a < c && c > b)
    {
        cout << a;
    }
    else if(a > b && a < c && c > b)
    {
        cout << c;
    }
    else 
    {
        cout << c;
    }

    

	return 0;
}
