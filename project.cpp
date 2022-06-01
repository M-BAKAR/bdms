#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
struct donor
  {
	string name;
	string blood;
	string phone;
	
  };
void donor_record(donor x[50])
    {
	int person;
	ofstream add("bds_donor.txt",ios::app);
	cout<<"Enter num of persons you wanna add :";
	cin>>person;
	for(int i=0;i<person;i++)
	{	
	cin.ignore();
	cout<<" Enter Donor name :";
	getline(cin,x[i].name);
	add<<x[i].name<<endl;
	cout<<" Enter Donor's Blood Group :";
	getline(cin,x[i].blood);
		add<<x[i].blood<<endl;
	cout<<" Enter Donor's Phone Number :";
	getline(cin,x[i].phone);
	add<<x[i].phone<<endl;

	
   }
      add.close();
   }
    void searchname( string n )
   {
   	int i=0;
   	donor x[50];
   		ifstream add("bds_donor.txt",ios::app);
	cin.ignore();
	cout<<" Enter the name of donor you wanna get record :";
	getline(cin,n);

		while(add)
		{
			getline(add,x[i].name);
			getline(add,x[i].blood);
			getline(add,x[i].phone);
			i++;
		};
		int g=0;
		for(int g=0;g<i;g++)
		{
		
			if(x[g].name ==n )
			{
				cout<<x[g].name<<endl;
				cout<<x[g].blood<<endl;
				cout<<x[g].phone<<endl;
			
				break;
			}
			
		}
		if(i==g)
		{
			cout<<" No name "<<endl;
		}
	}
void searchblood(string a)
        {
    int i=0;
	donor x[50];
	ifstream add("bds_donor.txt",ios::app);
	cin.ignore();
	cout<<" Enter the blood of donor you wanna get record :";
	getline(cin,a);
	
		while(add)
		{
			getline(add,x[i].name);
			getline(add,x[i].blood);
			getline(add,x[i].phone);
			i++;
		};
		int e=0;
		for( e=0;e<i;e++)
		{	
		if(x[e].blood == a)
			{
				cout<<x[e].name<<" blood is "<<x[e].blood<<endl;	
		}
		}
		
	    
	}
	 
int main()
    {
	donor d[50];
	donor d1[50];
string n;
	int i=0 , j=0 , k=0 , l=0 , m = 0  , o =0;
	while(true)
	{
	
	cout<<setw(70)<<" WELCOME TO THE BLOOD GROUP MANAGEMENT SYSYTEM "<<endl;
	cout<<setw(35)<<" Enter 1 to Add Donor Record "<<endl;
	cout<<setw(35)<<" Enter 2 to Search the Donor Record based on name "<<endl;
	cout<<setw(35)<<" Enter 3 to Search a list of Donors based on Blood Group "<<endl;
	cout<<setw(35)<<" Enter 4 to Search Update the Donor’s Record after successful donation "<<endl;
	cout<<setw(35)<<" Enter 5 to Remove Donor's Record "<<endl;
    cout<<setw(35)<<"Enter the num : ";
    int num;
    cin>>num;
    cout<<endl;
	if(num==1)
	{
		donor_record(d);
		cout<<endl;
		}
	if(num == 2)
	{
	ifstream add("bds_donor.txt",ios::app);
	 searchname(n);
		cout<<endl;
	}
	if(num==3)
	{
		ifstream add("bds_donor.txt",ios::app);
		searchblood(n);
		cout<<endl;
	}


}
}
	
	
	
	
	

