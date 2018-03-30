#include <iostream>
using namespace std;

int main()
{

    int count = 5;
    int rows = 2;
    int columns = 6;


    int ***ptr = new int** [count];
    for (int i = 0; i < count; i++)
    {
        ptr[i] = new int* [rows];
        for (int j = 0; j < rows; j++)
        {
            ptr[i][j] = new int [columns];
        }
    }

    
    for (int i = 0; i < count; i++)
    {
        for (int j =0; j < rows; j++)
        {
            for (int k =0; k < columns; k++)
            {
                ptr[i][j][k] = k;
                cout << ptr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl << endl;
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            delete [] ptr[i][j];
        }
        delete [] ptr[i];
    }
    delete ptr;



    system("pause");
    return 0;
}
