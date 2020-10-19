#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<stdlib.h>
using namespace std;
fstream fp;
class student
{
	public:
		char regd[11],name[16],phone[11];
		void unpack()
		{
			fp.get(regd,11);	cout<<"Regd :"<<regd<<endl;
			fp.get(name,16);	cout<<"Name :"<<name<<endl;
			fp.get(phone,11);   cout<<"phone :"<<phone<<endl;
		}
}temp;
int main()
{
	int rrn,opt=-1;
	fp.open("st.txt",ios::in);
	cout<<"Enter the relative record number to display"<<endl;    cin>>rrn;
	if(rrn<1)
	{
    cout<<"Record does not exist"<<endl;
	exit(0);
	}
	fp.seekg((rrn-1)*35,ios::beg);
	temp.unpack();
	fp.close();
	return 0;               }
