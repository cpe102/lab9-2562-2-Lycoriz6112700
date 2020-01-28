#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream source;
    ofstream dest ("cheerbook_copy.txt");
    source.open ("cheerbook.txt");
    dest << "“-------------------- SOTUS ---------------------”" << "\n";
    string textline;
    while(getline(source, textline)){
        dest << textline << "\n";
    }
    dest << "“-------------------- SOTUS ---------------------”";
return 0;
}
