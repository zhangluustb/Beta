// WinXinBtn.cpp : implementation file
//

#include "stdafx.h"
#include "BetaCode.h"
#include "WinXinBtn.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWinXinBtn

CWinXinBtn::CWinXinBtn()
{
}

CWinXinBtn::~CWinXinBtn()
{
}


BEGIN_MESSAGE_MAP(CWinXinBtn, CButton)
	//{{AFX_MSG_MAP(CWinXinBtn)
	ON_WM_MOUSEMOVE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWinXinBtn message handlers

void CWinXinBtn::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	ShowWindow(SW_HIDE);
	m_pBtn->ShowWindow(SW_SHOW);
	CButton::OnMouseMove(nFlags, point);
}
