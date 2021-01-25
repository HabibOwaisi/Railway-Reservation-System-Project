#include <iostream>
#include <string.h>
#include <conio.h>
#include <Windows.h>
using namespace std;
class Account
{
	protected :
	double cnic=33105,price=1,tickets=0;
	
	string na;
	string name ="Unknown"; string city="Lahore";
	char choice;
	string city_1="Sahiwal";
	public :
		void input ()
		{
			
			cout<<"\tPassenger Name : ";
			cin>>na;
			cin>>name;
			
			cout<<"\tPassenger CNIC : ";
			cin>>cnic;
		}
		void charges ()
		{
			cout<<"\t ~_~_~_~ The price of the tickets are listed below ~_~_~_~ \n";
			cout<<"\t  1) Lahore = 300 \t2) Sahiwal = 400 \n\t  3) Multan = 550 \t4) Faisalabad = 250\n";
		}
		void purchase ()
		{
			cout<<"\n\n  >=======< Our Train Services >=======<\n";
			cout<<"  Sahiwal | Lahore | Multan | Faisalabad\n";
			cout<<"\n\t ==> Please Choose the City \n > From : ";
			cin>>city;
			cout<<" > To   : ";
			cin>>city_1;
			cout<<"\nHow many tickets do u want to purchase : ";
			cin>>tickets;
			charges ();
			if (city_1 == "Sahiwal" ||  city_1 == "Multan" ||  city_1 == "Lahore" || city_1 == "Faisalabad" )
			{
				if (city_1 == "Sahiwal")
				{
					price = 400 * tickets;
				}
				else if (city_1 == "Multan")
				{
					price = 550 * tickets;
				}
				else if (city_1 == "Lahore")
				{
					price = 300 * tickets;
				}
				else if (city_1 == "Faisalabad")
				{
					price = 250 * tickets;
				}
			}
			else
			{
				cout<<"Sorry ! We haven`t any kind of service for this city \n";
			}
		}
};
class Timing : public Account
{
	int d,persons=0,charges1=0;
	public :
		void show_times ()
		{
			cout<<"\n==> You Have Selected:"<<city_1<<endl;
			cout<<"\n <===> There are 4 timing of Trains for "<<city_1<<" <===>\n";
			cout<<" 1) First Departure Time for "<<city_1<<" at 9am.\n";
			cout<<"\t 2) Second Departure Time for "<<city_1<<" at 12pm.\n";
			cout<<" 3) Third Departure Time for "<<city_1<<" at 3pm.\n";
			cout<<"\t 4) Forth Departure Time for "<<city_1<<" at 6pm.\n";
			cin>>d;
		}
		void total_price ()
		{
			cout<<"\n Your Total bill : Rs. "<<price<<endl;
		}
		void seat_number ()
		{
			cout<<"\n==> Welcome in Our Train From "<<city<<" To "<<city_1<<endl;
			cout<<"\n\t==> May you have safe journey \n";
			for (int i=0 ; i < tickets ; i++)
			{
				int *ptr,arr[100];
				ptr = arr;
				cout<<"YOur seat number is : "<<ptr + i<<endl;	
			}	
		}
		void mess ()
		{
			cout<<"Do u want Mess Service ( Y / N ) : ";
			cin>>choice;
			if (choice == 'y' || choice == 'Y')
			{
				cout<<"\nNote ! Mess For One person is Rs. 150 \n\n";
				cout<<"For How many Persons Do u want Mess : ";
				cin>>persons;
				charges1 = 150*persons;
				cout<<"Your Mess charges : "<<charges1<<endl;
			}
			else
			{
				cout<<"\n --> You choice no mess \n";
			}
		}
		void final_bill ()
		{
			cout<<name<<" \t"<<cnic<<"\t\t"<<city<<" to "<<city_1<<"\t\t "<<price+charges1<<endl;
		}
		void welcome ()
		{
				cout<<"\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"; 
				cout<<"\t........ WELCOME TO RAILWAY RESERVATION SYSTEM .......\n"; 
				cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		}
};
int main ()
{
	system("color 4f");
	string id,pass;
	int validate=0;
    char ch;
    for (int j= 4 ; j > 0; j--)
    {
    	system("cls");
    cout<<"\n\t\t\t      (attempt remaining "<<j<<" )\n";
    cout<<"\n\n\n\n\t\t\t Id : ";
	cin>>id;
	cout<<"\t\t\t Password : ";
	ch=getch();
	while(ch!=13)
	{
      pass.push_back(ch);   // In char user can only enter one character
      cout << '*';
      ch = getch();
   	}
	if(id=="habib" && pass == "54321") // checking if id and password matches 
	{
		
		Timing a,a1;
	char choice;
	system ("color 2f");
	
	char b = 219;
	cout<<"\n\n\n\n\t\t\t\tPleasr wait ...\n\n\t\t\t\t LOADING ";
		for(double long j=0; j<20 ; j++)
		{
			cout<<b;
			Sleep (80);
		}
	cout<<endl;
	system("cls");
	system ("color 0e");
	a.welcome();
	int options;
	retry :
	cout<<"\n ==> 1) Create New 2) Modify the Details 3) Cancel The Ticket \n\n\t ==>4) Display Details 0) Exit \n ==> Enter Your Choice : ";
	cin>>options;
	
	if (options == 1)
	{	
		validate = 1;	
		again :
		system("cls");
		a.welcome();
		a.input();
		a.purchase();
		system ("color e0");
		system("cls");
		a.charges();
		a.show_times();
		a.total_price();
		system ("color f0");
		system("cls");
		a.seat_number();
		system ("color 0e");
		a.total_price();
		a.mess();
	}
	else if (options == 2)
	{
		if(validate == 1)
		{
			system("cls");
			cout<<" ==> Enter the Details again to Modify \n\n";
			goto again ;
		}
		else
		{
			cout<<"\n No Record Found ! Kindly Enter Data First \n";
		}
	}
		
	else if ( options == 3)
	{
		if(validate == 1)
		{
			system ("color e0");
			cout<<"Your tickets are cancelled \n     = = > Thanks for using our service \n";
		}
		else
		{
			cout<<"\n No Reservation Found ! Kindly Reserve Seats First \n";
		}
		
	}
	else if (options == 4)
	{
		if(validate == 1)
		{	
			system ("color f0");
			cout<<"\t\t >==< ~~~~~~~~~~ Your Final Bill ~~~~~~~~~~~~ >==<\n";
			cout<<"\n\n   NAME\t\tCNIC\t\tTRAVEL FROM / TO\t\tTOTAL\n   ";
			a.final_bill();
		}
		else
		{
			cout<<"\n No Reservation Found ! Kindly Reserve Seats First \n";
		}	
	}
	else if (options == 0)
	{
		cout<<".... Thanks for using our Services ....\n";
		exit (0);
	}
	
	cout<<"\n\n >==> Do u want to Continue ( Y / N ) : ";
	cin>>choice;
	if (choice == 'y' || choice == 'Y')
	{
		system("cls");
		a.welcome();
		goto retry;
	}
	else
	{
		
		cout<<"\n\n >==> Do u want to Show bill ( Y / N ) : ";
		cin>>choice;
		if (choice == 'y' || choice == 'Y')
		{
			system("cls");
			cout<<"\t\t >==< ~~~~~~~~~~ Your Final Bill ~~~~~~~~~~~~ >==<\n";
			cout<<"\n\n   NAME\t\tCNIC\t\tTRAVEL FROM / TO\t\tTOTAL\n   ";
			a.final_bill();
		}
		cout<<"\n.... Thanks for using our Services ....\n";
		exit(0);
	}
	}	
	}
	system ("pause");
}
