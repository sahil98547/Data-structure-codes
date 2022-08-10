// //Why this is called insertion sort 
// //we have taken the value from the unsorted sublist and insert into the sorted list according to the ordering

// #include<bits/stdc++.h>
// using namespace std;

// // swaps(int &a, int &b) {
// // 	int t = a;
// // 	a = b;
// // 	b = t;
// // }

// int main() {
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++) {
// 		cin >> arr[i];
// 	}

// 	for (int i = 1; i < n; i++) {
// 		int temp = arr[i];     //store the value of i index of the array
// 		int j;
// 		for (j = i - 1; j >= 0; j--) {
// 			if (arr[j] > temp) {
// 				arr[j + 1] = arr[j];
// 			}
// 			else{
// 				break;     //if condition is not true then no need to move for a head because left most element
// 			}              //are sorted so left element is also less than of that element 
// 		}
// 		arr[j + 1] = temp;
// 	}

// 	for (int i = 0; i < n; i++) {
// 		cout << arr[i] << " ";
// 	}

// 	return 0;
// }





//                 ########################################################################
//2 method by jenny

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }

    for(int i=1;i<n;i++){
    	int temp=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>temp){
        	arr[j+1]=arr[j];
        	j--;
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<n;i++){
    	cout<<arr[i];
    }
	return 0;
}

