// SoftwareArchGHA.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "SoftwareArchGHA.h"


// This is an example of an exported variable
SOFTWAREARCHGHA_API int nSoftwareArchGHA=0;

// This is an example of an exported function.
SOFTWAREARCHGHA_API int fnSoftwareArchGHA(void)
{
    return 0;
}

SOFTWAREARCHGHA_API int testMethod(int num) {
    return num + 2;
}

// This is the constructor of a class that has been exported.
CSoftwareArchGHA::CSoftwareArchGHA()
{
    return;
}
