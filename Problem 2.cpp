#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b==0) {
        return a;
    }
    return gcd(b, a%b);
}

int commonFactors(int a, int b){
    if (b==1) return 0;
    if (gcd(a,b) == b) return 1 + commonFactors(a,b-1);
    return commonFactors(a,b-1);
}


int main()
{
    int a,b;
    cin >> a >> b;
    if (commonFactors(a,b)==0) cout << 1 << endl;
    else { cout << commonFactors(a,b);}
}
