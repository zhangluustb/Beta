#if !defined(AFX_TESTBTN_H__26D633EE_9C02_470F_8931_27A6A17CC455__INCLUDED_)
#define AFX_TESTBTN_H__26D633EE_9C02_470F_8931_27A6A17CC455__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TestBtn.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTestBtn window

class CTestBtn : public CButton
{
// Construction
public:
	CTestBtn();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestBtn)
	public:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTestBtn();

	// Generated message map functions
protected:
	//{{AFX_MSG(CTestBtn)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTBTN_H__26D633EE_9C02_470F_8931_27A6A17CC455__INCLUDED_)
