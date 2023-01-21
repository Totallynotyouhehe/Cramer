#include <stdlib.h>
#include <iostream>
using namespace std;
int main() {
  float A, B, C, D, E, F, Det, Dx, Dy, x, y;
  Dy=0;
  Dx=0;
  Det=0;
  cout<<"Inserire i coefficenti della prima equazione"<<endl;
    cin>>A;
    cin>>B;
		cin>>C;
  cout<<"Inserire i coefficenti della seconda equazione"<<endl;
    cin>>D;
    cin>>E;
		cin>>F;
  Det=(A*E)-(B*D);
		Dx=(C*E)-(F*B);
		Dy=(A*F)-(D*C);
		x=Dx/Det;
		y=Dy/Det;
	cout<<"x"<<x<<endl;
	cout<<"y"<<y<<endl;
}