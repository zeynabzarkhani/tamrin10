#include<iostream>
using namespace std;
class date {
 
    private:
        int X1;
        int X2;
        int Y1;
        int Y2;
 		int a;
 		int b;
 		int c;
 		int d;
    public:
        void data(int x1, int x2,int y1, int y2) {
            X1  = x1;
            X2 = x2;
            Y1  = y1;
            Y2 = y2;
            a=X1*Y2;
            b=Y1*X2;
            c=Y2*X2;
            d=X1*Y1;
        }
        void Sum(){
        	cout<<"("<<X1<<"/"<<X2<<")"<<"+"<<"("<<Y1<<"/"<<Y2<<")"<<" ==>> ";
        	cout<<"("<<a<<"/"<<c<<")"<<"+"<<"("<<b<<"/"<<c<<")"<<" = "<<a+b<<"/"<<c<<endl;
		}
		void Sub(){
        	cout<<"("<<X1<<"/"<<X2<<")"<<"-"<<"("<<Y1<<"/"<<Y2<<")"<<" ==>> ";
        	cout<<"("<<a<<"/"<<c<<")"<<"-"<<"("<<b<<"/"<<c<<")"<<" = "<<a-b<<"/"<<c<<endl;
		}
		void Multi(){
        	cout<<"("<<X1<<"/"<<X2<<")"<<"*"<<"("<<Y1<<"/"<<Y2<<")"<<" ==>> ";
        	cout<<"("<<d<<"/"<<c<<")"<<endl;
		}
		void Divis(){
        	cout<<"("<<X1<<"/"<<X2<<")"<<"/"<<"("<<Y1<<"/"<<Y2<<")"<<" ==>> ";
        	cout<<"("<<X1<<"/"<<X2<<")"<<"*"<<"("<<Y2<<"/"<<Y1<<")"<<" ==> "<<a<<"/"<<b;;
		}
};
 
int main() {
 
    date date1;
 
    date1.data(4, 7, 2, 10);
 
    date1.Sum();
    date1.Sub();
    date1.Multi();
    date1.Divis();
}