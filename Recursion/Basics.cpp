#include<bits/stdc++.h>
using namespace std;

const int N = 0;
// PROGRAM TO PRINT NAME N TIMES
void f1(int n){
	if(n == 0)return;
	cout << "Name" << endl;
	f1(n-1);
}

// Program to print in terms of 1->N
void f2(int n){
	if(n == 0)return;
	
	f2(n-1);
	cout << n << endl;
}

// Program to print in terms of N->1
void f3(int n){
	if(n == 0)return;
	cout << n << endl;
	f3(n-1);
}

// Program to print in terms of N->1 by backtrack
void f3(int i, int n){
	if(i >= n)return;
	f3(i+1, n);
	
}

// Program to find sum of first n numbers (Parameterised)
void f4(int i, int sum){
	if(i < 1){
		cout << sum << endl;
		return;
	}
	f4(i-1, sum+i);
}

// Program to find sum of first n numbers (Functional)
int f5(int n){
	if(n == 0)return 0;
	return n + f5(n-1); 	 
}

// Program to find factorial
int f6(int n){
	if(n == 0)return 1;
	return n*f6(n-1);	 
}

// Program to reverse an array (using two pointers)
void f7(int s, int e, vector<int>&arr){
	if(s >= e)return;
	swap(arr[s], arr[e]);
	f7(s+1, e-1, arr);
}

// Program to reverse an array (using one pointer)
void f8(int i, vector<int>&arr){
	int n = arr.size();
	if(i >= n/2)return;
	swap(arr[i], arr[n-1-i]);
	f8(i+1, arr);
}

// Program to reverse an array (using one pointer)
bool f9(int i, string s){
	int n = s.size();
	if(i >= n/2)return true;
	if(s[i] != s[n-1-i])return false;
	return f9(i+1, s);
}


                    // ****MULTIPLE RECURSION CALLS**** \\

// Fibonacci  TC -> (2^n)
int f10(int n){
	if(n <= 1)return n;
	return f10(n-1) + f10(n-2);
} 
	


int main(){

	int n;
	cin >> n;
	f3(n);
	cout << endl;
	f2(n);
	cout << endl;
	f4(n, 0);
	cout << endl;
	cout << f5(5) << endl;
	vector<int> arr = {1, 3, 2, 5, 4};
	for(auto i: arr)cout<< i << " ";
	cout << endl;
    f7(0, arr.size()-1, arr);
    for(auto i: arr)cout<< i << " ";
	cout << endl;
    f8(0, arr);
    for(auto i: arr)cout<< i << " ";
	cout << endl;
    string s = "abcba";
    cout << f9(0, s) << endl;
    cout << endl;
    vector<int> ds;
    f11(0, arr, ds);
    cout << endl;
    int k = 5;
    f12(0, arr, ds, 0, k);
    cout << endl;
    cout << f14(0, arr, 0, k) << endl;
    vector<int> arr1 = {2,5,2,1,2};
    vector<int> ds1;
    f12(0, arr1, ds1, 0, k);
}
