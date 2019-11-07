// p2Dlg.h : header file
//
//{{AFX_INCLUDES()
#include "ntgraph.h"
//}}AFX_INCLUDES

#if !defined(AFX_P2DLG_H__AF5153F1_DF5E_4BCD_B862_9BDBDDEE3F67__INCLUDED_)
#define AFX_P2DLG_H__AF5153F1_DF5E_4BCD_B862_9BDBDDEE3F67__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CP2Dlg dialog

typedef unsigned ( __stdcall *PTHREAD_START) (void *);

class CP2Dlg : public CDialog
{
// Construction
public:
	CP2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CP2Dlg)
	enum { IDD = IDD_P2_DIALOG };
	CNTGraph	m_graph;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

	//CProgressDlg m_dlgProgress;
	static unsigned long __stdcall ThreadProgressDlg( LPVOID pParam );
	HANDLE m_pThread;
	void StartThreadProgressDlg(void);
// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CP2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()


};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P2DLG_H__AF5153F1_DF5E_4BCD_B862_9BDBDDEE3F67__INCLUDED_)
