// p2.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "p2.h"
#include "p2Dlg.h"
#include "p2Abt.h"
#include "resource.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CP2App

BEGIN_MESSAGE_MAP(CP2App, CWinApp)
	//{{AFX_MSG_MAP(CP2App)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CP2App construction

CP2App::CP2App()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CP2App object

CP2App theApp;

CAboutDlg* pdlgAbout;

/////////////////////////////////////////////////////////////////////////////
// CP2App initialization

BOOL CP2App::InitInstance()
{
	InitCommonControls();
	
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	int nRunDlg= 0;

	pdlgAbout = new CAboutDlg();
	//Проверьте получили ли новый  допустимый указатель на объект диалога
	if(pdlgAbout != NULL)
	{
		BOOL ret = pdlgAbout->Create(IDD_ABOUTBOX,NULL);
		if(!ret)   //Ошибка создания
			AfxMessageBox("Error creating Dialog::CAboutDlg");
		pdlgAbout->ShowWindow(SW_SHOW);
	}
	else
		AfxMessageBox("Error Creating Dialog::CAboutDlg Object");

	CP2Dlg dlg;
	//m_pMainWnd = &dlg; <----------- Ошибка 
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	} else {
	   
		char path[MAX_PATH];
        GetCurrentDirectory(sizeof(path), path);
		nRunDlg=pdlgAbout->nRun;
	    if (nRunDlg==0) {
	      CString s1 = path ;
          CString s2 = "Error Creating Dialog Object\n - dont registration NTGraph.ocx\n\n  regsvr32 " + s1 + "\\NTGraph.ocx" ; 
		  AfxMessageBox(s2);
	      //Sleep(3000);
		}
	
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}

int CP2App::ExitInstance() 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CWinApp::ExitInstance();
}
