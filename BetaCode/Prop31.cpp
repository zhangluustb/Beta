// Prop31.cpp : implementation file
//

#include "stdafx.h"
#include "BetaCode.h"
#include "Prop31.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProp3 property page

IMPLEMENT_DYNCREATE(CProp3, CPropertyPage)

CProp3::CProp3() : CPropertyPage(CProp3::IDD)
{
	//{{AFX_DATA_INIT(CProp3)
	m_salary = _T("");
	//}}AFX_DATA_INIT
}

CProp3::~CProp3()
{
}

void CProp3::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProp3)
	DDX_CBString(pDX, IDC_COMBO1, m_salary);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CProp3, CPropertyPage)
	//{{AFX_MSG_MAP(CProp3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProp3 message handlers

BOOL CProp3::OnSetActive() 
{
	// TODO: Add your specialized code here and/or call the base class
	((CPropertySheet*)GetParent())->SetWizardButtons(PSWIZB_BACK|PSWIZB_FINISH);
	return CPropertyPage::OnSetActive();
}

BOOL CProp3::OnInitDialog() 
{
	CPropertyPage::OnInitDialog();
	
	// TODO: Add extra initialization here
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString("1000元以下");
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString("1000元到2000元");
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString("2000元到3000元");
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString("3000元以上");

	((CComboBox*)GetDlgItem(IDC_COMBO1))->SetCurSel(1);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

BOOL CProp3::OnWizardFinish() 
{
	// TODO: Add your specialized code here and/or call the base class
	UpdateData(1);
	if(m_salary=="")
	{
		MessageBox("请选择薪资");
		return 0;
	}
	else
	{
		//出了绑定CString变量还可以这样得到数据
		int index;
		index=((CComboBox*)GetDlgItem(IDC_COMBO1))->GetCurSel();
		((CComboBox*)GetDlgItem(IDC_COMBO1))->GetLBText(index,m_salary);
		return CPropertyPage::OnWizardFinish();
	}
	
}

LRESULT CProp3::OnWizardNext() 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CPropertyPage::OnWizardNext();
}
