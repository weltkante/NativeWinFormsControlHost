
// ExampleHost.h : main header file for the ExampleHost application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CExampleHostApp:
// See ExampleHost.cpp for the implementation of this class
//

class CExampleHostApp : public CWinApp
{
public:
	CExampleHostApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CExampleHostApp theApp;
