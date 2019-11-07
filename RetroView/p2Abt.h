// p2Abt.h : header file
//
//{{AFX_INCLUDES()
#include "ntgraph.h"
//}}AFX_INCLUDES

#if !defined(AFX_P2ABT_H__AF5153F1_DF5E_4BCD_B862_9BDBDDEE3F67__INCLUDED_)
#define AFX_P2ABT_H__AF5153F1_DF5E_4BCD_B862_9BDBDDEE3F67__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CP2Adt dialog

typedef unsigned ( __stdcall *PTHREAD_START) (void *);

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{

	//DECLARE_DYNAMIC(CAboutDlg)

public:
	CAboutDlg();
	int nRun ;

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL
	UINT_PTR m_nTimer ;

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	afx_msg void OnTimer(UINT nIDEvent);
	virtual BOOL OnInitDialog();
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P2ABT_H__AF5153F1_DF5E_4BCD_B862_9BDBDDEE3F67__INCLUDED_)
