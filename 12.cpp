#include <iostream>
using namespace std;

int main(){

    int arr1[20],arr2[20],arr3[20];
    int i, n1, n2, m, index = 0;
    int first_index, second_index;

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

    while(first_index < n1 && second_index < n2){
        if(arr1[first_index] < arr2[second_index]){
            arr3[index] = arr1[first_index];
            first_index++;
        } else {
            arr3[index] = arr2[second_index];
            second_index++;
        }
        index++;
    }
    // if elements of first index are over
    if(first_index == n1){
        while(second_index < n2){
            arr3[index] = arr2[second_index];
            second_index++;
            index++;
        }
    }
    // if elements of second index are over
    else if(second_index == n2){
        while(first_index < n1){
            arr3[index] = arr1[first_index];
            first_index++;
            index++;
        }
    } 

    cout << "The merged array is : " << endl;
    for(i = 0; i < m; i++){
         cout << "arr[" << i << "] = " << arr3[i] << endl;
    }

    return 0;
}