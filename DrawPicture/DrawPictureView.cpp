// DrawPictureView.cpp : implementation of the CDrawPictureView class
//

#include "stdafx.h"
#include "DrawPicture.h"

#include "DrawPictureDoc.h"
#include "DrawPictureView.h"
#include "SettingDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDrawPictureView

IMPLEMENT_DYNCREATE(CDrawPictureView, CView)

BEGIN_MESSAGE_MAP(CDrawPictureView, CView)
	//{{AFX_MSG_MAP(CDrawPictureView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_UPDATE_COMMAND_UI(IDB_DOT, OnUpdateDot)
	ON_COMMAND(IDB_DOT, OnDot)
	ON_COMMAND(IDB_LINE, OnLine)
	ON_COMMAND(IDB_RECT, OnRect)
	ON_COMMAND(IDB_ELL, OnEll)
	ON_COMMAND(ID_MENUITEMSET, OnMenuitemset)
	ON_COMMAND(ID_MENUITEMFONT, OnMenuitemfont)
	ON_COMMAND(ID_MENUITEMCOLOR, OnMenuitemcolor)
	ON_WM_ERASEBKGND()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDrawPictureView construction/destruction

CDrawPictureView::CDrawPictureView()
{
	// TODO: add construction code here
	m_bDraw=0;
	m_ptOrigin=0;
	m_ptOld=0;
	m_DrawType=-1;
	m_nLineWidth=0;
	m_nLineStyle=0;
	m_clr=RGB(255,0,0);
	m_strFontName="";
}

CDrawPictureView::~CDrawPictureView()
{
}

BOOL CDrawPictureView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CDrawPictureView drawing

void CDrawPictureView::OnDraw(CDC* pDC)
{
	CDrawPictureDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CFont *pOldFont=pDC->SelectObject(&m_font);
	pDC->TextOut(0,0,m_strFontName);
	pDC->SelectObject(pOldFont);
}

/////////////////////////////////////////////////////////////////////////////
// CDrawPictureView printing

BOOL CDrawPictureView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDrawPictureView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDrawPictureView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CDrawPictureView diagnostics

#ifdef _DEBUG
void CDrawPictureView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawPictureView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawPictureDoc* CDrawPictureView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawPictureDoc)));
	return (CDrawPictureDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDrawPictureView message handlers

void CDrawPictureView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_ptOld=m_ptOrigin=point;
	m_bDraw=1;
	CView::OnLButtonDown(nFlags, point);
}

void CDrawPictureView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(this);
	//dc.MoveTo(m_ptOrigin);
	//dc.LineTo(point);
	//CClientDC dc(this);
	CPen pen(m_nLineStyle,m_nLineWidth,m_clr);
	dc.SelectObject(&pen);
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	dc.SelectObject(pBrush);
	switch(m_DrawType)
	{
	case 0:
		dc.SetPixel(point,m_clr);
		break;
	case 1:
		dc.MoveTo(m_ptOrigin);
		dc.LineTo(point);
		break;
	case 2:
		dc.Rectangle(CRect(m_ptOrigin,point));
		break;
	case 3:
		dc.Ellipse(CRect(m_ptOrigin,point));
		break;
	}
	m_bDraw=0;
	CView::OnLButtonUp(nFlags, point);
}

void CDrawPictureView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	//CClientDC dc(this);
	//CPen pen(PS_SOLID,1,RGB(255,0,0));
	//CPen *pOldPen=dc.SelectObject(&pen);
	//CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	//CBrush *pOldBrush=dc.SelectObject(pBrush);
	//if(m_bDraw)
	//{
		/*dc.MoveTo(m_ptOld);
		dc.LineTo(point);
		m_ptOld=point;
		*/

		/*dc.SetROP2(R2_BLACK);
		dc.MoveTo(m_ptOrigin);
		//dc.LineTo(point);
		dc.LineTo(m_ptOld);
		//dc.MoveTo(m_ptOrigin);
		dc.MoveTo(m_ptOld);
		dc.LineTo(point);
		//m_ptOrigin=point;
		m_ptOld=point;
		*/
		
		//dc.Ellipse(point.x-20,point.y-20,point.x+20,point.y+20);
			
	  //}
	//dc.SelectObject(&pOldPen);
	//dc.SelectObject(&pOldBrush);
	CView::OnMouseMove(nFlags, point);
}

void CDrawPictureView::OnUpdateDot(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	if(0==m_DrawType)
	pCmdUI->SetCheck(1);
	else
	pCmdUI->SetCheck(0);
}

void CDrawPictureView::OnDot() 
{
	// TODO: Add your command handler code here
	m_DrawType=0;
}

void CDrawPictureView::OnLine() 
{
	// TODO: Add your command handler code here
	m_DrawType=1;
}

void CDrawPictureView::OnRect() 
{
	// TODO: Add your command handler code here
	m_DrawType=2;
}

void CDrawPictureView::OnEll() 
{
	// TODO: Add your command handler code here
	m_DrawType=3;
}

void CDrawPictureView::OnMenuitemset() 
{
	// TODO: Add your command handler code here
	CSettingDlg dlg;
	dlg.m_nLineWidth=m_nLineWidth;
	dlg.m_nLineStyle=m_nLineStyle;
	dlg.m_clr=m_clr;
	if(IDOK==dlg.DoModal())
	{
		m_nLineWidth=dlg.m_nLineWidth;
		m_nLineStyle=dlg.m_nLineStyle;
	}
}
void CDrawPictureView::OnMenuitemfont() 
{
	// TODO: Add your command handler code here
	CFontDialog dlg;
	if(IDOK==dlg.DoModal())
	{
		if(m_font.m_hObject)
			m_font.DeleteObject();
		m_font.CreateFontIndirect(dlg.m_cf.lpLogFont);
		m_strFontName=dlg.m_cf.lpLogFont->lfFaceName;
		Invalidate();

	}

	
}

void CDrawPictureView::OnMenuitemcolor() 
{
	// TODO: Add your command handler code here
	CColorDialog dlg;
	dlg.m_cc.Flags|=CC_RGBINIT | CC_FULLOPEN;
	dlg.m_cc.rgbResult=m_clr;
	if(IDOK==dlg.DoModal())
	{
		m_clr=dlg.m_cc.rgbResult;
	}
}

BOOL CDrawPictureView::OnEraseBkgnd(CDC* pDC) 
{
	// TODO: Add your message handler code here and/or call default
	CBitmap bitmap;
	bitmap.LoadBitmap(IDB_BITMAP1);

	BITMAP bmp;
	bitmap.GetBitmap(&bmp);

	CDC dcCompatible;
	dcCompatible.CreateCompatibleDC(pDC);

	dcCompatible.SelectObject(&bitmap);

	CRect rect;
	GetClientRect(&rect);
	//	pDC->BitBlt(0,0,rect.Width(),rect.Height(),&dcCompatible,0,0,SRCCOPY);
	pDC->StretchBlt(0,0,rect.Width(),rect.Height(),&dcCompatible,
		0,0,bmp.bmWidth,bmp.bmHeight,SRCCOPY);
	return TRUE;
	return CView::OnEraseBkgnd(pDC);
}
