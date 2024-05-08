#include <iostream>
using namespace std;
int main() {
  string ans;
  getline(cin,ans);
  char c;
  cin>>c;
  int first=-1;
  int last=-1;
    for(int i=0;i<ans.length();i++){
        if(ans[i]==c){
        if(first==-1){
             first=i;
        }
        last=i;

        }
    }
  cout<<first+1<<last+1;
    return 0;
}
