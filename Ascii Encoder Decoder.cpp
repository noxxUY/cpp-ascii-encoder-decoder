
#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3, c4, c5;

    cout << "Enter a Word: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "Encoded ASCII: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);

    int dec1, dec2, dec3, dec4, dec5;
    cout << "\nEnter ASCII to Decode (Example: 120 100 100 100 100) : ";
    cin >> dec1 >> dec2 >> dec3 >> dec4 >> dec5;
    cout << "Decoded ASCII: " << char(dec1) << char(dec2) << char(dec3) << char(dec4) << char(dec5);

    system("pause>0");
}

