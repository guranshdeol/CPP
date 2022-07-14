#include <iostream>
using namespace std; /*we write namespace std here becauce if we dont do so then before every cout or any other element we will have to write
                       std::  eg- std::cout<<......*/

int main()
{

    // cout<<"hello world"<<endl;
    // cout<<"next line";

    // cout<<"Next line";
    // int a, b, c;
    // short s23423a=9;10

    // cout<<s23423a;

    // camelCase Notation
    // int marksInMaths=83;
    // cout<<"The marks of the student in maths is "<<marksInMaths;

    // string harry = "harry"
    // short a;
    // int b= 89;
    // long c;
    // long long d;
    // float const score = 45.32;
    // double score2 = 45.322;
    // long double score3 = 45.332;
    // score = 34.2;
    // b = 34;
    // cout<<"The score is "<<score;]

// Sum of two numbers:

    // int a , b;

    // cout<<"Write the first number ";
    // cin>>a;
    // cout<<"Your first number is: "<<a<<endl;

    // cout<<"Write the second number ";
    // cin>>b;
    // cout<<"Your second number is"<<b<<endl;

    // cout<<"THe sum of the numbers is "<<a+b;

    // operators
    // cout<<"a + b is "<<a + b<<endl;
    // cout<<"a - b is "<<a - b<<endl;
    // cout<<"a * b is "<<a * b<<endl;
    // cout<<"a / b is "<<(float) a / b<<endl;  //here if we dont write float then the answer will be a integer instead of decimal expression

    // remember float,int= float
    //           float,float=float
    //           int, int= int

// IF ELSE STATEMENT:-

    /*
    int age;
    cout<<"Enter Your Age"<<endl;
    cin>>age;

    if (age>150 || age<1){               // here || means 'or' we could have also written simple or instead of ||
        cout<<"YOu Guys are  alive!!";
    }

    else if (age>=18){                   // theres no limit to write else if in a program
        cout<<"YOu can Vote";
    }

    else {
        cout<<"You Can't Vote";
    }
    return 0;

    */

// Switch Operator
/*
    int age;
    cout << "Enter Your Age" << endl;
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "YOu are 12 years old";
        break;
    case 18:
        cout << "You are 18 years old";
        break;                                      // if we dont use break here then it would give both the outputs means it will give u r 18 years old and u r 12 yrs old both statements

    default:
       cout<<"You are neither 12 nor 18 years old";
        break;
    }
                        
                    // even using if else statement getting same output nw the purpose  of switvh statement is quite doubtful lets see what happens

*/

    /*
    if (age==12){
        cout<<"YOu are 12 years old";
    }

    else if (age==18){
        cout<<"You are 18 years old";
    }

    else {
        cout<<"You are neither 12 nor 18 years old";
    }

    */
// Loops
   int index=0;
   while (index<34){
   cout<<"the index number is "<<index<<endl;
   index=index+1;

   }
    return 0;
}