#include <iostream>
#include<list>
#include <cmath>

using namespace std;


void is_valid_triangle(float a,float  b , float c)
{
    float area=0;
    
    float s;

    s = (a+b+c)/2;
    
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    // 2 4 3 
    if(a+b>c && b+c>a && c+a>b && area > 0)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }


}

int main() {
	// your code goes here
    int n=0;
    int a=0,b=0,c=0;
    int temp=0;
    int num=0;
    int count =0;

    cin >> a >> b >> c;
    

    is_valid_triangle(a,b,c);


    // sum of a and b should be greater than side c 
    


    
    
    

    

	
}