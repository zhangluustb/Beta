// BetaCodeView.cpp : implementation of the CBetaCodeView class
//

#include "stdafx.h"
#include "BetaCode.h"
#include "MainFrm.h"
#include "BetaCodeDoc.h"
#include "BetaCodeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBetaCodeView

IMPLEMENT_DYNCREATE(CBetaCodeView, CView)

BEGIN_MESSAGE_MAP(CBetaCodeView, CView)
	//{{AFX_MSG_MAP(CBetaCodeView)
	ON_WM_RBUTTONDOWN()
	ON_WM_CHAR()
	ON_WM_CREATE()
	ON_WM_MOUSEMOVE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
	ON_COMMAND(IDM_PHONE1,OnPhone1)
	ON_COMMAND(IDM_PHONE2,OnPhone2)
	ON_COMMAND(IDM_PHONE3,OnPhone3)
	ON_COMMAND(IDM_PHONE4,OnPhone4)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBetaCodeView construction/destruction

CBetaCodeView::CBetaCodeView()
{
	// TODO: add construction code here
	m_strLine="";
	m_nIndex=-1;
}

CBetaCodeView::~CBetaCodeView()
{
}

BOOL CBetaCodeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	//cs.lpszClass=AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW,
	// LoadCursor(NULL,IDC_CROSS),(HBRUSH)GetStockObject(BLACK_BRUSH),NULL);
	cs.lpszClass=AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW);

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CBetaCodeView drawing

void CBetaCodeView::OnDraw(CDC* pDC)
{
	CBetaCodeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CBetaCodeView printing

BOOL CBetaCodeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CBetaCodeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CBetaCodeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CBetaCodeView diagnostics

#ifdef _DEBUG
void CBetaCodeView::AssertValid() const
{
	CView::AssertValid();
}

void CBetaCodeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBetaCodeDoc* CBetaCodeView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBetaCodeDoc)));
	return (CBetaCodeDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBetaCodeView message handlers
void CBetaCodeView::OnPhone1()
{
	CClientDC dc(this);
	dc.TextOut(0,0,m_strArray.GetAt(0));
}
void CBetaCodeView::OnPhone2()
{
	CClientDC dc(this);
	dc.TextOut(0,0,m_strArray.GetAt(1));
}
void CBetaCodeView::OnPhone3()
{
	CClientDC dc(this);
	dc.TextOut(0,0,m_strArray.GetAt(2));
}
void CBetaCodeView::OnPhone4()
{
	CClientDC dc(this);
	dc.TextOut(0,0,m_strArray.GetAt(3));
}

void CBetaCodeView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CMenu menu;
	menu.LoadMenu(IDR_MENU1);
	CMenu *pPopup=menu.GetSubMenu(0);
	ClientToScreen(&point);
	pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y,
	   GetParent());

	CView::OnRButtonDown(nFlags, point);
}

void CBetaCodeView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(this);
	if (0x0d==nChar)
	{
		if(0==++m_nIndex)
		{
			m_menu.CreatePopupMenu();
			GetParent()->GetMenu()->AppendMenu(MF_POPUP,(UINT)m_menu.m_hMenu,"PhoneBook");
			GetParent()->DrawMenuBar();
		}
		//m_menu.AppendMenu(MF_STRING,IDM_PHONE1+m_nIndex,m_strLine.Left(m_strLine.Find(' ')));
		m_menu.AppendMenu(MF_STRING,IDM_PHONE1+m_nIndex,m_strLine);
		m_strArray.Add(m_strLine);
		m_strLine.Empty();
		Invalidate();
	}
	else
	{
		m_strLine+=nChar;
		dc.TextOut(0,0,m_strLine);
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}

int CBetaCodeView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	SetClassLong(m_hWnd,GCL_HBRBACKGROUND,(LONG)GetStockObject(WHITE_BRUSH));
	SetClassLong(m_hWnd,GCL_HCURSOR,(LONG)LoadCursor(NULL,IDC_HELP));

	return 0;
}

void CBetaCodeView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CString str;
	str.Format("x=%d,y=%d",point.x,point.y);
	((CMainFrame*)GetParent())->m_wndStatusBar.SetWindowText(str);
	//((CMainFrame*)GetParent())->SetMessageText(str);
	//((CMainFrame*)GetParent())->GetMessageBar()->SetWindowText(str);
	//GetParent()->GetDescendantWindow(AFX_IDW_STATUS_BAR)->SetWindowText(str);

	CView::OnMouseMove(nFlags, point);
}
