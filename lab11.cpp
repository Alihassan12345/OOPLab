#include <iostream>
#include <conio.h>

using namespace std;

class bandclass
{
	private:
		string name;
	public:
		string getname();
		void setname(string name);
		int count ;
	//virtual getcount(int cnt)=0;
};

string bandclass::getname()
{
	return this->name;
}

void bandclass::setname(string name)
{
	this->name = name;
}

class metalband:public bandclass
{
	public:
		int pyrotech ;
		void addpyro(int a);
		void removepyro(int a);
		metalband();		
};
metalband::metalband()
{
	setname("Metal Band");
	pyrotech=1;
	count=4;
}
void metalband::addpyro(int a)
{
	pyrotech+=a;
}
void metalband::removepyro(int a)
{
	pyrotech-=a;
}
class sympband:public bandclass
{
	public:
		int conductor ; 
		sympband();	
		void addcon();
		void removecon();	
};
sympband::sympband()
{
	setname("Symphony Band");
	conductor =1;
	count=4;
}
void sympband::addcon()
{
	conductor++;
}
void sympband::removecon()
{
	conductor--;
}


class marchingband:public bandclass
{
	public:
		marchingband();		
};
marchingband::marchingband()
{
	setname("Marching Band");
	count=4;
}



class jazzband:public bandclass
{
	public:
		jazzband();		
};
jazzband::jazzband()
{
	setname("Jazz Band");
	count=4;
}



int main(int argc, char** argv) 
{
	
	metalband a;
	char b;
	int pt;
	cout<<"\t\t........"<<a.getname()<<"......\n";
	cout<<"Want to add or remove  a pyrotechs in band\n Press 1 for adding\n 2 for removing\n 3 for nothing\n";
	b=getch();
	if(b=='1')
	{
		cout<<"How many pyrotechs you want to add?\n";
		cin>>pt;
		a.addpyro(pt);	
	}
	if(b=='2')
	{
		cout<<"How many pyrotechs you want to remove?\n";
		cin>>pt;
		a.removepyro(pt);
	}
	
	cout<<"Total band Members="<<a.count<<"\nTotal Pyrotechs="<<a.pyrotech<<endl;
	
	marchingband c;
	cout<<"\t\t........"<<c.getname()<<"......\n";
	cout<<"This band marches\n";
	cout<<"Total band Members="<<c.count<<endl;
	
	sympband d;
	cout<<"\t\t........"<<d.getname()<<"......\n";
	cout<<"Want to add or remove  a conductor in band\n Press 1 for adding\n 2 for removing\n 3 for nothing\n";
	b=getch();
	if(b=='1')
	{
		
		d.addcon();	
	}
	if(b=='2')
	{
		d.removecon();
	}
	cout<<"Total band Members="<<d.count<<"\nTotal Pyrotechs="<<d.conductor<<endl;
}
