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
	m_number1 = 0;
	m_number2 = 0;
	m_number3 = 0;
	//}}AFX_DATA_INIT
}


void CTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTestDlg)
	DDX_Text(pDX, IDC_EDIT1, m_number1);
	DDX_Text(pDX, IDC_EDIT2, m_number2);
	DDX_Text(pDX, IDC_EDIT3, m_number3);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTestDlg, CDialog)
	//{{AFX_MSG_MAP(CTestDlg)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_STATIC1, OnNumber1)
	ON_BN_CLICKED(IDC_BTN_ADD, OnBtnAdd)
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

void CTestDlg::OnBtnAdd() 
{
	// TODO: Add your control notification handler code here
	UpdateData(1);
	m_number3=m_number2+m_number1;
	UpdateData(0);
}

WNDPROC prevProc;
LRESULT CALLBACK WinSunProc(
  HWND hwnd,      // handle to window
  UINT uMsg,      // message identifier
  WPARAM wParam,  // first message parameter
  LPARAM lParam   // second message parameter
)
{
	if(uMsg==WM_CHAR && wParam==0x0d)
	{
		//::SetFocus(::GetNextWindow(hwnd,GW_HWNDNEXT));
		//SetFocus(::GetWindow(hwnd,GW_HWNDNEXT));
		SetFocus(::GetNextDlgTabItem(::GetParent(hwnd),hwnd,FALSE));
		return 1;
	}
	else
	{
		return prevProc(hwnd,uMsg,wParam,lParam);
	}
}

BOOL CTestDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	prevProc=(WNDPROC)SetWindowLong(GetDlgItem(IDC_EDIT1)->m_hWnd,GWL_WNDPROC,
		(LONG)WinSunProc);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
