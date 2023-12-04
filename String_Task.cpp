// // #include<iostream>
// // #include<vector>
// // using namespace std;

// // int main(){
// //     vector<string> task;
// //     for (int i = 0; i < task.length(); i++)
// //     {
// //         char ele;
// //         cin>>ele;
// //         task.push_back(ele);
// //     }
    
// //     transform(task.begin(),task.end(),task.begin()::tolower);
    
// //     for (int i = 0; i <task.length() ; i++)
// //     {
// //        if (task[i]=='a' || task[i]=='e' || task[i]=='i' ||task[i]=='o' || task[i]=='u')
// //        {
// //         task.erase(task.begin()+i+1);
// //        }

// //        else if (task[i]=='A' || task[i]=='E' || task[i]=='I' ||task[i]=='O' || task[i]=='U'){
// //          task.erase(task.begin()+i+1);
// //        }
// //        else
// //        {
// //         task.insert(task.begin()+i,'.');
// //        }
       
       
// //     }
// //     for (int i = 0; i < task.length; i++)
// //     {
// //         /* code */
// //         cout<<task[i];
// //     }
    
    
    
// // }

// #include<iostream>
// #include<string>
// using namespace std;

//  int main(){
//     string str;
//     cin>>str;
    
//     int l=str.length();

//     for (int i = 0; i < l; i++)
//     {
//        if (str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o' || str[i]=='u')
//        {
//          str.erase(str.begin()+i+1);
//        }

//        else if  (str[i]=='A' || str[i]=='E'|| str[i]=='I'|| str[i]=='O' || str[i]=='U')
//        {
//          str.erase(str.begin()+i+1);
//        }
//        else{
//         str.at(i)='.';
//        }
       
       
//     }
//     cout<<str;
    
//  }

// #include <iostream>
// #include <string>
// #include <cctype>

// using namespace std;

// int main() {
//     string input;
//     cin >> input;

//     string result = "";

//     for (char c : input) {
//         // Convert uppercase consonants to lowercase
//         if (isupper(c)) {
//             c = tolower(c);
//         }

//         // Check if the character is a vowel (AEIOUY)
//         if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
//             // Insert a "." before consonants
//             result += ".";
//         }

//         // Append the character to the result string
//         result += c;
//     }

//     cout << result << endl;

//     return 0;
// }





#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    // Check if the character is a vowel
    return (c == 'A' || c == 'O' || c == 'Y' || c == 'E' || c == 'U' || c == 'I' ||
            c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i');
}

int main() {
    string input;
    cin >> input;

    string result = "";

    for (char c : input) {
        if (!isVowel(c)) {
            // Add a "." before each consonant
            result += '.';
            
            // Replace uppercase consonants with lowercase ones
            if (c >= 'A' && c <= 'Z') {
                c = c - 'A' + 'a';
            }
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}



 //while(n>0){
	   //    if(n>3)
	   //    {
	   //     for(int j=0;j<3;j++)
	   //     {
	   //     arr[j]+=1;
	   //     }
	   //    }
	   //  else
	   //  {
	   //      for(int i=0;i<n;i++)
	   //      {
	   //          arr[i]+=1;
	   //      }
	   //  }
	     
	      
	   // n-=3;
	   //}
	   
	   // for(int k=0;k<3;k++){
	   //     cout<<arr[k]<<" ";
	   // }
	   // cout<<endl;