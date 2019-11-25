#include "pch.h"
#define CMODULE_LAUNCHER_EXPORTS
#include "CModule Launcher.h"

int __stdcall ML_Start(const char* versions)
{
	MessageBoxA(0, versions,"测试",0);
	return 0;
}
