#include<menuet/os.h>
#include "SysCall.h"

/*******************************************************************************
������� ����������� FPS
x,y - ���������� ������ FPS �� ����
���������� ����� � ����� ����� ������� ������������� �� 1 ����
*/

int time1=0;
int time2=0;
int fps1=0;
int timerend=0;
	
int Fps (long x, long y)//������� ����������� FPS
{
	int tr;
	
	time1 = SysCall(26,9);//���������� ����� ��������� ������� ������� ������� 

	if (timerend==0)
	{
 	   time2=time1; 
	   timerend=time1;	
	}
	
	tr = time1 - timerend;

	if ((time1 - time2) < 100)//���� ������ ����� 1 ������� 
	{				          //����������� ������� fps
		fps1++; 
	}
	else 
	{
		//������� ����� fps
		SysCall(13,(x<<16)+23,(y<<16)+7,0x00555555); //���������� ������
    	SysCall(47,4<<16,fps1,(x<<16)+y,0xfafafa);//������� � ���� ���������� �����
		fps1=0;
		time2=time1;
	}
	
	timerend=time1;
	
return tr;
}
//******************************************************************************
