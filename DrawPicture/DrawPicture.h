// DrawPicture.h : main header file for the DRAWPICTURE application
//

#if !defined(AFX_DRAWPICTURE_H__89A7BA23_453F_4AC6_AA33_1B9EE2BA0B29__INCLUDED_)
#define AFX_DRAWPICTURE_H__89A7BA23_453F_4AC6_AA33_1B9EE2BA0B29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CDrawPictureApp:
// See DrawPicture.cpp for the implementation of this class
//

class CDrawPictureApp : public CWinApp
{
public:
	CDrawPictureApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDrawPictureApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CDrawPictureApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAWPICTURE_H__89A7BA23_453F_4AC6_AA33_1B9EE2BA0B29__INCLUDED_)
