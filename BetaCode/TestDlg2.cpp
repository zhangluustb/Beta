// TestDlg2.cpp : implementation file
//

#include "stdafx.h"
#include "BetaCode.h"
#include "TestDlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestDlg2 dialog


CTestDlg2::CTestDlg2(CWnd* pParent /*=NULL*/)
	: CDialog(CTestDlg2::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTestDlg2)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CTestDlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTestDlg2)
	//DDX_Control(pDX, IDC_BUTTON2, m_btn2);
	//DDX_Control(pDX, IDC_BUTTON1, m_btn1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTestDlg2, CDialog)
	//{{AFX_MSG_MAP(CTestDlg2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestDlg2 message handlers

BOOL CTestDlg2::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_btn1.m_pBtn=&m_btn2;
	m_btn2.m_pBtn=&m_btn1;
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
