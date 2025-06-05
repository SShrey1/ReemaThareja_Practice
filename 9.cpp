#include <iostream>
using namespace std;

int main()
{
    int i, n, arr[20], pos;

    cout<< "Enter the number of elements : " << endl;
    cin>> n;

    for(i = 0; i < n; i++){
        cout << "\narr[" << i << "] = ";
        cin>> arr[i];

    }

   cout << "Enter the position to be deleted : " << endl;
   cin >> pos;

   for(i = pos; i < n - 1; i++){
    arr[i] = arr[i+1];
    n--;
   }

cout << "The array after the insertion is :" << endl;
    for(i = 0; i < n; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;

    }

    return 0;

}