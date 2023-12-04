#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    while (n--)
    {
   string yourWord;
   cin>>yourWord;
   int lengths=yourWord.length();
   if (yourWord.length()>10)
   {
     cout<<yourWord[0]<<(lengths-2)<<yourWord[lengths-1]<<endl;
   } 
   else
   {
    cout<<yourWord<<endl;
   }
   
    }
    
  
   
}
// word
// localization
// internationalization
// pneumonoultramicroscopicsilicovolcanoconiosis