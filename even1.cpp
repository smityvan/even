#include<iostream>
#include<istream>
#include<fstream>
#include<string>
#include<string.h> 
using namespace std;
fstream fp;
class student
{
	public:
		string regd,name,phone;
		void unpack()
		{
			string hash;
			getline(fp,regd,'|');
			getline(fp,name,'|');
			getline(fp,phone,'|');
			getline(fp,hash,'#');    //Removal of hash 	
		}
		void display()
		{
			cout<<"Registration Number = "<<regd<<"\nname = "<<name<<"\nphone = "<<phone<<endl;
		}
}s[10];

int main()
{
	fp.open("students.txt",ios::in);
	int i=0;
	while(fp)
	s[i++].unpack();	
	int n=i;
	i=0;
	while(i<n-1)
	s[i++].display();	
	fp.close();		
	return 0;
}
