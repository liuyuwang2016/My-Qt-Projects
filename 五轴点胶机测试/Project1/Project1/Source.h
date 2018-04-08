#include"dllmain.h"

//typedef void MtTestDebby(bool* DBLflag);

//typedef struct Rs232MotionData Rs232MotionData;

typedef int(*MtTestDebbyFunc)(int a, int b);

typedef long(*MyMtConnect)(char* ptr);
typedef long(*MyMtClose)(void);
typedef long(*MyMtReflash)(Rs232MotionData *m);

typedef long (*MyMotionComClose)(void);
typedef long(*MyMotionComStatus)(void);
typedef long(*MyMotionComSignal)(long signal);
typedef long(*MyMotionFlag)(long b);
typedef long(*MyMotionInput)(long b);
typedef long(*MyMotionCmd)(char* cmd);

typedef void(*MyMtRs232Baud)(long b);
typedef long(*MyMtStart)(long ptr);
typedef long(*MyMtFlag)(long b);
typedef long(*MyMtInput)(long b);
typedef long(*MyMtSize)(void);
typedef long(*MyMtHead)(void);
typedef long(*MyMtTail)(void);
typedef long(*MyMtCmd)(char *cmd);
typedef long(*MyMtEmpty)(void);
typedef long(*MyMtThread)(void);
typedef unsigned long(*MyMtCheckSum)(void);
typedef unsigned long(*MyMtCheckWdt)(void);
typedef unsigned long(*MyMtError)(void);
typedef char* (*MyMtLaserCmd)(char *cmd);
typedef char* (*MyMtReceived)(void);

typedef long(*MyRemoteWDT)(void);

typedef struct Rs232MotionData Rs232MotionData;

//struct Rs232MotionData{
//	double x, y, z, u, v, w;
//	double laser;
//	long   out, status, length, in;
//	long   flowNumber;
//	long   wdt;
//	long   cmdid;
//};

//Rs232MotionData md;
Rs232MotionData* md;

MtTestDebbyFunc DBL;
MyMtConnect mtConnect;
MyMtReflash mtReflash;
MyMtClose mtClose;

MyMotionComClose motionComClose;
MyMotionComStatus motionComStatus;
MyMotionComSignal motionComSignal;
MyMotionFlag motionFlag;
MyMotionInput motionInput;
MyMotionCmd motionCmd;

MyMtRs232Baud mtRs232Baud;
MyMtStart mtStart;
MyMtFlag mtFlag;
MyMtInput mtInput;
MyMtSize mtSize;
MyMtHead mtHead;
MyMtTail mtTail;
MyMtCmd mtCmd;
MyMtEmpty mtEmpty;
MyMtThread mtThread;
MyMtCheckSum mtCheckSum;
MyMtCheckWdt mtCheckWdt;
MyMtError mtError;
MyMtLaserCmd mtLaserCmd;
MyMtReceived mtReceived;

MyRemoteWDT remoteWDT;