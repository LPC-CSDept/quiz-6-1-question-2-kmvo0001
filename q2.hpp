#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
// Implement all your functions here
// ******************************

void getInput(int &a,int &b,int &c){
    cin>>a>>b>>c;
}

int findMin(int &a,int &b,int &c){
    int min=a;
    if(b<a){
        min=b;
    }
    else if(c<min)
        min=c;
    return min;
}

void printResult(int &a,int &b,int &c,int &min){
    cout<<a<<" "<<b<<" "<<c<<" Min: "<<min<<endl;
}