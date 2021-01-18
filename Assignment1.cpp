#include <iostream>
using namespace std;

void CalculateMean(int limit)
{
    double mean, sum = 0;
    double numbers[limit];

    cout << "Please enter numbers" << endl;
    for (int i = 0; i < limit; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }
    cout << "Sum of " << limit << "numbers is :" << sum << endl;
    mean = sum / limit;
    cout << "Mean of numbers is :" << mean << endl;
}

int main()
{
    int limit;
    cout << "Please enter limit " << endl;
    cin >> limit;

    CalculateMean(limit);

    return 0;
}