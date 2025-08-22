/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

void swap(int x, int y){
    int temp=x;
    x=y;
    y=temp;
}

int main(){
    int x,y;
    cout<<"Enter the Value of X: ";
    cin>>x;
    cout<<"Enter the Value of Y: ";
    cin>>y;
    cout<<"Value before Swap: X= "<<x<<", Y= "<<y;
    swap(x,y);
    cout <<"\nValue after Swap: X= " <<x<< ", Y= " <<y;
    return 0;
}

/*Output
Enter the Value of X: 10
Enter the Value of Y: 20
Value before Swap: X= 10, Y= 20
Value after Swap: X= 10, Y= 20
*/