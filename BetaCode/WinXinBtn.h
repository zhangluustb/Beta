#if !defined(AFX_WINXINBTN_H__5E39E1E1_F7E5_488E_8074_698C22AF7A56__INCLUDED_)
#define AFX_WINXINBTN_H__5E39E1E1_F7E5_488E_8074_698C22AF7A56__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// WinXinBtn.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CWinXinBtn window

class CWinXinBtn : public CButton
{
// Construction
public:
	CWinXinBtn();

// Attributes
public:
	CWinXinBtn* m_pBtn;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWinXinBtn)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CWinXinBtn();

	// Generated message map functions
protected:
	//{{AFX_MSG(CWinXinBtn)
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WINXINBTN_H__5E39E1E1_F7E5_488E_8074_698C22AF7A56__INCLUDED_)
