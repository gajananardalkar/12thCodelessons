#include <iostream>
#include <fstream> // library to use file in c++  - create read write and diff operation
// ofstream - create/ write file.    --ifstream - read file
using namespace std;
// create file
int main()
{
    string text;
    // create a new file
    // syntax = tocreatefile  MyFile("filename")
    ofstream MyFile("filename1.txt"); // this will create in same folder
                                      //  ofstream MyFile("../newFilename.txt"); // this will create  outside our folder
    //  write a file
    MyFile << "this is new file";
    //  to read file
    ifstream MyReadFile("filename.txt");
    
    while (getline(MyReadFile,text) )
    {
       cout << text;
    }
    return 0;
}