#include <iostream>

using namespace std;

int main()
{
    int temp1, temp2;
    double temp_avg;

    cout << "Enter temperature 1: ";
    cin >> temp1;
    cout << "Enter temperature 2: ";
    cin >> temp2;

    temp_avg = (temp1 + temp2) / 2;

    cout << "Average temperature = " << temp_avg << endl;

    return 0;
}