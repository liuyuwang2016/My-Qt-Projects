
#include "dispenser.h"
#include "src/dllmain.h"
Dispenser::Dispenser(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btnXPlus, SIGNAL(clicked()), this, SLOT(on_btnXPlus_clicked()));
	connect(ui.btnXMinus, SIGNAL(clicked()), this, SLOT(on_btnXMinus_clicked()));
	connect(ui.btnYPlus, SIGNAL(clicked()), this, SLOT(on_btnYPlus_clicked()));
	connect(ui.btnYMinus, SIGNAL(clicked()), this, SLOT(on_btnYMinus_clicked()));
	connect(ui.btnZPlus, SIGNAL(clicked()), this, SLOT(on_btnZPlus_clicked()));
	connect(ui.btnZMinus, SIGNAL(clicked()), this, SLOT(on_btnZMinus_clicked()));
	connect(ui.btnUPlus, SIGNAL(clicked()), this, SLOT(on_btnUPlus_clicked()));
	connect(ui.btnUMinus, SIGNAL(clicked()), this, SLOT(on_btnUMinus_clicked()));
	connect(ui.btnVPlus, SIGNAL(clicked()), this, SLOT(on_btnVPlus_clicked()));
	connect(ui.btnVMinus, SIGNAL(clicked()), this, SLOT(on_btnVMinus_clicked()));
	connect(ui.btnHome, SIGNAL(clicked()), this, SLOT(on_btnHome_clicked()));

}

Dispenser::~Dispenser()
{

}

void Dispenser::MtInit()
{
	array<System::String^>^ serialPorts = nullptr;
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
	for each(System::String^ port in serialPorts)
	{
		Console::WriteLine(port);
	}
	//cout << MtTestYvan(2, 3) << endl;
	char ptr[5] = "COM6";
	//cout << "Connect I/O = " << MtConnect(ptr) << endl;
	long IS_CONECT = 0;
	//
	do
	{
		IS_CONECT = MtConnect(ptr);
		std::cout << "Connect I/O = " << IS_CONECT << std::endl;
	} while (IS_CONECT != 1);

	Sleep(50);
	long MtEmpty();
	bool IS_HOME = on_btnHome_clicked();
}

void Dispenser::MtReflashWait()
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

void Dispenser::on_btnXPlus_clicked()
{

}

void Dispenser::on_btnXMinus_clicked()
{

}

void Dispenser::on_btnYPlus_clicked()
{

}

void Dispenser::on_btnYMinus_clicked()
{

}

void Dispenser::on_btnZPlus_clicked()
{

}

void Dispenser::on_btnZMinus_clicked()
{

}

void Dispenser::on_btnUPlus_clicked()
{

}

void Dispenser::on_btnUMinus_clicked()
{

}

void Dispenser::on_btnVPlus_clicked()
{

}

void Dispenser::on_btnVMinus_clicked()
{

}

bool Dispenser::on_btnHome_clicked()
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
	//MtCmd("mt_go_home 50,50,10,50,2,2,1,255"); // ��home���ٶ�(�ٶ�x, �ٶ�y, �ٶ�z, �ٶ�u, ���x, ���y, ���z, ���u, 255 = u����home)
	//MtCmd("mt_go_home 50,50,10,10,2,2,1,3"); // ��home���ٶ�(�ٶ�x, �ٶ�y, �ٶ�z, �ٶ�u, ���x, ���y, ���z, ���u, 255 = u����home)
	MtCmd("mt_home 50,50,10,50,50,20,2,2,1,2,2,255"); // ��home���ٶ�(�ٶ�x, �ٶ�y, �ٶ�z, �ٶ�u, ���x, ���y, ���z, ���u, 255 = u����home)
	Sleep(1000);
	do{
		MtReflashWait();
		if (MtFlag(MotionStatus::emg_signal))
		{
			MtCmd("mt_abort_home");
			return false;
		}
	} while (MtFlag(MotionStatus::home_x) || MtFlag(MotionStatus::home_y) || MtFlag(MotionStatus::home_z) || MtFlag(MotionStatus::home_u) || MtFlag(MotionStatus::home_v)); //home_x �ص�ԭ�c���^�� = true
	//do{
	//	MtReflashWait();
	//	if (MtFlag(MotionStatus::emg_signal))
	//	{
	//		MtCmd("mt_abort_home");
	//		return false;
	//	}
	//} while (MtFlag(MotionStatus::home_x) || MtFlag(MotionStatus::home_y) || MtFlag(MotionStatus::home_z)); //home_x �ص�ԭ�c���^�� = true
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
