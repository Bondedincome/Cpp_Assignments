#include <iostream>
#include <string>
using namespace std;

//Prototypes
void search(char gender[], char s, int n);
void search(string name[], string str, int n);
void search(int age[], int numb, int n);
void display_Student_Records(string name[], int age[], char gender[], int n);


int main() {
    int n, i;
    
    cout << "Enter the amount of students to be recorded: ";
    cin >> n;
    
    string name[n];
    char gender[n];
    int age[n];
    
    
    for (i = 0; i < n; i++)
    {
    cout << "Student " << i + 1 <<":\n";
    cout << "Enter the First Name only: ";
    cin >> name[i];
    cout << "Enter Age: ";
    cin >> age[i];
    cout << "Enter the Gender M/F: ";
    cin >> gender[i];
    }
    
    char choice = '0';
    
    while (choice != '5')
    {
        cout << "Enter choice: " << endl;
        cout << "1. Search By Age" << endl;
        cout << "2. Search By Gender" << endl;
        cout << "3. Search By Name" << endl;
        cout << "4. Display Student Records" << endl;
        cout << "5. Exit\n" << endl;
        cout << "Here ==> ";
        cin >> choice;
        
        switch(choice) 
        {
            case '1':
            {
                int numb;
                cout << "Enter the age you want to search: ";
                cin >> numb;
                
                search(age, numb, n);
                break;
            }
            case '2':
            {
                char s;
                cout << "Enter the gender you want to search: ";
                cin >> s;
                
                search(gender, s, n);
                break;
            }
            case '3':
            {
                string str;
                cout << "Enter the name you want to search: ";
                cin >> str;
                search(name, str, n);
                break;
            }
            case '4':
            {
                display_Student_Records(name, age, gender, n);
                break;
            }
            case '5':
            {
                break;
            }
            default:
            {
                cout << "You entered a character thats out of the choice.";
            }
        }
    }
    cout << "Thank You. (๑˃ᴗ˂)ﻭ";
    return 0;
}

/**
 * search(string name[], string str, int n) - search a name
 * @name: An array of names
 * @str: name to be checked
 * @n: size of array
 * 
 * Return: void
*/
void search(string name[], string str, int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        if (name[i] == str)
        {
            cout << "The name " << str << " has been found.\n";
            break;
        }
        else
            continue;
    }
}

/**
 * search(int age[], int numb, int n) - search an age
 * @age: An array of ages
 * @numb: age to be checked
 * @n: size of array
 * 
 * Return: void
*/

void search(int age[], int numb, int n)
{
    int i;
    int count = 0;
    
    for (i = 0; i < n; i++)
    {
        if (age[i] == numb)
        {
            count++;
        }
        else
            continue;
    }
    if (count == 0)
        cout << "There is no one who has the age " << numb << " in the list.\n";
    else
        cout << "There are a total of " << count << " who have the age " << numb << " in the list.\n";
}

/**
 * search(char gender[], char s, int n) - search a gender
 * @gender: An array of gender characters
 * @s: char to be checked
 * @n: size of array
 * 
 * Return: void
*/

void search(char gender[], char s, int n)
{
    int i;
    int count = 0;
    
    for (i = 0; i < n; i++)
    {
        if (gender[i] == s)
        {
            count++;
        }
        else
            continue;
    }
    if (count == 0)
        if (s == 'M')
            cout << "There are no Males in the list.\n";
        else
            cout << "There are no Females in the list.\n";
    else
        if (s == 'F')
            cout << "There are a total of " << count << " Females in the list.\n";
        else
            cout << "There are a total of " << count << " Males in the list.\n";
}

/**
 * display_Student_Records(string name[], int age[], char gender[], int n) - displays all the list of students
 * @name: Array of names
 * @age: Array of ages
 * @gender: Array of genders
 * @n: size of array
 * 
 * Return: void
 */

void display_Student_Records(string name[], int age[], char gender[], int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " :\n";
        cout << "Name: " << name[i] << ", Age: " << age[i] << ", Gender: " << gender[i] << "\n";
    }
    if (n == 0)
    {
        cout << "There is no list.";
    }
}