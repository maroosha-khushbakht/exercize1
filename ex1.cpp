
#include <iostream>
using namespace std;
int main() {

    int x, y;
    cout << "Enter Number 1: ";
    cin >> x;
    cout << "Enter Number 2: ";
    cin >> y;
    
    int sum = x + y;
    cout << "Sum: " << sum << endl;
    
    if (x>y) 
    cout << "Difference: " << x-y << endl;
    else
    cout << "Difference: " << y-x << endl;
    
    int p = x*y;
    cout << "Product: " << p << endl;
    
     if (x>y) 
    cout << "Quotient: " << x/y << endl;
    else
    cout << "Quotient: " << y/x << endl;
    
   

    return 0;

}
