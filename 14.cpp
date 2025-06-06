#include <iostream>
using namespace std;

void read_array(int my_array[], int );
void display_array(int my_array[], int);
void interchange(int arr[], int );
int find_biggest_pos(int my_array, int n);
int find_smallest_pos(int my_array, int n);

int main() {
    int arr[10], n;

    cout << "Enter the size of the array : "<< endl;
    cin >> n;

    read_array(arr,n);
    interchange(arr,n);

    cout << "The new array is :"<< endl;
    display_array(arr,n);

    return 0;
}

void read_array(int my_array[], int n){
    for(int i = 0;i < n; i++){
        cout << "arr[" << i << "] = "; 
        cin >> my_array[i]; 
    }
}


void display_array(int my_array[], int n){
    for(int i =0; i < n; i++){
        cout << "arr[" << i << "] = " << my_array[i] << endl; 
    }
}

void interchange(int my_array[], int n ){

    int temp, big_pos, small_pos;
    big_pos = find_biggest_pos(my_array, n);
    small_pos = find_smallest_pos(my_array,n);

    temp = my_array[big_pos];
    my_array[big_pos] = my_array[small_pos];
    my_array[small_pos] = temp;

}

int find_biggest_pos(int my_array[], int n){
    int large = my_array[0], pos = 0;
    for(int i = 1; i < n; i++){
        if(my_array[i] > large){
            large = my_array[i];
            pos = i;
        }
    }

    return pos;
}

int find_smallest_pos(int my_array[], int n){
    int small = my_array[0], pos = 0;
    for(int i = 1; i < n; i++){
        if(my_array[i] > small){
            small = my_array[i];
            pos = i;
        }
    }

    return pos;
}

