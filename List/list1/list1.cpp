#include <iostream>
#include <list>
using namespace std;


void showlist(list<int> p)
{
    for (list<int> ::iterator it = p.begin();it != p.end();it++)
    {
        cout << *it << " ";
    }
}

int main()

{
    list <int> numbers;

    numbers.push_back(10);
    numbers.push_back(101);
    numbers.push_back(1012);
    numbers.push_back(1009);
    numbers.push_front(90); 

    showlist(numbers);

    list<int> ::iterator erase1 = numbers.begin();
    advance(erase1, 3);
    cout<< "\n New iterator is :" << *erase1 << endl;


    cout << "Hello World!\n";
}


