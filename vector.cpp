 
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<int> vector1{ 1, 2, 3, 4, 5, 6, 7,8 };
    vector<int>::iterator it1;
 
    cout<<"ORIGINAL INTEGER VECTOR ELEMENTS ARE: ";
    for (auto it = vector1.begin(); it != vector1.end(); ++it)
        cout << ' ' << *it;
 
    //Giving the address of the element to be removed
    it1 = vector1.begin()+1;  
    it1++;//Incrementing by 1
 
    //Removing the elements with erase() method
    vector1.erase(it1);
 
    //Printing the vectors after removing elements
    cout<<"\nVECTOR AFTER REMOVAL: ";
    for (auto it = vector1.begin(); it != vector1.end(); ++it)
        cout << ' ' << *it;
 
    return 0;
}