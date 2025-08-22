/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a= *b;
    *b= temp;
}

int main(){
    int a,b;
    cout<<"Enter the Value of A: ";
    cin>>a;
    cout<<"Enter the Value of B: ";
    cin>>b;
    cout<<"Value before Swap: A= "<<a<<", B= "<<b;
    swap(&a,&b);
    cout <<"\nValue after Swap: A= " <<a<< ", B= " <<b;
    return 0;
}

/*Output
Enter the Value of A: 10
Enter the Value of B: 20
Value before Swap: A= 10, B= 20
Value after Swap: A= 20, B= 10
*/