#include <iostream>
using namespace std;
long Factorial (int no);
long nCr(int n,int r);
int main() {
  int n,r;
  cout<<"Enter a Value for n :";
  cin>> n;
  cout<<"Enter s Value for r :";
  cin>>r;
  cout<<"nCr = ";
  cout<<nCr(n,r);
  cout<<endl;
  
}