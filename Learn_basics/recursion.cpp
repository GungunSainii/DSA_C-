#include <bits/stdc++.h>
using namespace std;

//Understand recursion by print something N times || Print name N times using recursion {N-->1}

void printRecursion(int n,string word){
    if(n <= 0){
        return;
    }
    cout << word << endl;
    printRecursion((n-1),word);
}


//Understand recursion by print something N times || Print name N times using recursion {1 --> N}

void printRecursion1N(int cnt, int n, string word){
    if(cnt > n){
        return;
    }
    cout << word << endl;
    printRecursion1N(cnt+1,n,word);
}


// Print 1 to N using Recursion

void print1N(int i,int n){
    if (i > n){
        return;
    }
    cout << i << endl;
    print1N(i+1, n);
}


// Print 1 to N (Using Backtrack) cnt+1 NOT ALLOWED

void print1Nback(int cnt, int n){
    //Assume : cnt = n
    if(cnt <= 0 ){
        return;
    }
    print1Nback(cnt-1,n);
    cout << cnt << endl;
}


//Print N to 1 using recursion

void printN1(int cnt, int n){
    //Assume : cnt = n
    if (cnt <= 0){
        return;
    }
    cout << cnt << endl;
    printN1(cnt-1,n);
}

// Print N to 1 using backtracking cnt-1 NOT ALLOWED

void printN1back(int cnt, int n){
    //Assume : cnt = 1
    if (cnt > n){
        return;
    }
    printN1back(cnt+1,n);
    cout << cnt << endl;
}


// Sum of First N Numbers (Parameterised Way)

void Sump(int sum,int n){
    if(n<=0){
        cout << sum;
        return;
    }
    // sum = sum + n;
    Sump(sum+n,n-1);
}


// Sum of First N Numbers (Functional Way)

int Sumf(int n){
    if(n==0){
        return 0;
    }
    return (n+Sumf(n-1));
}


// Factorial of a given number (parametrised Way) : (parameter do the work) prints direct answer then returns {call stack filled}

void factorialp(int fact,int n){
    if (n<= 1){
        cout << fact << endl;
        return;
    }
    factorialp(fact*n,n-1);
}


// Factorial of a given number (functional Way) : (single val  given ) returns dependent answer itself {call stack filled}

int factorialf(int n){
    if(n == 0){
        return 1;
    }
    return (n * factorialf(n-1) );
}


//Functional Problems : Reverse an array

//2 pointer
void revArr(vector<int> &arr, int l, int r){

    // for( int i = 0;i < arr.size(); i++ ){
    //     cout << arr[i] << "Inbtw" << endl;
    // }

    if(l >= r){
        return;
    }
    swap(arr[l],arr[r]);
    revArr(arr,l+1,r-1);
}


//1 pointer
void revArrp(vector<int> &arr, int i){
    if(i >= arr.size()/2){
        return;
    }
    swap(arr[i],arr[arr.size()-1-i]);
    revArrp(arr,i+1);

}


//String is pallindrome or not

void stringPallindrone(int i, string word){
    if (i>= word.size()/2) {
        cout << "True";
        return;
    }
    if(word[i] != word[word.size()-1-i]){
        cout << "false";
        return;
    }
    stringPallindrone(i+1,word);
}


//Multiple Recursion Call : Fibonaci : give nth fibonaci number

int fibonaci(int n){
    if(n == 0){
        return 0;
    }
    if(n ==1){
        return 1;
    }
    return fibonaci(n-1)+fibonaci(n-2);
}



int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++  ){

        // vector<int> arr(4);
        // for (int i =0 ; i < 4; i++){
        //     cin >> arr[i]; 
        //     cout << "Before :" << " " << arr[i] << " " << endl;     
        // }


        // int cnt;
        // cin >> cnt;
        
        
        int n;
        cin >> n;



        // string word;
        // cin >> word;



        cout << fibonaci(n);

        // for (int i =0 ; i < 4; i++){
        //     cout << "After :" << arr[i] << endl;
        // }


    }

    return 0;
}