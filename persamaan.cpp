#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b,c;
	float d,x1,x2;
		cout << "=================================================\n";
		cout << "=======PROGRAM MENGHITUNG PERSAMMAN KUADRAT======\n";
		cout << "=================================================\n";
		ulangi:
		cout << "A= ";cin>>a;
		cout << "B= ";cin>>b;
		cout << "C= ";cin>>c;
		if (a!=0){
			d = (b*b)-4*a*c;
			float anu = sqrt(d);
			if (anu > 0){
				x1 =(-b-anu)/(2*a);
  				x2 =(-b+anu)/(2*a);
  				cout<<"Penyelesaian"<<endl;
  				cout<<"X1 = "<<x1<<endl;
  				cout<<"X2 = "<<x2<<endl;
  			}
  			else if(anu==0){
  				x1=-b/(2*a);
  				x2=x1;
  				cout<<"Penyelesaian"<<endl;
  				cout<<"X1 = "<<x1<<endl;
  				cout<<"X2 = "<<x2<<endl;
  			}
  			else{
  				cout<<"Persamaan kuadrat dengan akar imajiner\n";
  			}
		}
		else{
			cout << "Silahkan input lagi\n";
			goto ulangi;
		}
}