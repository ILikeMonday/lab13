#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x=1,int y=1){
    if(x%y==0)return y;
    else if(x%y!=0){
      return gcd(y,x%y);
      
    }
    return 0;
}