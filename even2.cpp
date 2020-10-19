#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<stdlib.h>
using namespace std;
fstream fp;
void addspaces(char a[],int n)
{
	if(strlen(a)>n)
			{
			cout<<"length of regd num exceeded";
			exit(0);
			}
			else
			for(int i=strlen(a);i<n;i++)
			a[i]=' ';
}
class student
{
	public:
		char regd[11],name[16],phone[11];	
		void pack(){
	        string packer;	
   			cout<<"Enter registration number : ";
			cin>>regd;
			addspaces(regd,10);
			packer+=regd;	
			cout<<"Enter name : ";
			cin>>name;
			addspaces(name,15);		
			packer+=name;			
			cout<<"Enter phone : ";
			cin>>phone;
			addspaces(phone,10);
			packer+=phone;			
			fp<<packer;
        }
}temp;

int main()
{
	int n,i=0;
	cout<<"Enter the number of records to insert : ";
	cin>>n;
	fp.open("students2.txt",ios::out);
	while(i<n)
	{
		temp.pack();
		i++;
	}
	fp.close();
	return 0;
}
