#include<iostream>
#include<fstream>
#include<string>
using namespace std;
fstream fp;
int count1=-1,count2=-1;
class lists
{
	public:
		string l1[100],l2[100];
		void merge()
			{
				int i1=0,i2=0;
				while(i1<count1&&i2<count2)
				{
				if(l1[i1]==l2[i2])
				{
					cout<<l1[i1++]<<endl;
						i2++;
				}
				else if(l1[i1]<l2[i2])
					cout<<l1[i1++]<<endl;
					
				else if(l1[i1]>l2[i2])
					cout<<l2[i2++]<<endl;
	
				}
					while(i2<count2)
					cout<<l2[i2++]<<endl;
					while(i1<count1)
					cout<<l1[i1++]<<endl;
			}	
}list;	
int main()
{	
	fp.open("st1.txt",ios::in);
	string name;
	while(fp)
	{
		getline(fp,name,'\n');
		list.l1[++count1]=name;
	}
	fp.close();	
	fp.open("st2.txt",ios::in);
	while(fp)
	{
		getline(fp,name,'\n');
		list.l2[++count2]=name;
	}
	fp.close();	
	list.merge();
	return 0;
}
