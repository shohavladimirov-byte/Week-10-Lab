#include <iostream>
using namespace std;


int countDiv(int n,int d){
    if (d==0) return 0;
    if (n%d==0) return 1+countDiv(n,d-1);
    return countDiv(n,d-1);
}

bool isThree(int n) {
    if (countDiv(n,n)==3) return true;
    return false;
}


int main()
{
    int n;
    cin >> n;
    cout << isThree(n) << endl;
}
