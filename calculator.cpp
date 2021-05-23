#include <iostream>

using namespace std;

int Add(int x, int y){
   int c = x + y;
   return c;
}

int Sub(int x, int y){
    int z = x - y;
    return z;
}

int Multiple(int x, int y){
    int z = x * y;
    return z;
}

int Divide(int x, int y){
    int z = x / y;
    return z;
}

int main(){
    int a;
    cout << "Enter the first value: ";
    cin >> a;
    int b;
    cout << "Enter the second value: ";
    cin >> b;

    int addition = Add(a,b);
    int substraction = Sub(a,b);
    int multiple = Multiple(a,b);
    int divide = Divide(a,b);
    cout << "Your Addition value is: "<< addition << "\n";
    cout << "Your Substraction value is: "<< substraction << "\n";
    cout << "Your Addition value is: "<< multiple << "\n";
    cout << "Your Addition value is: "<< divide << "\n";
}


