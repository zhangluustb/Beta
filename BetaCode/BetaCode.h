// BetaCode.h : main header file for the BETACODE application
//

#if !defined(AFX_BETACODE_H__BEC16645_0A70_461B_979B_79022C4791C4__INCLUDED_)
#define AFX_BETACODE_H__BEC16645_0A70_461B_979B_79022C4791C4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CBetaCodeApp:
// See BetaCode.cpp for the implementation of this class
//

class CBetaCodeApp : public CWinApp
{
public:
	CBetaCodeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBetaCodeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CBetaCodeApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BETACODE_H__BEC16645_0A70_461B_979B_79022C4791C4__INCLUDED_)
