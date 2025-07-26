#include <iostream>

using namespace std;

int main() {

    int num = 0;
    int *arrptr = NULL;

    cout << "Enter dynamic array size:" << endl;
    cin >> num;

    arrptr = new int[num];

    cout << "Enter the elements of the array of size: " << num << "\n" << endl;

    for(int i =0; i < num; i++) {
        cin >> arrptr[i];
    }

    cout << "\nDynamic array elements entered:\n";
    for (int  i = 0; i < num; i++){

        cout << arrptr[i] << " ";
    }

    cout << endl;

    delete[] arrptr;

    return 0;
}