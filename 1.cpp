#include <iostream>
using namespace std;

int main()
{
    int i, n, arr[20];

    cout<< "Enter the number of elements : " << endl;
    cin>> n;

    for(i = 0; i < n; i++){
        cout << "\narr[" << i << "] = ";
        cin>> arr[i];

    }

    cout<< "The elements are :";
    for(i = 0; i<= n; i++){
        cout << "\t" << arr[i];
    }
}