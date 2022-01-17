#include <iostream>
#include<list>
using namespace std;

int main() {
	// your code goes here
    int n=0;
    int a=0;
    
    cin >> n;

    if(n % 5 == 0 || n % 6 ==0)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }    

	return 0;
}
