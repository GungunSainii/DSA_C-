#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void print2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void print4(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void print5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void print6(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= ((2 * i) - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void print7(int n)
{
    for (int i = n; i >= 1; i--)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= ((2 * i) - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void print8(int n)
{
    for (int i = n; i < n + 1; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= ((2 * i) - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = n; i >= 1; i--)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= ((2 * i) - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    // print6(n);
    // print7(n);
}

void print9(int n)
{
    for (int i = 0; i <= (n / 2); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = (n / 2); i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void print09(int n)
{
    for (int i = 1; i < 2 * n; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void print10(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << "\n";
    }
}

void print11(int n){
    for (int i = 1 ; i <= n ; i++){
        //number 
        for (int j = 1 ; j <= i ; j++){
            cout << i;
        }
        //spaces
        for (int j = 1 ; j <= (2*n) - (2*i) ; j++){
            cout << " ";
        }
        //numbers
        for (int j = 1 ; j <= i ; j++){
            cout << i;
        }
        cout << endl;
    }
}

void print12(int n){
    int counter = 1;
    for (int i = 0; i < n ; i++){
        for (int j = 0 ; j <= i ; j++){
            cout << counter << " " ;
            counter += 1;
        }
        cout << endl;
    }
}

void print13(int n){
    for (int i = 0; i < n ; i++){
        char counter = 'A';
        for (int j = 0; j <= i; j++){
            cout << counter << " ";
            counter += 1;

        }
        cout << endl;
    }
}

void print013(int n){
    for ( int i = 0; i < n ; i++){
        for (char ch = 'A' ; ch <= 'A' + i ; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print14(int n){
    for ( int i = n; i > 0 ; i--){
        for (char ch = 'A' ; ch < 'A' + i ; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print15(int n){
    char ch = 'A';
    for ( int i = 0 ; i < n ; i++){
        for (int j = 0 ; j <= i ; j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void print16(int n){
    for (int i = 1; i <= n ; i++){
        //spaces
        for (int j = 1; j <= n - i ; j++){
            cout << " ";
        }
        //alphabets
        char ch = 'A';
        int breakpoint = i ;
        for (int j = 1; j <= (2*i -1);j++){
            cout << ch ;
            if (j >= breakpoint){
                ch--;  
            } else {   
                ch++;
            }
            
        }
        cout << endl;
    }
}

void print17(int n){
    for(int i = 0 ; i <n ; i++){
        
        for(char ch = ('E' - i ); ch <= 'E'; ch ++){
            cout << ch;
        }
        cout << endl;
    }
}

void print19(int n){
    int space = 0;
    for (int i = 0; i < n; i++){
        
        //star
        for(int j = 0 ; j < n-i ; j++){
            cout << "*";
        }
        //space
        for(int j = 0 ; j < space ; j++){
            cout << " ";
        }
        //star
        for(int j = 0 ; j < n-i ; j++){
            cout << "*";
        }
        space = space+2;
        cout << endl;
    }
    int Dspace = space - 2;
    for (int i = 0; i < n; i++){
        
        //star
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }
        //space
        for(int j = 0 ; j < Dspace ; j++){
            cout << " ";
        }
        //star
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }
        Dspace = Dspace-2;
        cout << endl;
    }
    
}

void print20(int n){
    int space = 2*n ;
    for(int i = 1 ; i <= 2*n ; i++){
        int star;
        if(i > n ){
            star = (2*n) - i ;
        } else {
            star = i;
        }

        if(i > n ){
            space = space + 2;
        } else {
            space = space - 2;
        }

        //star
        for(int i = 1; i <= star ; i++){
            cout << "*";
        }
        //space
        for(int i = 1; i <= space ; i++){
            cout << " ";
        }
        //star
        for(int i = 1; i <= star ; i++){
            cout << "*";
        }
        cout << endl;

    }
}

void print21(int n){
    for (int i = 0 ; i < n; i ++){
        for (int j = 0 ; j < n; j ++){
            if (i==0 || i == n-1 || j == 0 || j == n-1 ){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void print22(int n){
    for (int i = 0; i < 2*n -1 ; i++){
        for(int j = 0; j< 2*n -1; j++){
            //min distances according to the index
            int top = i;
            int left = j;
            int bottom = ((2*n - 2)-i);
            int right = ((2*n -2) - j);

            cout << (n - min(min(top , bottom), min(left , right)));
        }
        cout<< endl;

    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print22(n);
    }

    return 0;
}
