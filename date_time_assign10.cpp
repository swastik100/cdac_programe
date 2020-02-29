#include <iostream>
using namespace std;

class mydate
{
int DD=1;
int MM=1;
int YYYY=1990;
 
public: 
int getday()
{
	return DD;
}

int getmonth()
{
	return MM;

}

int getyear()
{
	return YYYY;
}


void setday(int day)       // setter function 
{
	if (day<0 && day>30)
	{
		cout<<"invald date is printed";
	}
	else
	{
		bool check = isvaliddate(day,MM,YYYY);
		DD=day;

	}
}

void setmonth(int month)
{
	if (month <0 && month >12)
	{
		cout<<"invalid month";
	}
	else
	{
		bool check = isvaliddate(DD,month,YYYY);
		MM=month;
	}

}

void setyear(int year)
{
	if (year<1990 && year>2020)
	{
		cout<<"invalid date printed";
	}
	else
	{
		bool check = isvaliddate(DD,MM,year);
		YYYY=year;
	}
}

bool isvaliddate(int date,int month,int year)
{
	return true;
}

void displaydate()
{
	cout<<"date is "<<DD <<"/"<< MM<<"/" <<YYYY<<"\n";

}

mydate& operator=(const mydate &b)
{
	DD=b.DD;
	MM=b.MM;
	YYYY=b.YYYY;

	return *this;
}

bool operator==(const mydate &date)
{
	if (YYYY==date.YYYY && MM==date.MM && DD==date.DD)
	{
		return true;
	}

	else 
		return false;
}

}; 
int main()
{

	mydate date,newdate,firstdate;
	//firstdate.setday(31);
	date.setday(22);
	date.setmonth(5);
	date.setyear(2019);
	date.displaydate();
	firstdate=date;
	firstdate.displaydate();
	bool check;
	check=(firstdate==date);
	cout<<check;



	return 0;
}