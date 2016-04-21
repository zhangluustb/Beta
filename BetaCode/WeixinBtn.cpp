// WeixinBtn.cpp : implementation file
//

#include "stdafx.h"
#include "BetaCode.h"
#include "WeixinBtn.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWeixinBtn dialog


CWeixinBtn::CWeixinBtn(CWnd* pParent /*=NULL*/)
	: CDialog(CWeixinBtn::IDD, pParent)
{
	//{{AFX_DATA_INIT(CWeixinBtn)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CWeixinBtn::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CWeixinBtn)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CWeixinBtn, CDialog)
	//{{AFX_MSG_MAP(CWeixinBtn)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWeixinBtn message handlers
