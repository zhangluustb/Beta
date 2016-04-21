// DrawPictureView.cpp : implementation of the CDrawPictureView class
//

#include "stdafx.h"
#include "DrawPicture.h"

#include "DrawPictureDoc.h"
#include "DrawPictureView.h"

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
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
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
