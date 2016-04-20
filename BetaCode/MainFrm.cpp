// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "BetaCode.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_UPDATE_COMMAND_UI(ID_EDIT_CUT, OnUpdateEditCut)
	//}}AFX_MSG_MAP
	ON_COMMAND(IDM_HELLO,Hello)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Delete these three lines if you don't want the toolbar to
	//  be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);
	
	CString str;
	str.Format("x=%d,y=%d",GetSystemMetrics(SM_CXMENUCHECK),
		GetSystemMetrics(SM_CYMENUCHECK));//获得系统的菜单的位图的大小。
	SetMenu(NULL);//移除菜单
	CMenu menu;
	menu.LoadMenu(IDR_MAINFRAME);
	SetMenu(&menu);
	menu.Detach(); //增加菜单，此处detach(),如果是局部变量。
	GetMenu()->GetSubMenu(0)->SetDefaultItem(1);
	
	//动态添加菜单
	CMenu menu1;
	menu1.CreatePopupMenu();
	// GetMenu()->AppendMenu(MF_POPUP,(UINT)menu1.m_hMenu,"WinSun");
	GetMenu()->InsertMenu(2,MF_BYPOSITION | MF_POPUP,(UINT)menu1.m_hMenu,"WinSun");
	menu1.AppendMenu(MF_STRING,IDM_HELLO,"Hello");
	menu1.AppendMenu(MF_STRING,112,"Weixin");
	menu1.AppendMenu(MF_STRING,113,"Mybole");
	menu1.Detach();
	GetMenu()->GetSubMenu(0)->AppendMenu(MF_STRING,114,"Welcome");
	GetMenu()->GetSubMenu(0)->InsertMenu(ID_FILE_OPEN,
		MF_BYCOMMAND | MF_STRING,115,"维新");
	//GetMenu()->DeleteMenu(1,MF_BYPOSITION);
	//GetMenu()->GetSubMenu(0)->DeleteMenu(2,MF_BYPOSITION);


	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers

void CMainFrame::Hello()
{
	MessageBox("Hello");
}

void CMainFrame::OnUpdateEditCut(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	if(2==pCmdUI->m_nIndex)
  pCmdUI->Enable();//当此菜单显示时，设为可用。
}
