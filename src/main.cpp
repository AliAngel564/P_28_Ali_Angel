/*
Amerike University
Author: Ali Angel
Work #: 28
Date: 29/04/25
Description: This program will declare and initialize 2 variables of different types
it will then declare a pointer for each variable and a double pointer for each pointer
after that we will print the stored value of our 6 variables and the memory slots of 
all variables
*/

#include <iostream>
#include <conio.h>


void pressAnyKey();

int main(){

    int usrNum = 10;
    std::string usrName = "Polo";

    int *pUsrNum = &usrNum;
    int **pPUsrNum = &pUsrNum;
    std::string *pUsrName = &usrName;
    std::string **pPUsrName = &pUsrName;

    std::cout<<"The value of usrNum through the variable: "<<usrNum;
    std::cout<<"\nThe value of usrNum through the pointer: "<<*pUsrNum;
    std::cout<<"\nThe value of usrNum through the double pointer: "<<**pPUsrNum;
    std::cout<<"\nThe value of usrName through the variable: "<<usrName;
    std::cout<<"\nThe value of usrName through the pointer: "<<*pUsrName;
    std::cout<<"\nThe value of usrName through the double pointer: "<<**pPUsrName;
    std::cout<<"\nThe memory slot stored in pUsrNum: "<<pUsrNum;
    std::cout<<"\nThe memory slot stored in pPUsrNum: "<<pPUsrNum;
    std::cout<<"\nThe memory slot stored in pUsrName: "<<pUsrName;
    std::cout<<"\nThe memory slot stored in pPUsrName: "<<pPUsrName;
    std::cout<<"\nThe memory slot of usrNum: "<<&usrNum;
    std::cout<<"\nThe memory slot of usrName: "<<&usrName;
    std::cout<<"\nThe memory slot of pUsrNum: "<<&pUsrNum;
    std::cout<<"\nThe memory slot of pPUsrNum: "<<&pPUsrNum;
    std::cout<<"\nThe memory slot of pUsrName: "<<&pUsrName;
    std::cout<<"\nThe memory slot of pPusrName: "<<&pPUsrName;

    return 0;
}

void pressAnyKey()
{
    std::cout<<"\n\nPRESS ANY KEY TO CONTINUE";
    getch();
    system("cls");
}