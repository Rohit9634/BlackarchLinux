#include<iostream>
#include<stdlib.h>

using namespace std;

struct data{
	int choice;
};

//Function brightness is used to change brightness
void brightness()
{
	cout << "Enter your password";
	system("sudo nano /sys/class/backlight/amdgpu_bl0/brightness");
}
//To see battery capacity
void bat_capa()
{
	system("cat /sys/class/power_supply/BAT1/capacity");
}

int main()
{
	int ch;
	while(1){
		cout << "Enter your choice";
		cout << "\n1.Battery cpacity" << endl << "2.Change brightness" << endl << "3.Exit" << endl;
		cin >> ch;
		switch(ch)
			{
				case 1:
					bat_capa();
				break;

				case 2:
					brightness();
				break;
				
				case 3:
					exit(0);
				default:
					cout << "Enter a valid choice";
			}
	}
return 0;
}	
