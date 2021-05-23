#include <iostream>

using namespace std;

int Add(int x, int y){
   int c = x + y;
   return c;
}

int main(){
    int a;
    cout << "Enter the first value: ";
    cin >> a;
    int b;
    cout << "Enter the second value: ";
    cin >> b;

    int addition = Add(a,b);
    cout << "Your Addition value is: "<< addition << "\n";
}


