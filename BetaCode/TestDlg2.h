#if !defined(AFX_TESTDLG2_H__1733C57F_BA56_401F_849C_09C8C85ABD41__INCLUDED_)
#define AFX_TESTDLG2_H__1733C57F_BA56_401F_849C_09C8C85ABD41__INCLUDED_

#if _MSC_VER > 1000

#pragma once
#endif // _MSC_VER > 1000

// TestDlg2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTestDlg2 dialog
#include "WeixinBtn.h"

class CTestDlg2 : public CDialog
{
// Construction
public:
	CTestDlg2(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CTestDlg2)
	enum { IDD = IDD_DIALOG2 };
	CWinXinBtn m_btn1;
	CWinXinBtn m_btn2;
	//}}AFX_DATA

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestDlg2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CTestDlg2)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTDLG2_H__1733C57F_BA56_401F_849C_09C8C85ABD41__INCLUDED_)
