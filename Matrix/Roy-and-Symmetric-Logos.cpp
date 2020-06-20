#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int i,j,k,m,n;
  string input;
  cin>>m;

  for(i=0;i<m;i++){
    vector<vector<int>> pixel;
    int fail=0;
    cin>>n;
    for(j=0;j<n;j++){
      cin>>input;
      pixel.push_back(vector<int>());
      if(n==1){
        cout<<"YES";
        continue;
    }
      for(k=0;k<n;k++){
        pixel[j].push_back(int(input[k])-48);
      }
    }
    for(j=0;j<=n/2;j++){
      for(k=0;k<=n/2;k++){
        if(pixel[j][k]==pixel[j][n-(k+1)]&&pixel[j][k]==pixel[n-(j+1)][k]&&pixel[j][k]==pixel[n-(j+1)][n-(k+1)])
          continue;
        else{
            fail=fail+1;
            break;
        }
      }
      if(fail>0){
        cout<<"NO"<<endl;
        break;
      }

    }
    if(fail==0)
      cout<<"YES"<<endl;
  }
  return 0;
}
