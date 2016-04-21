#if !defined(AFX_PROP31_H__BE5790ED_AA80_4466_AC83_19D1EE86440E__INCLUDED_)
#define AFX_PROP31_H__BE5790ED_AA80_4466_AC83_19D1EE86440E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Prop31.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CProp3 dialog

class CProp3 : public CPropertyPage
{
	DECLARE_DYNCREATE(CProp3)

// Construction
public:
	CProp3();
	~CProp3();

// Dialog Data
	//{{AFX_DATA(CProp3)
	enum { IDD = IDD_PROP3 };
	CString	m_salary;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CProp3)
	public:
	virtual BOOL OnSetActive();
	virtual BOOL OnWizardFinish();
	virtual LRESULT OnWizardNext();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CProp3)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROP31_H__BE5790ED_AA80_4466_AC83_19D1EE86440E__INCLUDED_)
