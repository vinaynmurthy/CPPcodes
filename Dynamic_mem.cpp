/* Example code explaining Dynamic allocation and de-allocation using new and delete commands in CPP.
 * Program to Dynamically allocate an Array. */

#include <iostream>

using namespace std;

int main() {

    int num = 0;
    /* pointer initialized to NULL. */
    int *arrptr = NULL; 

    cout << "Enter dynamic array size:" << endl;
    cin >> num;
    /* Dynamic allocation of an array with new keyword. */
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

    /* De-allocation of dynamic allocated memory using delete keyword. */
    delete[] arrptr;

    return 0;
}
