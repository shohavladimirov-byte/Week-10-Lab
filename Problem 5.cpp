#include <iostream>
using namespace std;

bool letsGoAlice(int n){
   if ((n-10)<9 and n-10>=0) return true;
   else if (n-27)<7 and n-27>=0 ) return true;
   else if (n-40)<5 and n-40>=0 ) return true;
   else if (n==49) return true;
   else { return false;}
}

int main(){
int n;
  cin >> n;
  cout << letsGoAlice(n); 
}
