#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count = 0; 
    int Num = n;
    while(Num >0){
        int lDigit = Num%10;
        count = count +1;
        Num = Num/10;
    }
    return count;
}


int revNum(int n){
    int Num = n;
    int revNum = 0;
    while(Num >0){
        int lDigit = Num%10;
        revNum = (revNum*10 ) + lDigit;
        Num = Num/10;
    }
    return revNum;
}

bool palindrome(int n){
    // revNum == Num -> palindrome
    int Num = n;
    int revNum = 0;
    while(Num >0){
        int lDigit = Num%10;
        revNum = (revNum*10) + lDigit;
        Num = Num/10;
    }
    if(revNum == n){
        return true;
    } else {
        return false;
    }
} 

string armstrong(int n ){
    // Sum of cube of digits == n
    int Num = n;
    int Sum = 0;
    while(Num >0){
        int lDigit = Num%10;
        Sum = Sum + (lDigit*lDigit*lDigit);
        Num = Num/10;
    }
    if(Sum == n){
        return "true";
    } else {
        return "false";
    }
}

void divisor(int n){
    int Num = n;
    for (int i =1;i<= Num;i++){
        if(Num%i==0){
            cout << i << " Divisor" << endl;
        }
    }
}

void divisors(int n){
    int Num = n;
    vector<int> ls ;
    // Understood importance of sqrt(Num)
    for (int i = 1; i <= sqrt(Num) ; i++ ){
        if(Num%i == 0){
           ls.push_back(i); 
            if (i != (Num/i)){
                ls.push_back(Num/i);
            } 
        } 
    }
    sort(ls.begin(),ls.end());
    //c++ loop shorthand
    for (auto i:ls){
        cout << i << " ";
    }
    cout << endl;

}


bool primeNum(int n){
    int Num = n;
    int count = 0;
    for (int i = 1 ; i <= sqrt(Num) ; i++){
        if(Num%i == 0 && Num%(Num/i)==0){
            count = count +2;
        }
    }
    if(count == 2){
        return true;
    } else {
        return false;
    }
}

int gcd(int n1, int n2){
    for (int i =min(n1,n2); i >= 0 ;i--){
        if(n1%i==0 && n2%i==0){
            return i;
            break;
        }
    }
    return 0;
}

int euclidean(int n1,int n2){
    // Euclidean : gcd(a,b) =  gcd(a-b,b) (a>b) until one is 0
    while ( n1>0 && n2>0){
        if (n1>n2){
            n1 = n1%n2;
        } else {
            n2 = n2%n1;
        }
    }

    if (n1 == 0){
        return n2;
    } else {
        return n1;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n1;
        int n2;
        cin >> n1;
        cin >> n2;
        // primeNum(n);
        cout << euclidean(n1,n2) << endl;
    }

    return 0;
}
