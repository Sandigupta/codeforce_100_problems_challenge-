// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool isConcussive(vector<int>& arr);


// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
//     {
// 	    int n;
// 	    cin>>n;
// 	    vector<int> arr(n) ;

// 	    for(int i=0;i<n;i++){
// 	        int ele;
//             cin>>ele;
//             arr.push_back(ele);
// 	    }

//         bool flage=isConcussive(arr);

// 	    if(flage)
//         {
// 	        for(int i=0;i<n;i++){
// 	            cout<<arr[i]<<" ";
// 	        }
// 	        cout<<endl;
// 	    }
// 	    else{
// 	        cout<<-1<<endl;
// 	    }
// 	}
// 		return 0;
// }


// 	bool isConcussive(vector<int>& arr){
// 	    int n=arr.size();
// 	    sort(arr.begin(),arr.end());

//         int median=arr[n/2];

//         vector<int> smaller, greater;

//         for (int i = 0; i < n; i++)
//         {
//            if (i<n/2)
//            {
//             smaller.push_back(arr[i]);
//            }
//            else
//            {
//             greater.push_back(arr[i]);
//            }
           
//         }
        
//         for (int i = 0; i < n; i++)
//         {
//             if(i%2==0){
//                 arr[i]=smaller[i/2];
//             }
//             else
//             {
//                 arr[i]=greater[i/2];
//             }
            
//         }

//         for (int i = 1; i < n-1; i++)
//         {
//            if (!(arr[i]<arr[i-1] && arr[i-1]>arr[i+1]) || (arr[i]<arr[i-1] && arr[i]<arr[i+1]))
//            {
//               return false;
//             }
           
          
           
//         }
//           return true;
        
        


// 	}


 #include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if a sequence can be rearranged to be concussive
bool isConcussive(vector<int>& A) {
    int n = A.size();

    // Sort the sequence in ascending order
    sort(A.begin(), A.end());

    // Create two vectors to hold elements less than and greater than the median
    vector<int> smaller, greater;

    // Calculate the median
    int median = A[n / 2];

    // Split the sequence into two parts based on the median
    for (int i = 0; i < n; i++) {
        if (i < n / 2) {
            smaller.push_back(A[i]);
        } else {
            greater.push_back(A[i]);
        }
    }

    // Rearrange the sequence by interleaving smaller and greater elements
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            A[i] = smaller[i / 2];
        } else {
            A[i] = greater[i / 2];
        }
    }

    // Check if the rearranged sequence is concussive
    for (int i = 1; i < n - 1; i++) {
        if (!((A[i - 1] < A[i] && A[i] > A[i + 1]) || (A[i - 1] > A[i] && A[i] < A[i + 1]))) {
            return false;
        }
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Check if it's possible to rearrange the sequence
        if (isConcussive(A)) {
            for (int i = 0; i < N; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
