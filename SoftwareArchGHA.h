// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the SOFTWAREARCHGHA_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// SOFTWAREARCHGHA_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SOFTWAREARCHGHA_EXPORTS
#define SOFTWAREARCHGHA_API __declspec(dllexport)
#else
#define SOFTWAREARCHGHA_API __declspec(dllimport)
#endif

// This class is exported from the dll
class SOFTWAREARCHGHA_API CSoftwareArchGHA {
public:
	CSoftwareArchGHA(void);
	// TODO: add your methods here.
};

extern SOFTWAREARCHGHA_API int nSoftwareArchGHA;

SOFTWAREARCHGHA_API int fnSoftwareArchGHA(void);

SOFTWAREARCHGHA_API int testMethod(int num);
