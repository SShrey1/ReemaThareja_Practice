#include <iostream>
using namespace std;

int main()
{
    int i, n, arr[20], large, second;

    cout<< "Enter the number of elements : " << endl;
    cin>> n;

    for(i = 0; i < n; i++){
        cout << "\narr[" << i << "] = ";
        cin>> arr[i];

    }

    large = arr[0];
    

    for(i = 1; i< n; i++){
        if(arr[i] > large){
            large = arr[i];
            
        }
    }

    second = arr[1];
    for(i = 0; i< n; i++){
        if(arr[i] != large) {
            if(arr[i] > second){
                second = arr[i];
            }
        }
    }

    cout << "The largest number is :" << large << endl;
    cout << "The second largest number is :" << second << endl;
    

   
    return 0;

    
}