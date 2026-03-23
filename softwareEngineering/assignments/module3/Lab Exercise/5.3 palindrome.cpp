#include <iostream>
using namespace std;
int main(){

 
  string s;
   bool isPalindrome = true;
  cout<<"enter string";
  cin>>s;
  for(int i=0;i<=s.length()/2;i++){
     if(s[i]!=s[s.length()-1-i]){
        isPalindrome=false;
        break;     
     }
     
  }

    if(isPalindrome)
    cout<<"palindrome string";
    else{
      cout<<"not palindrome string";
    }
  return 0;
}