#include<iostream>
using namespace std;
class account{
	private:
		int no,amount;
	public:
		void getdata()
		{
			cout<<"Enter your Account No."<<endl;
			cin>>no;
			cout<<"Enter Amount.";
			cin>>amount;
		}
		void show()
		{
			cout<<no<<endl<<amount;
		}
};
int main()
{
	account a;
	a.getdata();
	a.show();
	return 0;
}
