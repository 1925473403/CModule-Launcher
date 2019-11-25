#ifndef _CMODULE_LAUNCHER_H_
#define _CMODULE_LAUNCHER_H_
#ifdef CMODULE_LAUNCHER_EXPORTS
#define CMODULE_LAUNCHER extern "C" __declspec(dllexport) 
#else
#define CMODULE_LAUNCHER extern "C" __declspec(dllimport)
#endif
CMODULE_LAUNCHER int __stdcall ML_Start(const char* versions);
#endif

