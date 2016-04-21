#if !defined(AFX_PROP11_H__83B31566_3601_4A41_8204_CDD5CCC90BB3__INCLUDED_)
#define AFX_PROP11_H__83B31566_3601_4A41_8204_CDD5CCC90BB3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Prop11.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CProp1 dialog

class CProp1 : public CPropertyPage
{
	DECLARE_DYNCREATE(CProp1)

// Construction
public:
	CProp1();
	~CProp1();

// Dialog Data
	//{{AFX_DATA(CProp1)
	enum { IDD = IDD_PROP1 };
	CString	m_workAddr;
	int		m_occupation;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CProp1)
	public:
	virtual BOOL OnSetActive();
	virtual LRESULT OnWizardNext();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CProp1)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROP11_H__83B31566_3601_4A41_8204_CDD5CCC90BB3__INCLUDED_)
