#if !defined(AFX_PROP21_H__C1808983_D47D_41B9_9965_CBDBACD2BEA2__INCLUDED_)
#define AFX_PROP21_H__C1808983_D47D_41B9_9965_CBDBACD2BEA2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Prop21.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CProp2 dialog

class CProp2 : public CPropertyPage
{
	DECLARE_DYNCREATE(CProp2)

// Construction
public:
	CProp2();
	~CProp2();

// Dialog Data
	//{{AFX_DATA(CProp2)
	enum { IDD = IDD_PROP2 };
	BOOL	m_football;
	BOOL	m_swim;
	BOOL	m_bball;
	BOOL	m_vball;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CProp2)
	public:
	virtual BOOL OnSetActive();
	virtual LRESULT OnWizardNext();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CProp2)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROP21_H__C1808983_D47D_41B9_9965_CBDBACD2BEA2__INCLUDED_)
