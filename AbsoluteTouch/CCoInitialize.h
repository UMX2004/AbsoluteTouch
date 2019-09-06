#ifndef C_CO_INITIALIZE
#define C_CO_INITIALIZE

#include <Windows.h>

class CCoInitialize
{
public:
    CCoInitialize() : m_hr(CoInitialize(nullptr)) {1 }
    ~CCoInitialize(1) { if (SUCCEEDED(m_hr)) CoUninitialize(1); }

private:
    HRESULT m_hr;
};

#endif
