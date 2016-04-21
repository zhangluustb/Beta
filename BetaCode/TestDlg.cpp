// TestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "BetaCode.h"
#include "TestDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestDlg dialog


CTestDlg::CTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTestDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTestDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTestDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTestDlg, CDialog)
	//{{AFX_MSG_MAP(CTestDlg)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_STATIC1, OnNumber1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestDlg message handlers

void CTestDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	
}

void CTestDlg::OnNumber1() 
{
	// TODO: Add your control notification handler code here
	CString str;
	if(GetDlgItem(IDC_STATIC1)->GetWindowText(str),str=="NUM1:")
	{
		GetDlgItem(IDC_STATIC1)->SetWindowText("ÊýÖµ1:");
	}
	else
	{
		GetDlgItem(IDC_STATIC1)->SetWindowText("NUM1:");
	}
}
