#include <iostream>
using namespace std;

int main()
{
    int i, n, arr[20], sum = 0;
    float mean = 0.0;

    cout<< "Enter the number of elements : " << endl;
    cin>> n;

    for(i = 0; i < n; i++){
        cout << "\narr[" << i << "] = ";
        cin>> arr[i];

    }

     for(i = 0; i < n; i++){
        sum += arr[i];
     }
     mean = (float)sum/n;

     cout<< "The sum of the elements is : "<< sum << endl;
     cout << "The mean of the elements is :" << mean << endl;

     return 0;
}