#include <iostream>
#include <vector>
using namespace std;
int main() {
  int times;
  cin>>times;
  while(times>0){
    int n,k,i,j;
    cin>>n>>k;
    vector<int> circle;
    i=0;
    while (i<n){
      circle.push_back(i+1);
      i++;
    }
    i=0;
    while(circle.size()!=1){
      i=(i+k-1)%n;
      circle.erase(circle.begin()+i);
      n=circle.size();
    }
    cout<<circle[0]<<endl;;
    times--;
  }
}
