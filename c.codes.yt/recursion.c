//factorial

// #include<stdio.h>
// int factorial(int n){
//     if(n==1 || n==0) return 1;
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     printf(" enter a number:");
//     scanf("%d",&n);
//     int fact = factorial (n);
//     printf("%d",fact);
//     return 0;
// }


//print n to 1

// #include<stdio.h>
// void greeting (int n){
//     if(n==0) return ;
//     printf(" good morning\n");
//     greeting (n-1);
//     return ;
// }
// int main(){
//     int n; 
//     printf(" enter a number :");
//     scanf("%d",&n);
//     greeting (n);
//     return 0;
// }


// print 1 to n

// #include<stdio.h>
// void increasing (int x, int n){
//     if(x>n ) return ;     //base case
//     printf("%d\n",x);
//     increasing (x+1,n);
//     return ;
// }
// int main(){
//     int n;
//     printf(" enter a number :");
//     scanf("%d",&n);

//     increasing (1,n);
//     return 0;
// }


//increasing after call

// #include<stdio.h>
// void decreasing (int n){
// if(n==0) return ; // base case

// increasing(n-1); //call
// printf("%d\n",n); //code
// return ;
// }

// int main(){
//     int n;
//     printf(" enter a number :");
//     scanf("%d",&n);
//     increasing(n);
//     return 0;
// }


// print sum from 1 to n(paramrterised)

// #include<stdio.h>
// void sum(int n, int s){
//     if(n==0){
//         printf("%d",s);
//         return ;
//     }
//     sum(n-1,s+n);
//     return ;
// }
// int main(){
//     int n; 
//     printf(" enter a number :");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;
// }


//code------>>

// a power b

// #include<stdio.h>
// int power (int a, int b){
//     int x =1;
//     for(int i=1; i<=b; i++){
//         x=x*a;

//     }
//     return x ;
// }
// int main(){
// int a;
// printf(" enter a base :");
// scanf("%d",&a);

// int b;
// printf(" enter a base :");
// scanf("%d",&b);

// int p= power(a,b);
// printf("%d raised to the power %d is %d",a,b,p);
// return 0;
// }


//code------>>

#include<stdio.h>
int main(){
    int power(int a, int b);
    if(b==0) return 1;
    int recAns = a*power(a,b-1);
    return recAns;
}
int main(){
int a;
printf(" enter a base :");
scanf("%d",&a);

int b;
printf(" enter a power :");
scanf("%d",&b);

int p= power(a,b);
printf("%d raised to the power %d is %d",a,b,p);
return 0;
}
