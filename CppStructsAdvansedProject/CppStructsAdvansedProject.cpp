#include <iostream>

template <typename T>
T sum(T a, T b)
{
    return a + b;
}

template <typename T>
T mult(T a, T b)
{
    return a * b;
}


//struct DocumentInt
//{
//    int series;
//    int number;
//};

template <typename T>
struct Document
{
    T series;
    int number;
};


struct Date
{
    int day;
    int month;
    int year;
};

struct Person
{
    char* name = new char;
    Date birthDate;
};

struct Array
{
    int* array;
    int size;
};

int main()
{
    Person bob;
    strcpy_s(bob.name, 4, "Bob");
    bob.birthDate.day = 10;
    bob.birthDate.month = 4;
    bob.birthDate.year = 2001;

    Person* joe = new Person;
    strcpy_s(joe->name, 4, "Joe");
    joe->birthDate.day = 24;
    joe->birthDate.month = 11;
    joe->birthDate.year = 1998;

    int n{ 55 };
    std:: cout << sum(n, 23) << "\n";
    std::cout << sum<int>(12.4, 56.9) << "\n";


    Document<int> document;
    Document<char[10]> bornDoc;
}
