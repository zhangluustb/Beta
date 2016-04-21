#if !defined(AFX_PROPSHEET1_H__68616AB6_0825_47ED_A0E2_75EBCAD5BDC9__INCLUDED_)
#define AFX_PROPSHEET1_H__68616AB6_0825_47ED_A0E2_75EBCAD5BDC9__INCLUDED_

#include "Prop11.h"	// Added by ClassView
#include "Prop21.h"	// Added by ClassView
#include "Prop31.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PropSheet1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPropSheet

class CPropSheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CPropSheet)

// Construction
public:
	CPropSheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CPropSheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPropSheet)
	//}}AFX_VIRTUAL

// Implementation
public:
	CProp3 m_prop3;
	CProp2 m_prop2;
	CProp1 m_prop1;
	virtual ~CPropSheet();

	// Generated message map functions
protected:
	//{{AFX_MSG(CPropSheet)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROPSHEET1_H__68616AB6_0825_47ED_A0E2_75EBCAD5BDC9__INCLUDED_)
