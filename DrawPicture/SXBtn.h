#if !defined(AFX_SXBTN_H__FABC46CE_5CF6_4510_BDB2_A1AEA4CB72E8__INCLUDED_)
#define AFX_SXBTN_H__FABC46CE_5CF6_4510_BDB2_A1AEA4CB72E8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SXBtn.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSXBtn window

class CSXBtn : public CButton
{
// Construction
public:
	CSXBtn();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSXBtn)
	public:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSXBtn();

	// Generated message map functions
protected:
	//{{AFX_MSG(CSXBtn)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SXBTN_H__FABC46CE_5CF6_4510_BDB2_A1AEA4CB72E8__INCLUDED_)
