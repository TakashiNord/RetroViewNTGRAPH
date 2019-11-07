// p2.h : main header file for the P2 application
//

#if !defined(AFX_P2_H__D39640DE_C027_4792_863F_E3823D1D1FE1__INCLUDED_)
#define AFX_P2_H__D39640DE_C027_4792_863F_E3823D1D1FE1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CP2App:
// See p2.cpp for the implementation of this class
//

class CP2App : public CWinApp
{
public:
	CP2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP2App)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CP2App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P2_H__D39640DE_C027_4792_863F_E3823D1D1FE1__INCLUDED_)
