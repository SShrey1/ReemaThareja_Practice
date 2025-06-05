#include <iostream>
using namespace std;

int main()
{
    int i, n, arr[20], num, pos;

    cout<< "Enter the number of elements : " << endl;
    cin>> n;

    for(i = 0; i < n; i++){
        cout << "\narr[" << i << "] = ";
        cin>> arr[i];

    }

    cout << "Enter the number to be added :" << endl;
    cin >> num;

    cout << "Enter the position :" << endl;
    cin >> pos;

    for(i = n - 1; i>= pos; i--){
        arr[i+1] = arr[i];

    }

    arr[pos] = num;
    n = n + 1;

    cout << "The array after the insertion is :" << endl;
    for(i = 0; i < n; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;

    }

    return 0;
}