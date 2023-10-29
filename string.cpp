// Character array || strings :->

// -->> At the last of the string it add a null character ('\0') for terminater character array

#include <iostream>
#include <vector>
using namespace std;

// -------------------**************************-------------------

// Character array length count function
int CountLength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// -------------------**************************-------------------

void ReverseString(char ch[])
{
    int lenght = CountLength(ch);
    for (int i = 0, j = lenght - 1; i < j; i++, j--)
    {
        // char temp = ch[i];
        // ch[i] = ch[j];
        // ch[j] = temp;

        // Using swap inbuild function

        swap(ch[i], ch[j]);
    }
}

// -------------------**************************-------------------

bool Check_Palinodrome(char ch[])
{
    int length = CountLength(ch);
    int i = 0, j = length - 1;
    while (i < j)
    {
        if (ch[i] != ch[j])
        {
            return false;
        }
        else
        {
            i++,j--;
        }
        
    }
    return true;
}

// -------------------**************************-------------------

int main()
{

    // Initialize a character array
    char name[20];

    cout << "Enter your name : ";

    // Input character array || string but it get any new line,tab,space then it stop it execution (It means ,It store input untill it get any space,newline,and tab)
    cin >> name;

    // It terminate array at index 3
    //  name[3]='\0';

    // cout << endl;

    // Print character array
    // cout << "Your name is :" << name;
    // cout << endl;

    // Print the length of the character array name
    // cout << "The length of name is :" << CountLength(name);

    // Reverse string
    ReverseString(name);
    cout << "Your string reverse from is : " << name;
    cout << endl;

    // Check Palindrome or not
    if (Check_Palinodrome(name))
    {
        cout << "Palindrome !";
    }
    else
    {
        cout<<"Not palindrome !";
    }
    

    return 0;
}