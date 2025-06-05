#include <iostream>
using namespace std;

int main()
{
    int arr1[20],arr2[20],arr3[20];
    int i, n1, n2, m, index = 0;

    cout << "Enter the elememts in array 1 :" << endl;
    cin >> n1;

    for(i = 0; i < n1; i++){
        cout << "arr1[" << i << "] = " << endl;
        cin >> arr1[i];
    }
    
    cout << "Enter the elememts in array 2 :" << endl;
    cin >> n2;

    for(i = 0; i < n2; i++){
        cout << "arr2[" << i << "] = " << endl;
        cin >> arr2[i];
    }

    m = n1 + n2;
    for(i = 0; i < n1; i++){

        arr3[index] = arr1[i];
        index++;
    }

    for(i = 0; i < n2; i++){

        arr3[index] = arr2[i];
        index++;
    }

    cout << "The merged array is :" << endl;
    for(i = 0; i < m; i++){
         cout << "arr[" << i << "] = " << arr3[i] << endl;
    }

}