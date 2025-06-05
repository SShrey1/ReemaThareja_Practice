#include <iostream>
using namespace std;

int main()
{
    int i, n, arr[20], small, pos;

    cout<< "Enter the number of elements : " << endl;
    cin>> n;

    for(i = 0; i < n; i++){
        cout << "\narr[" << i << "] = ";
        cin>> arr[i];

    }

    small = arr[0];
    pos = 0;

    for(i = 1; i< n; i++){
        if(arr[i] < small){
            small = arr[i];
            pos = i;
        }
    }

    cout << "The smallelst element is :" << small << endl;
    cout << "The position of the element is : " << pos << endl;
    return 0;

    
}