#if !defined(AFX_WEIXINBTN_H__7EFA86EB_5C5F_453F_A0B2_7EB5D8C69E20__INCLUDED_)
#define AFX_WEIXINBTN_H__7EFA86EB_5C5F_453F_A0B2_7EB5D8C69E20__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// WeixinBtn.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CWeixinBtn dialog

class CWeixinBtn : public CDialog
{
// Construction
public:
	CWeixinBtn(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CWeixinBtn)
	enum { IDD = IDD_DIALOG2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWeixinBtn)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CWeixinBtn)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WEIXINBTN_H__7EFA86EB_5C5F_453F_A0B2_7EB5D8C69E20__INCLUDED_)
