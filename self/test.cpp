#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
      cout<<"hahaha" ; 
    vec.clear(); 
    cout<<vec.back() ; // clear the entire vector
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<"hahaha" ; 
        cout << vec[i] << " ";
    }
    return 0;
}