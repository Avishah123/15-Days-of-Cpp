#include<iostream>
#include<vector>

using namespace std;

int main()
{
    
    // to initialise a vector
    vector<string> strings_vector;

    strings_vector.push_back("one");
    strings_vector.push_back("two");
    strings_vector.push_back("three");

    // cout << strings_vector[2] << endl;
    for(int i=0;i<strings_vector.size();i++)
    {
        cout<< strings_vector[i] << endl;
    }



    return 0;
}
