#include <iostream>

using namespace std;

int main()
{

    string var1 = "Ayooo belajar C++";
    string* var2 = &var1;   // ini akan mengakses alamat memory yaitu var1 yaitu nama pointernya

    cout << var1 << endl;
    cout << var2 << endl;

}