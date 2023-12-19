// array
// int maths = 80, science = 90, his =75;

//  int -4byte,char = 1byte, float= 4 byte, double = 8 byte

// dataType array_name[array_size];

// dataType array_name= {item1,item2,.....};

#include <iostream>
using namespace std;
int main()
{
    // int marks[6] = {80, 70, 90, 50, 95, 88}; // array idex start from zero, but here arraylenght is 6
    //  cout << marks[0]; //to print any 1 number
    // for (int i = 0; i < sizeof(marks)/sizeof(int); i++)
    // {
    //      cout << marks[i];
    // }

    // for each loop
    // for(datatype variableName: arrayname){}
//  marks[3]=10;
//     for (int k : marks)
//     {
//         cout << k << "\n"; // it will print the aaray
//     }

// cout << sizeof(marks)/sizeof(int);


//  Avg of marks // additionOfMarkd/no of subject

// addition of number we are saving and again we are adding next number
//  int marks[]={80,50,90,82,60};
//  int noOfSubject = sizeof(marks)/sizeof(int);
//  int sum=0;
//  double avg;

//  for(int i =0; i< noOfSubject;i++){
//     sum= sum+ marks[i];
//  }
//  cout << sum;
// avg = sum/noOfSubject;

// cout << "Avg of marks:" << avg;
int noOfSubject;
cout << "Enter number of Subjects";
cin >> noOfSubject;
int marks[noOfSubject];

for(int i=0; i<noOfSubject;i++){
    cout << "enter marks of those subjects";
    cin >> marks[i];
    if(marks[i]>100){
        cout << "Please enter valid marks that is less than 100";
        cin >> marks[i];
    }else if(marks[i] < 0 || marks[i] != 0){
         cout << "Please enter valid marks that is greater than 0";
        cin >> marks[i];
    }
}
 int sum= 0;
for(int i=0; i<noOfSubject;i++){
    sum= sum+marks[i]; //sum+ = marks[i] // both statement have same meaning
}
double avg;
avg = sum/noOfSubject;
cout << avg;
}
