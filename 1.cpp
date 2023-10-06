#include <iostream>
using namespace std;

int main(){
    // arrays cna be used to store multiple values ina single data type.

    int arr[5]; // decleration of array.

    // in array indexing starts from 0;

    // print five int in reverse order.

    int a,b,c,d,e;

    cout << "Give five integers values : ";
    cin >>a>>b>>c>>d>>e;

    cout << "the integers in reverse order are: ";
    cout << e<<d<<c<<b<<a;

    return 0;
}
