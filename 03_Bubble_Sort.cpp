#include<bits/stdc++.h>
using namespace std;

swaps(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n-1; i++) { 
		for (int j = 0; j < n-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				swaps(arr[j], arr[j+1]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}