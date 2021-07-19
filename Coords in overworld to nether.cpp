#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    float x;
    float y;
    float z;
    cout << "What is the x coord in the overworld? " ;
    cin >> x;
    cout << "What is the y coord in the overworld? ";
    cin >> y;
    cout << "What is the z coord in the overworld? ";
    cin >> z;
    x /= 8;
    z /= 8;
    z = round(z);
    x = round(x);
    cout << "Your nether coords are: " << x << ", " << y << ", " << z << "!" << endl << "(Type anything then press enter to exit the program)" << endl;
    string end;
    system("pause");
}