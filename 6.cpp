#include <iostream>
using namespace std;

int main()
{
    int i, n, arr[20], flag = 0, j;

    cout<< "Enter the number of elements : " << endl;
    cin>> n;

    for(i = 0; i < n; i++){
        cout << "\narr[" << i << "] = ";
        cin>> arr[i];

    }

    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++){
            if(arr[i] == arr[j] && i != j){
                flag = 1;
                cout << "Duplicates found" << endl;

            } 
        }
    }

    if(flag == 0){
        cout << "No duplicates found" << endl;
    }

    return 0;
}