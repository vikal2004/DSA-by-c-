#include<bits/stdc++.h>
using namespace std;
#include <math.h>
int isPalindrom(int n){
    int result=0;
    int temp=n;
  while(n>0){
    int lastdigit=n%10;
     result=(result*10)+lastdigit;
     n=n/10;
    }
   if(temp==result){
    return true;
   }else{
    return false;
   }
}

//palindrome number
int isPrime(int n){ 
if(n==1)
 return false;
 for(int i=2;i<sqrt(n);i++){
 if(n%i==0){
    return false;
 }
 }
 return true;
}

void findBetweenRange(int x, int y){
for(int i=x;i<=y;i++){
if(isPrime(i)){
cout<<i<<endl;
}
}
}

//check a number is armstrong or not
// int main(){
// int number=173;
// int temp=number;
// int ans=0;
// while(number>0){
// int lastdigit=number%10;
//  ans=ans+(lastdigit*lastdigit*lastdigit);
//  number=number/10;
// }
// if(temp==ans){
//    cout<<"Prime number";
// }
// else{
//    cout<<"not a prime number";
// }
// return 0;
// }

//Check whether a number is a perfect number or not
bool isPerfect(int n){
 
    int sum=0;
    for(int i = 1; i*i <= n; i++){
        if(n%i==0)
            if(i*i==n || i==1)
                sum =sum + i;
            else sum = sum+ i + n/i;
    }
    if(sum==n)
        return true;
    else return false;
}


//check whether a given number is even or odd
 int checkEvenorOdd(int n){
   if((n & 1)==0)
   return 0;
   else
   return 1;
 }
 

int sumofNatural(int n){
  int sum=0;
  for(int i=1;i<=n;i++){
    sum=sum+i;
  }
  return sum;
}
 
 //parametrized way of finding first N natural number
int sumofNum(int i, int sum){
  if(i<1){
   return sum;
  }
  sumofNum(i-1, sum+i);
}
//functional way of finding sum of first N natural number 
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

//by using for loop
int findapseries(int a, int d, int n){
 int sum=0;
 for(int i=1;i<=n;i++){
    sum+=a;
    a+=d;
 }
 cout<<sum;
}


int gpseries(int a, int r, int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=a;
        a*=r;
    }
    cout<<sum;
}

// check a year is leap year or not 

// int main(){
// int year =1566;
// if(year%4==0 && year%100 !=0  || year%400==0 ){
//     cout<<"leap year";
// }
// else{
//     cout<<"not a leap year";
// }
// }

int main(){
int n=5;
int first=0;
int second =1;
for(int i=0;i<n;i++){
int third=first+second;

}
}