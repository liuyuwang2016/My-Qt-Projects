#include <windows.h>
#include <iostream>
//#include <Source.h>
#include "dllmain.h"
//#include <afxwin.h>
using namespace std;
//using namespace Mt232;
//extern "C" _declspec(dllimport) void MtTestDebby(bool* DBLflag);
//typedef int (*MtTestDebbyFunc)(int a, int b);
//typedef long (*MyMtConnect)(char* ptr);
//typedef long (*MyMtClose)(void);
//typedef long(*MyMtReflash)(struct MotionData *m);
//
//struct MotionData {
//	double x, y, z, u, v, w;
//	double laser;
//	long   out, status, length, in;
//	long   flowNumber;
//	long   wdt;
//	long   cmdid;
//};
//__declspec(dllexport)  long MtConnect(long ptr);
#using <System.dll>
using namespace System;
using namespace System::IO::Ports;
using namespace System::ComponentModel;
bool MtHome(void);

void MtReflashWait(void);

Rs232MotionData* md = new struct Rs232MotionData;

void MtReflashWait()
{
	int i = mdr.wdt;
	int timeout = 0;
	while (i == mdr.wdt && timeout < 50)
	{
		MtReflash(md);
		timeout += 1;
		Sleep(1);
	}
}

bool MtHome()
{
	MtCmd("mt_emg 0");
	Sleep(100);
	MtCmd("mt_delay 20");
	MtCmd("mt_m_acc 20");
	MtCmd("mt_v_acc 20");
	MtCmd("mt_speed 30");
	MtCmd("mt_check_ot 0,0,0,0");
	MtCmd("mt_set_home_acc 50");
	MtCmd("mt_set_leave_home_speed 2,2,2,2,50,2");
	//MtCmd("mt_go_home 50,50,10,50,2,2,1,255"); // 回home的速度(速度x, 速度y, 速度z, 速度u, 順序x, 順序y, 順序z, 順序u, 255 = u不回home)
	//MtCmd("mt_go_home 50,50,10,10,2,2,1,3"); // 回home的速度(速度x, 速度y, 速度z, 速度u, 順序x, 順序y, 順序z, 順序u, 255 = u不回home)
	MtCmd("mt_home 50,50,10,50,50,20,2,2,1,2,2,255"); // 回home的速度(速度x, 速度y, 速度z, 速度u, 順序x, 順序y, 順序z, 順序u, 255 = u不回home)
	Sleep(1000);
	do{
		MtReflashWait();
		if (MtFlag(MotionStatus::emg_signal))
		{
			MtCmd("mt_abort_home");
			return false;
		}
	} while (MtFlag(MotionStatus::home_x) || MtFlag(MotionStatus::home_y) || MtFlag(MotionStatus::home_z) || MtFlag(MotionStatus::home_u) || MtFlag(MotionStatus::home_v)); //home_x 回到原點的過程 = true
	//do{
	//	MtReflashWait();
	//	if (MtFlag(MotionStatus::emg_signal))
	//	{
	//		MtCmd("mt_abort_home");
	//		return false;
	//	}
	//} while (MtFlag(MotionStatus::home_x) || MtFlag(MotionStatus::home_y) || MtFlag(MotionStatus::home_z)); //home_x 回到原點的過程 = true
	MtCmd("mt_home_finish");
	MtCmd("mt_speed1 30");
	MtCmd("mt_soft_limit 0,-2,400"); //Axe no., Left limit, Right limit
	MtCmd("mt_soft_limit 1,-2,400");
	MtCmd("mt_soft_limit 2,-2,100");
	MtCmd("mt_soft_limit 3,0,360");
	MtCmd("mt_soft_limit 4,-70,70");
	//MtCmd("mt_check_ot 1,1,1,0"); //enable limit 
	MtCmd("mt_check_ot 1,1,1,1");
	MtCmd("mt_out 11,1"); //door switch
	MtCmd("mt_m_acc 150");  //door switch
	MtCmd("mt_v_acc 80");  //door switch

	return true;
}

int main()
{
	array<String^>^ serialPorts = nullptr;
	try
	{
		// Get a list of serial port names.
		serialPorts = SerialPort::GetPortNames();
	}
	catch (Win32Exception^ ex)
	{
		Console::WriteLine(ex->Message);
	}
	Console::WriteLine("The following serial ports were found:");
	// Display each port name to the console.
	for each(String^ port in serialPorts)
	{
		Console::WriteLine(port);
	}
	//cout << MtTestDebby(2, 3) << endl;
	char ptr[5] = "COM6";
	long IS_CONECT = 0;
	do
	{
		IS_CONECT = MtConnect(ptr);
		cout << "Connect I/O = " << IS_CONECT << endl;
	} while (IS_CONECT != 1);
	//cout << "Connect I/O = " << MtConnect(ptr) << endl;
	//Sleep(100);
	//cout << "Connect I/O = " << mtconnect(ptr) << endl;
	//if (mtreflash != NULL)
	//{
	//	if (mtconnect(ptr) != 0)
	//	{
	//		cout << "Connect I/O = " << mtconnect(ptr) << endl;
	//		Sleep(100);
	//		
	//		cout << "Reflash I/O = " << mtreflash(md) << endl;
	//	}
	//}
	//cout << mtReflash(md) << endl;
	//md = new struct Rs232MotionData;
	//Rs232MotionData* md = new struct Rs232MotionData;
	//md->x = 0;
	cout << "MtReflash: " << MtReflash(md) << endl;
	cout << "md->x : " << md->x << endl;
	cout << "mdr.wdt : " << mdr.wdt << endl;
	//MtCmd("mt_emg 0");
	bool IS_HOME = MtHome();
	Sleep(100);
	for (int i = 0; i < 5; i++)
	{
		MtCmd("mt_out 12,1");
		Sleep(100);
		MtCmd("mt_out 12,0");
		Sleep(100);
	}
	MtCmd("mt_speed 100");
	MtCmd("mt_mr_x 30"); //mr = 相對座標; m = 絕對座標
	MtCmd("mt_mr_y 30"); //mr = 相對座標; m = 絕對座標
	Sleep(100);

	MtCmd("mt_v_xyzu 100,200,50,20");


	MtCmd("mt_m_x 45"); //mr = 相對座標; m = 絕對座標
	MtCmd("mt_m_y 24"); //mr = 相對座標; m = 絕對座標
	MtCmd("mt_m_z 10");
	MtCmd("mt_m_u 90");
	MtCmd("mt_m_v 45");
	Sleep(100);
	do
	{
		MtReflash(md);
		cout << "md->v : " << md->v << endl;
	} while (md->v != 45);
	
	cout << "Close I/O = " << MtClose() << endl;
	//FreeLibrary(hDll);
	cout << "End process" << endl;
	system("pause");
	return 0;
}