#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void testCowsCanBeMilked();
void testSheepAreNotTheOnlyFruit();
void DisplayFunctionName(string FunName);

void testCowsCanBeMilked()
{
    cout << endl
         << "Test Function name is : " << __func__ << endl;
    string FunName = __func__;
    DisplayFunctionName(FunName);
}
void testSheepAreNotTheOnlyFruit()
{
    cout << "Test Function name is : " << __func__ << endl;
    string FunName = __func__;
    DisplayFunctionName(FunName);
}

void DisplayFunctionName(string FunName)
{
    int len;
    string test = "test";
    if (FunName.find(test) != string::npos)
    {
        len = FunName.length() - 4;
        FunName = FunName.substr(4, len);

        cout << "Function Name  :" << FunName << endl;
    }

    char CharArray[FunName.length() + 1];

    strcpy(CharArray, FunName.c_str());

    cout << "Display version is : " << CharArray[0];
    for (int i = 1; i < len; i++)
    {
        if (isupper(CharArray[i]))
        {
            cout << " ";
            CharArray[i] = CharArray[i] + 32;
        }
        cout << CharArray[i];
    }
    cout << endl;
}
int main()
{
    testCowsCanBeMilked();
    testSheepAreNotTheOnlyFruit();
    return 0;
}