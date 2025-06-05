#include <iostream>
using namespace std;

int main(){
    int arr[2][2] = { 12, 34, 45, 87};
    int i,j;

    for(i = 0; i < 2; i ++){
        cout << endl;
        for(j = 0; j< 2; j++){
            cout << arr[i][j] << "\t";
        }
    }

    return 0;
}