#include <iostream>
using namespace std;

int square_area(int A)
{
    return A*A;
}

int rectangle_area(int A, int B)
{
    return A*B;
}
//exceptions for if one or more number is negative
void exceptions(int A, int B){
    if(A <= 0 || B <= 0){
        //throws an error
        throw string(" The area can't be negative.");
    }
}
int main(void) {
float a, b, r; 
cin >> a;
cin >> b;
//tries to use the numbers and calls the methods
try
{
exceptions(a,b);
float rsquare = square_area(a);
float rrectangle = rectangle_area(a,b);
cout << rsquare << endl << rrectangle << endl;
}
//catches a thrown exception
catch(string &exc){
    cout << "Your input is not valid." << exc << endl;
}

}

