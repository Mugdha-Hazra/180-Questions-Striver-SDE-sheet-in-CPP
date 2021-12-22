/*
#include<iostream>
using namespace std;
*/

void solve(int *A, int *B){
      int c=*A; 
      *A=*A+*B;
      (*B<c? *B=c-*B:*B=*B-c);
}



/*
int main()  {
    int A, B;
    int *pA = &A, *pB = &B;
    cin>>A>>B;
    solve(pA, pB);
    cout<<A<<endl;
    cout<<B<<endl;
    return 0;
}
*/
