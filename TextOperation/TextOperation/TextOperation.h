// TextOperation.h : main header file for the TEXTOPERATION application
//

#if !defined(AFX_TEXTOPERATION_H__BF7A84FE_5C57_4A09_9B25_1B6EFFCF2B7E__INCLUDED_)
#define AFX_TEXTOPERATION_H__BF7A84FE_5C57_4A09_9B25_1B6EFFCF2B7E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTextOperationApp:
// See TextOperation.cpp for the implementation of this class
//

class CTextOperationApp : public CWinApp
{
public:
	CTextOperationApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTextOperationApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTextOperationApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEXTOPERATION_H__BF7A84FE_5C57_4A09_9B25_1B6EFFCF2B7E__INCLUDED_)
