#include <conio.h>
#include <windows.h>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string title = "title WMKeyboard by Groiznyi - Setting: TimePlay = 100, Color = 1";
	int dwDuration = 100;
	int Color = 1;
	int key;

	while (true) 
	{
		system(title.c_str());
		key = _getch();

		//1 Section
		if (key == 113) //q
			Beep(200, dwDuration);
		else if (key == 97) //a
			Beep(150, dwDuration);
		else if (key == 122) //z
			Beep(100, dwDuration);

		//2 Section
		else if (key == 119) //w
			Beep(350, dwDuration);
		else if (key == 115) //s
			Beep(300, dwDuration);
		else if (key == 120) //x
			Beep(250, dwDuration);

		//3 Section
		else if (key == 101) //e
			Beep(500, dwDuration);
		else if (key == 100) //d
			Beep(450, dwDuration);
		else if (key == 99) //c
			Beep(400, dwDuration);

		//4 Section
		else if (key == 114) //r
			Beep(650, dwDuration);
		else if (key == 102) //f
			Beep(600, dwDuration);
		else if (key == 118) //v
			Beep(550, dwDuration);

		//5 Section
		else if (key == 116) //t
			Beep(800, dwDuration);
		else if (key == 103) //g
			Beep(750, dwDuration);
		else if (key == 98) //b
			Beep(700, dwDuration);

		//6 Section
		else if (key == 121) //y
			Beep(950, dwDuration);
		else if (key == 104) //h
			Beep(900, dwDuration);
		else if (key == 110) //n
			Beep(850, dwDuration);

		//7 Section
		else if (key == 117) //u
			Beep(1100, dwDuration);
		else if (key == 106) //j
			Beep(1050, dwDuration);
		else if (key == 109) //m
			Beep(1000, dwDuration);

		//8 Section(Setting)
		else if (key == 45) //dwDuration(-)
		{
			if (dwDuration < 100)
				MessageBoxA(NULL, "Timeplay is out of range!!!", "MKeyboard Error", 16);
			else {
				dwDuration = dwDuration - 50;
				title = "title WMKeyboard by Groiznyi - Setting: TimePlay = " + to_string(dwDuration) + ", Color = " + to_string(Color);
			}
		}

		else if (key == 43) //dwDuration(+)
		{
			if (dwDuration == 10000)
				MessageBoxA(NULL, "Timeplay is out of range!!!", "MKeyboard Error", 16);
			else {
				dwDuration = dwDuration + 50;
				title = "title WMKeyboard by Groiznyi - Setting: TimePlay = " + to_string(dwDuration) + ", Color = " + to_string(Color);
			}
		}

		else if (key == 49) //Color - 1
		{
			Color = 1;
			title = "title WMKeyboard by Groiznyi - Setting: TimePlay = " + to_string(dwDuration) + ", Color = " + to_string(Color);
			system("color 7");}

		else if (key == 50) //Color - 2
		{
			Color = 2;
			title = "title WMKeyboard by Groiznyi - Setting: TimePlay = " + to_string(dwDuration) + ", Color = " + to_string(Color);
			system("color A7");
		}

		else if (key == 51) //Color - 3
		{
			Color = 3;
			title = "title WMKeyboard by Groiznyi - Setting: TimePlay = " + to_string(dwDuration) + ", Color = " + to_string(Color);
			system("color C7");}

		else if (key == 52) //Color - 4
		{
			Color = 4;
			title = "title WMKeyboard by Groiznyi - Setting: TimePlay = " + to_string(dwDuration) + ", Color = " + to_string(Color);
			system("color 97");}

		else if (key == 53) //Color - 5
		{
			Color = 5;
			title = "title WMKeyboard by Groiznyi - Setting: TimePlay = " + to_string(dwDuration) + ", Color = " + to_string(Color);
			system("color DC");}

		else if (key == 54) //Color - 6
		{
			Color = 6;
			title = "title WMKeyboard by Groiznyi - Setting: TimePlay = " + to_string(dwDuration) + ", Color = " + to_string(Color);
			system("color BC");}

	}
}
