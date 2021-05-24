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

float Divide(int x, int y){
    int z = x / y;
    return z;
}

int main(){
    cout << "OLD 90's Calculator program, Enjoy! ;)\n";
    cout << "Calculator Options.\n";
    cout << "(1)Addition.\n";
    cout << "(2)Substraction.\n";
    cout << "(3)Multiple.\n";
    cout << "(4)Divide\n";

    int options;
    cout << "What you want to do? Choose from the Options: ";
    cin >> options;

    int a;
    cout << "Enter the first value: ";
    cin >> a;
    int b;
    cout << "Enter the second value: ";
    cin >> b;

    switch(options) {
        case 1 :
            {
                int addition = Add(a,b);
                cout << "Your Addition value is: "<< addition << "\n";
                break;
            }
        case 2 :
            {
                int substraction = Sub(a,b);
                cout << "Your Substraction value is: "<< substraction << "\n";
                break;
            }
        case 3 :
            {
                int multiple = Multiple(a,b);
                cout << "Your Multiple value is: "<< multiple << "\n";
                break;
            }
        case 4 :
            {
                float divide = Divide(a,b);
                cout << "Your Divide value is: "<< divide << "\n";
                break;
            }
        default :
            cout << "[!!]Invalid options." << endl;
    }
    return 0;
}


