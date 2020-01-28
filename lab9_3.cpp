#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int count = 0;
    float sum = 0 , y = 0;
    ifstream source;
    source.open ("score.txt");
    string textline;
    while(getline(source, textline)){
        sum += atof(textline.c_str());
        y += pow(atof(textline.c_str()),2);
        count++;
    }
    cout << "Number of dat = " << count << "\n";
    cout << "Mean = " << sum/count << "\n";
    cout << "Standard deviation = " << sqrt((y/count)-pow(sum/count,2))<< "\n";
return 0;
}
