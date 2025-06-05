#include <iostream>
using namespace std;

void read_array(int arr[], int n);
int find_small(int arr[], int n);

int main() {

    int num[10],n,smallest;

    cout << "Enter the number of elements :" <<endl;
    cin >> n;

    read_array(num, n);
    smallest = find_small(num, n);

    cout << "The smallest number is :" << smallest << endl;

    return 0;

}

void read_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

int find_small(int arr[], int n)
{
int small = arr[0];
for(int i = 1; i< n;i++){
    if(arr[i] < small)
    {
        small = arr[i];
    }
}
return 0;
}

// hello