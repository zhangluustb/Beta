#if !defined(AFX_SETTINGDLG_H__28103718_579A_4AEA_98AE_1127F6ED8DD4__INCLUDED_)
#define AFX_SETTINGDLG_H__28103718_579A_4AEA_98AE_1127F6ED8DD4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SettingDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSettingDlg dialog
#include "TestBtn.h"
#include "SXBtn.h"
#include "ButtonST.h"
class CSettingDlg : public CDialog
{
// Construction
public:
	CSettingDlg(CWnd* pParent = NULL);   // standard constructor
	COLORREF m_clr;
// Dialog Data
	//{{AFX_DATA(CSettingDlg)
	enum { IDD = IDD_DLG_SETTING };
	CButtonST	m_btnst;
	CSXBtn	m_btnCancel;
	CTestBtn	m_btnTest;
	UINT	m_nLineWidth;
	int		m_nLineStyle;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSettingDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL
private:
	CFont m_font;
	CBrush m_brush;
// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSettingDlg)
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnRadio3();
	afx_msg void OnPaint();
	afx_msg void OnChangeLineWidth();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SETTINGDLG_H__28103718_579A_4AEA_98AE_1127F6ED8DD4__INCLUDED_)
