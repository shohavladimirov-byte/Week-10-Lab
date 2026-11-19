#include <iostream>
using namespace std;


int largestDigit(int n){
    if ((n/10)%10 < n%10) {
        return n%10;
    }
     return largestDigit(n/10)%10;
}


int main()
{
    int c;
    cin >> c;

    cout << largestDigit(c) << endl;
}
