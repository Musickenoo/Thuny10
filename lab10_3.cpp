#include <iostream>
#include<fstream>
#include <iomanip>
#include<cmath>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    int i=0,j=0,data = 0;
    double a[99]={},sum=0,s=0;
    while(getline(source,textline)){
        data +=1;
        a[i]=atof(textline.c_str());
        sum += atof(textline.c_str());
        i++;
    }
    while(j<data){
        s += pow(a[j]-(sum/data),2);
        j++;
    }
    cout << "Number of data = "<<data<< endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/data<< endl;
    cout << setprecision(3);
    cout << "Standard deviation = "<<sqrt(s/data);
    cout << setprecision(3);
}