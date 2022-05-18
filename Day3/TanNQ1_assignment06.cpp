#include <iostream>

using namespace std;

//----------------------------------------------------------------.
// brief: allocate memory for array
// param:
//
// result: True (Success) / False (Fail)
//----------------------------------------------------------------.
bool importData(int** pArr, int szRow, int szCol);

//----------------------------------------------------------------.
// brief: add two matrix 
// param:  
//
// return: int**
//----------------------------------------------------------------.
int** add2Matrix(int** pArr1, int** pArr2, int szRow, int szCol);

//----------------------------------------------------------------.
// brief: print matrix 
// param:  
//
// return: void
//----------------------------------------------------------------.
void printMatrix(int** pArr, int szRow, int szCol);

//----------------------------------------------------------------.
// brief: deallocate memory for array
// param:  
//
// return: void
//----------------------------------------------------------------.
void freeMem(int** pArr, int szRow, int szCol);

int main()
{
    int** pArr1 = NULL;
    int** pArr2 = NULL;
    int row, col;
    cout << "Please input row number of matrix: ";
    cin >> row;
    cout << "\nPlease input colum number of matrix: ";
    cin >> col;

    //allocate array 
    pArr1 = new int* [row];
    for (int i = 0; i < row; i++) {
        pArr1[i] = new int[col];
    }
    pArr2 = new int* [row];
    for (int i = 0; i < row; i++) {
        pArr2[i] = new int[col];
    }

    /*
    cout << "Please input data of array 1: " << "\n";
    if (!importData(pArr1,row,col)) {
        cout << "Import data Array 1 is faild\n";
        return 0;
     }
     
    cout << "\nPlease input data of array 2: " << "\n";
    if (!importData(pArr2,row,col)) {
        cout << "Import data Array 2 is faild\n";
        return 0;
    }
    */

    //input data of array
    cout << "Please input data of array 1: " << "\n";
    importData(pArr1, row, col);
    cout << "\nPlease input data of array 2: " << "\n";
    importData(pArr2, row, col);

    //add two matrix and print result matrix
    cout << "\nResult add 2 matrix:\n";
    printMatrix(add2Matrix(pArr1, pArr2, row, col), row, col);

    //deallocate array
    for (int i = 0; i < row; i++) {
        free(pArr1[i]);
        free(pArr2[i]);
    }
    free(pArr1);
    free(pArr2);
    return 0;
}

bool importData(int** pArr, int szRow, int szCol) {
    for (int i = 0; i < szRow; i++) {
        for (int j = 0; j < szCol; j++) {
            cout << "a[" << i << "][" << j << "]" << " ";
            cin >> *(*(pArr + i) + j);
        }
    }
    return true;
}

int** add2Matrix(int** pArr1, int** pArr2, int szRow, int szCol) {
    int** addArr = new int* [szRow];
    for (int i = 0; i < szRow; i++) {
        addArr[i] = new int [szCol];
    }
    for (int i = 0; i < szRow; i++) {
        for (int j = 0; j < szCol; j++) {
            *(*(addArr + i) + j) = *(*(pArr1 + i) + j) + *(*(pArr2 + i) + j);
        }
    }
    return addArr;
}

void printMatrix(int** pArr, int szRow, int szCol) {
    for (int i = 0; i < szRow; i++) {
        for (int j = 0; j < szCol; j++) {
            cout << *(*(pArr + i) + j) << " ";
        }
        cout << "\n";
    }
}