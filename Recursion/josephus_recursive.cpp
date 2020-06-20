#include <iostream>
using namespace std;

int position(int n, int k){
  if(n==1) 
    return 1;
  else
    return (((position(n-1,k)+k-1)%n)+1) ;
}

//This function will also work fine but for this to work fine indexing starts form 0 
// int position(int n, int k){
//   if(n==1) 
//     return 0;
//   else
//     return ((position(n-1,k)+k)%n) ;
// }
// int main() {
//   int n,k;
//   cin>>n>>k;
//   cout<<position(n,k)+1;
// }
//The switch between k-1 and n+1 and k and %n is because for border case where 0+2%2 = 0 and 1+1%2 +1 = 1  


int main() {
  int n,k;
  cin>>n>>k;
  cout<<position(n,k);
}

