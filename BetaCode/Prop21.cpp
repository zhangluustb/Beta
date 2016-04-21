// Prop21.cpp : implementation file
//

#include "stdafx.h"
#include "BetaCode.h"
#include "Prop21.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProp2 property page

IMPLEMENT_DYNCREATE(CProp2, CPropertyPage)

CProp2::CProp2() : CPropertyPage(CProp2::IDD)
{
	//{{AFX_DATA_INIT(CProp2)
	m_football = FALSE;
	m_swim = FALSE;
	m_bball = FALSE;
	m_vball = FALSE;
	//}}AFX_DATA_INIT
}

CProp2::~CProp2()
{
}

void CProp2::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProp2)
	DDX_Check(pDX, IDC_CHECK1, m_football);
	DDX_Check(pDX, IDC_CHECK2, m_swim);
	DDX_Check(pDX, IDC_CHECK3, m_bball);
	DDX_Check(pDX, IDC_CHECK4, m_vball);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CProp2, CPropertyPage)
	//{{AFX_MSG_MAP(CProp2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProp2 message handlers

BOOL CProp2::OnSetActive() 
{
	// TODO: Add your specialized code here and/or call the base class
	((CPropertySheet*)GetParent())->SetWizardButtons(PSWIZB_NEXT|PSWIZB_BACK);
	return CPropertyPage::OnSetActive();
}

LRESULT CProp2::OnWizardNext() 
{
	// TODO: Add your specialized code here and/or call the base class
	UpdateData(1);
	if(m_vball||m_bball||m_swim||m_football)
	return CPropertyPage::OnWizardNext();
	else
	{
		MessageBox("至少选择一个爱好。");
			return -1;
	}
}

BOOL CProp2::OnInitDialog() 
{
	CPropertyPage::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
