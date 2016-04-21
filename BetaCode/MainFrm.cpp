// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "BetaCode.h"

#include "MainFrm.h"
#include "SplashWnd.h"
#include "TestDlg.h"
#include "TestDlg2.h"
#include "PropSheet1.h"

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
	ON_WM_TIMER()
	ON_COMMAND(IDM_NEWTOOLBAR, OnNewtoolbar)
	ON_UPDATE_COMMAND_UI(IDM_NEWTOOLBAR, OnUpdateNewtoolbar)
	ON_WM_PAINT()
	ON_COMMAND(IDM_DLG1, OnDlg1)
	ON_COMMAND(IDM_DLG2, OnDlg2)
	ON_COMMAND(IDD_DATASHEET, OnDatasheet)
	//}}AFX_MSG_MAP
	ON_COMMAND(IDM_HELLO,Hello)
	ON_MESSAGE(UM_PROGRESS,OnProgress)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	IDS_TIMER,
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	m_iOccupation=-1;
	m_strWorkAddr="";
	memset(m_bLike,0,sizeof(m_bLike));
	m_strSalary="";
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
	if (!m_newToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_RIGHT
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_newToolBar.LoadToolBar(IDR_TOOLBAR1))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	m_newToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_newToolBar);

	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);
	
	CString str;
	str.Format("x=%d,y=%d",GetSystemMetrics(SM_CXMENUCHECK),
		GetSystemMetrics(SM_CYMENUCHECK));//���ϵͳ�Ĳ˵���λͼ�Ĵ�С��
	SetMenu(NULL);//�Ƴ��˵�
	CMenu menu;
	menu.LoadMenu(IDR_MAINFRAME);
	SetMenu(&menu);
	menu.Detach(); //���Ӳ˵����˴�detach(),����Ǿֲ�������
	GetMenu()->GetSubMenu(0)->SetDefaultItem(1);
	
	//��̬��Ӳ˵�
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
		MF_BYCOMMAND | MF_STRING,115,"ά��");
	//GetMenu()->DeleteMenu(1,MF_BYPOSITION);
	//GetMenu()->GetSubMenu(0)->DeleteMenu(2,MF_BYPOSITION);

	//SetWindowLong(m_hWnd,GWL_STYLE,WS_OVERLAPPEDWINDOW);
	//SetWindowLong(m_hWnd,GWL_STYLE,GetWindowLong(m_hWnd,GWL_STYLE) & ~WS_MAXIMIZEBOX);
	// SetClassLong(m_hWnd,GCL_HICON,(LONG)LoadIcon(NULL,IDI_ERROR));

	m_hIcons[0]=LoadIcon(AfxGetApp()->m_hInstance,MAKEINTRESOURCE(IDI_ICON1));
	m_hIcons[1]=LoadIcon(AfxGetApp()->m_hInstance,MAKEINTRESOURCE(IDI_ICON2));
	m_hIcons[2]=LoadIcon(AfxGetApp()->m_hInstance,MAKEINTRESOURCE(IDI_ICON3));
	SetClassLong(m_hWnd,GCL_HICON,(LONG)m_hIcons[0]);
	SetTimer(1,1000,NULL);

/*
	CRect rect;
	m_wndStatusBar.GetItemRect(2,&rect);
	//m_progress.Create(WS_CHILD | WS_VISIBLE | PBS_VERTICAL,
	//	CRect(100,100,120,200),this,123);
	m_progress.Create(WS_CHILD | WS_VISIBLE,// | PBS_VERTICAL,
		rect,&m_wndStatusBar,123);
	m_progress.SetPos(50);
	//SendMessage(UM_PROGRESS);
	PostMessage(UM_PROGRESS);

	*/

	CSplashWnd::EnableSplashScreen(1);
	CSplashWnd::ShowSplashScreen(this);
	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	//cs.lpszClass=AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW,0,0,
	// LoadIcon(NULL,IDI_WARNING));

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
  pCmdUI->Enable();//���˲˵���ʾʱ����Ϊ���á�
}

void CMainFrame::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	static int m_index=1;
	SetClassLong(m_hWnd,GCL_HICON,(long)m_hIcons[m_index%3]);
	m_index++;

	CTime t=CTime::GetCurrentTime();
	CString str=t.Format("%H:%M:%S");
	CClientDC dc(this);
	CSize sz=dc.GetTextExtent(str);
	m_wndStatusBar.SetPaneInfo(1,IDS_TIMER,SBPS_NORMAL,sz.cx);
	m_wndStatusBar.SetPaneText(1,str);

	m_progress.StepIt();
	CFrameWnd::OnTimer(nIDEvent);
}

void CMainFrame::OnNewtoolbar() 
{
	// TODO: Add your command handler code here
	if(m_newToolBar.IsVisible())
	{
		 m_newToolBar.ShowWindow(SW_HIDE);
	}
	else
	{
		 m_newToolBar.ShowWindow(SW_SHOW);
	}
	RecalcLayout();
	DockControlBar(&m_newToolBar);
}

void CMainFrame::OnUpdateNewtoolbar(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(m_newToolBar.IsWindowVisible());
}

void CMainFrame::OnProgress()
{
	CRect rect;
	m_wndStatusBar.GetItemRect(2,&rect);
	m_progress.Create(WS_CHILD | WS_VISIBLE | PBS_SMOOTH,
	  rect,&m_wndStatusBar,123);
	m_progress.SetPos(50);
}

void CMainFrame::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	CRect rect;
	m_wndStatusBar.GetItemRect(2,&rect);
	if(!m_progress.m_hWnd)
		m_progress.Create(WS_CHILD | WS_VISIBLE ,//| PBS_SMOOTH,
			rect,&m_wndStatusBar,123);
	else
		m_progress.MoveWindow(rect);
	m_progress.SetPos(50);


	//��룬������������view��ʵ��
	CClientDC pdc(this);
	CFont font;
	font.CreatePointFont(300,"�����п�");

	CFont *pOldFont;
	pOldFont=pdc.SelectObject(&font);

	CString strTemp;
	strTemp="���ְҵ��";

	switch(m_iOccupation)
	{
	case 0:
		strTemp+="����Ա";
		break;
	case 1:
		strTemp+="ϵͳ����ʦ";
		break;
	case 2:
		strTemp+="��Ŀ����";
		break;
	default:
		break;
	}
	pdc.TextOut(0,30,strTemp);

	strTemp="��Ĺ����ص㣺";
	strTemp+=m_strWorkAddr;

	TEXTMETRIC tm;
	pdc.GetTextMetrics(&tm);

	pdc.TextOut(0,tm.tmHeight+30,strTemp);

	strTemp="�����Ȥ���ã�";
	if(m_bLike[0])
	{
		strTemp+="���� ";
	}
	if(m_bLike[1])
	{
		strTemp+="���� ";
	}
	if(m_bLike[2])
	{
		strTemp+="���� ";
	}
	if(m_bLike[3])
	{
		strTemp+="��Ӿ ";
	}
	pdc.TextOut(0,tm.tmHeight*2+30,strTemp);

	strTemp="���н��ˮƽ��";
	strTemp+=m_strSalary;
	pdc.TextOut(0,tm.tmHeight*3+30,strTemp);

	pdc.SelectObject(pOldFont);
	// Do not call CFrameWnd::OnPaint() for painting messages
}

void CMainFrame::OnDlg1() 
{
	// TODO: Add your command handler code here
	CTestDlg dlg;
	dlg.DoModal();
}

void CMainFrame::OnDlg2() 
{
	// TODO: Add your command handler code here
	CTestDlg2 dlg;
	dlg.DoModal();
}

void CMainFrame::OnDatasheet() 
{
	// TODO: Add your command handler code here
	CPropSheet propSheet("ά�����Ա�����"); 
	propSheet.SetWizardMode();
	if(ID_WIZFINISH==propSheet.DoModal())
	{
		m_iOccupation=propSheet.m_prop1.m_occupation;
		m_strWorkAddr=propSheet.m_prop1.m_workAddr;
		m_bLike[0]=propSheet.m_prop2.m_football;
		m_bLike[1]=propSheet.m_prop2.m_bball;
		m_bLike[2]=propSheet.m_prop2.m_vball;
		m_bLike[3]=propSheet.m_prop2.m_swim;
		m_strSalary=propSheet.m_prop3.m_salary;
		Invalidate();
	}
}
