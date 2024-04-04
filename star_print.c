//solid rectangle
/*#include<stdio.h>
int main(){
    int c;
    printf("Enter number of column: ");
    scanf("%d",&c);
    int r;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int i=1;i<=c;i++){
            printf("*");
        }printf("\n");
    }
}*/
//Solid Square take input from user and number rows and number of column are same
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            printf("*");
        }printf("\n");
    }
    return 0;
}*/

//print number square
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
     for(int i=1;i<=n;i++) /*number of line/row shold be in i*/
    /*{
      /*  for(int j=1;j<=n;j++)/*it is resonsible for printing 1234*///{ /*numebr of column should be in j */
         /*  printf("%d",j);
        }printf("\n");
    }
    return 0;
}*/
//print star triangle
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}*/
//ulta triangle printing
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }printf("\n");
    }return 0;
}*/
//number triangle printing
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}*/
//ulta number printing
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}*/
//odd number square
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   int a=1;
        for(int j=1;j<=n;j++){
            printf("%d",a);
            a=a+2;
        }printf("\n");
    }
    return 0;
}*/
//odd number triangle
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   int a=1;
        for(int j=1;j<=i;j++){
            printf("%d",a);
            a=a+2;
        }printf("\n");
    }
    return 0;
}*/
//print abcd square 
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines/rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }printf("\n");
    }return 0;
}*/

//print abcd triangle
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines/rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }printf("\n");
    }return 0;
}*/

//print star plus pattern
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter line number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n/2+1 || i==n/2+1){
                printf("*");
            }else{
                printf("#");
            }
        }printf("\n");
    }
    return 0;
}*/
//print hollow rectangle
//ye nhi ho paya hai
/*#include<stdio.h>

int main(){
    int n, c;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= c; j++){
            if(j == c/2 + 1 || i == n/2 + 1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}*/
//print cross star
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j||i+j==n+1){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }return 0;
}*/
//print floyd triangle
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter numebr: ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++){
        printf("%d ",a);
        a++;
    }printf(" \n");
}
    return 0;
}*/
//print a number triangle 
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter numebr: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            printf("%d",a);
            a++;
        }printf("\n");
    }return 0;
}*/

//0&1 triangle
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter numebr: ");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        if(i%2!=0)a=1;
        else a=0;
        for(int j=1;j<=i;j++){
            printf("%d",a);
            if(a==0)a=1;
            else a=1;
        }printf("\n");
    }
    return 0;
}*/
//Another way of doing
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0 ){
                printf("1");
            }else printf("0");
        }printf("\n");
    }
    return 0;
}*/
//print mast triangle
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter line: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ //for lines
        for(int j=1;j<=n-i;j++){  //for spaces
            printf(" ");
        }for(int k=1;k<=i;k++){
            printf("*");
        }printf("\n");
    }return 0;
}*/
//print the same table in alphabet
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter line: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ //for lines
    int a=1;
        for(int j=1;j<=n-i;j++){  //for spaces
            printf(" ");
        }for(int k=1;k<=i;k++){
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }printf("\n");
    }return 0;
}*/

//print rohmbus
//print +2star at every triangle
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }return 0;
}*/
//print pyramid
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){  //for spaces
            printf(" ");}
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }return 0;
} */
//Another of doing

/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int nst=1;
    int nsp=n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){  //for spaces
            printf(" ");}
            nsp--;
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }return 0;
}*/



//print the same thing in number;
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int nst=1;
    int nsp=n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){  //for spaces
            printf(" ");}
            nsp--;
        for(int j=1;j<=nst;j++){
            printf("%d",j);
        }
        nst=nst+2;
        printf("\n");
    }return 0;
}*/
//print same with alphabet
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int k=1;k<=nsp;k++){  //for spaces
            printf(" ");}
            nsp--;
        for(int j=1;j<=nst;j++){
            int d=a+64;
            char ch=(char)d;
                printf("%c",ch);
                a++;
        }
        nst=nst+2;
        printf("\n");
    }return 0;
}*/
//print number pyramid must
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int q=1;q<=nsp;q++){ //spaces ke liye ek loop
            printf(" ");
        }nsp --;
        for(int j=1;j<=i;j++){ //number triangle
            printf("%d",j);
        }for(int k=1;k<=i-1;k++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }return 0;
}*/

//do same with alphabet
//print triangle
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    int ml=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){//spaces
        printf(" ");
    }for(int k=1;k<=nst;k++) {//stars
        printf("*");
    }
    if(i<ml){
        nsp--;
        nst+=2;//nst=nst+2;
    }else{
    nsp++;
    nst-=2; //nst=nst-2;
}
printf("\n");
}
return 0;
}*/

//somedifferent mast triangle  pattern for practice
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter line: ");
    scanf("%d",&n);
    int nsp=0;
    int nst=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }nsp++;
        nst--;
        printf("\n");
    }
    return 0;
}*/
//star pyramid mast
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for(int i=1;i<=2*n+1;i++){//first star line
        printf("*");
    }printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){ //star
                printf("*");
        }for(int k=1;k<=nsp;k++){ //spaces
                printf(" ");
        }for(int q=1;q<=nst;q++){ //star
                printf("*");
        }nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}*/

//number table
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for(int i=1;i<=2*n+1;i++){
        printf("%d",i);
    }printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){ //star
                printf("%d",a);
                a++;
        }for(int k=1;k<=nsp;k++){ //spaces
                printf(" ");
                a++;
        }for(int q=1;q<=nst;q++){ //star
                printf("%d",a);
                a++;
        }nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}*/

//print the same like above but in alphabet
/*print this pattern
1234321
123 321
12   21
1     1 
*/
/*#include<stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    printf("Enter number num1: ");
    scanf("%d",&num1);
    printf("Enter number num2: ");
    scanf("%d",&num2);
    printf("Enter number num3: ");
    scanf("%d",&num3);
    if(num1>num2&&num1>num3){
        printf("Num1 is greater than both");
    }else if(num2>num1&&num2>num3){
        printf("Num2 is greater than both");
    }else{
        printf("Num3 is greater than both");
    }return 0;
} */

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     int count=0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     printf("total count number:%d",count);
//     return 0;
// }

/*#include <stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d\n",i);
    }return 0;
}*/