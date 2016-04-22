// TextOperationView.cpp : implementation of the CTextOperationView class
//

#include "stdafx.h"
#include "TextOperation.h"

#include "TextOperationDoc.h"
#include "TextOperationView.h"
#include "Graph.h"
#include "TextOperationDoc.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTextOperationView

IMPLEMENT_DYNCREATE(CTextOperationView, CView)

BEGIN_MESSAGE_MAP(CTextOperationView, CView)
	//{{AFX_MSG_MAP(CTextOperationView)
	ON_WM_CREATE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_CHAR()
	ON_WM_TIMER()
	ON_COMMAND(IDM_WRITE, OnWrite)
	ON_COMMAND(IDM_REG_WRITE, OnRegWrite)
	ON_COMMAND(IDM_REG_READ, OnRegRead)
	ON_COMMAND(IDM_READ, OnRead)
	ON_COMMAND(IDM_DOT, OnDot)
	ON_COMMAND(IDM_CIRCLE, OnCircle)
	ON_COMMAND(IDM_LINE, OnLine)
	ON_COMMAND(IDM_RECT, OnRect)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTextOperationView construction/destruction

CTextOperationView::CTextOperationView()
{
	// TODO: add construction code here
	m_strLine="";
	m_ptOrigin=0;
	m_nWidth=0;
	m_nDrawType=-1;
}

CTextOperationView::~CTextOperationView()
{
}

BOOL CTextOperationView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTextOperationView drawing

void CTextOperationView::OnDraw(CDC* pDC)
{
	CTextOperationDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CString str;
	str="维新科学技术培训中心";
	pDC->TextOut(50,50,str);

	CSize sz=pDC->GetTextExtent(str);

	str.LoadString(IDS_WEIXIN);
	pDC->TextOut(0,200,str);

	pDC->BeginPath();
	pDC->Rectangle(50,50,50+sz.cx,50+sz.cy);
	pDC->EndPath();
	pDC->SelectClipPath(RGN_DIFF);
	for(int i=0;i<300;i+=10)
	{
		pDC->MoveTo(0,i);
		pDC->LineTo(300,i);
		pDC->MoveTo(i,0);
		pDC->LineTo(i,300);
	}
	//////////////////////////////////////////////////////////////////////////
	int nCount;
	//nCount=m_obArray.GetSize();
	nCount=pDoc->m_obArray.GetSize();
	for(int ii=0;ii<nCount;ii++)
	{
		//((CGraph*)m_obArray.GetAt(ii))->Draw(pDC);
		((CGraph*)pDoc->m_obArray.GetAt(ii))->Draw(pDC);
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTextOperationView printing

BOOL CTextOperationView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTextOperationView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTextOperationView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTextOperationView diagnostics

#ifdef _DEBUG
void CTextOperationView::AssertValid() const
{
	CView::AssertValid();
}

void CTextOperationView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTextOperationDoc* CTextOperationView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTextOperationDoc)));
	return (CTextOperationDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTextOperationView message handlers

int CTextOperationView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);

	CreateSolidCaret(tm.tmAveCharWidth/8,tm.tmHeight);

	
	bitmap.LoadBitmap(IDB_BITMAP1);
	CreateCaret(&bitmap);
	ShowCaret();

	SetTimer(1,100,NULL);
	return 0;
}

void CTextOperationView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	SetCaretPos(point);
	m_strLine.Empty();
	m_ptOrigin=point;
	CView::OnLButtonDown(nFlags, point);
}

void CTextOperationView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(this);
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	dc.SelectObject(pBrush);
	
	switch(m_nDrawType)
	{
	case 1:
		dc.SetPixel(point,RGB(0,0,0));
		break;
	case 2:
		dc.MoveTo(m_ptOrigin);
		dc.LineTo(point);
		break;
	case 3:
		dc.Rectangle(CRect(m_ptOrigin,point));
		break;
	case 4:
		dc.Ellipse(CRect(m_ptOrigin,point));
		break;
	}
	CGraph *pGraph=new CGraph(m_nDrawType,m_ptOrigin,point);
	CTextOperationDoc *pDoc=GetDocument();
	pDoc->m_obArray.Add(pGraph);
	//pDoc->m_obArray.Add(pGraph);
	CView::OnLButtonUp(nFlags, point);
}

void CTextOperationView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(this);
	CFont font;
	font.CreatePointFont(300,"华文行楷",NULL);
	CFont *pOldFont=dc.SelectObject(&font);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	if(0x0d==nChar)
	{
		m_strLine.Empty();
		m_ptOrigin.y+=tm.tmHeight;
	}
	else if(0x08==nChar)
	{
		COLORREF clr=dc.SetTextColor(dc.GetBkColor());
		dc.TextOut(m_ptOrigin.x,m_ptOrigin.y,m_strLine);
		m_strLine=m_strLine.Left(m_strLine.GetLength()-1);
		dc.SetTextColor(clr);
	}
	else
	{
		m_strLine+=nChar;
	}
	CSize sz=dc.GetTextExtent(m_strLine);

	CPoint pt;
	pt.x=m_ptOrigin.x+sz.cx;
	pt.y=m_ptOrigin.y;

	SetCaretPos(pt);
	dc.TextOut(m_ptOrigin.x,m_ptOrigin.y,m_strLine);

	dc.SelectObject(pOldFont);
	CView::OnChar(nChar, nRepCnt, nFlags);
}

void CTextOperationView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	m_nWidth+=5;

	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	CRect rect;
	rect.left=0;
	rect.top=200;
	rect.right=m_nWidth;
	rect.bottom=rect.top+tm.tmHeight;

	dc.SetTextColor(RGB(255,0,0));
	CString str;
	str.LoadString(IDS_WEIXIN);
	dc.DrawText(str,rect,DT_LEFT);

	rect.top=150;
	rect.bottom=rect.top+tm.tmHeight;
	dc.DrawText(str,rect,DT_RIGHT);

	CSize sz=dc.GetTextExtent(str);
	if(m_nWidth>sz.cx)
	{
		m_nWidth=0;
		dc.SetTextColor(RGB(0,0,255));
		dc.TextOut(0,200,str);
	}

	CView::OnTimer(nIDEvent);
}

void CTextOperationView::OnWrite() 
{
	// TODO: Add your command handler code here
	/*CFileDialog fileDlg(FALSE);
	fileDlg.m_ofn.lpstrTitle="我的文件保存对话框";
	fileDlg.m_ofn.lpstrFilter="Text Files(*.txt)\0*.txt\0All Files(*.*)\0*.*\0\0";
	fileDlg.m_ofn.lpstrDefExt="txt";
	if(IDOK==fileDlg.DoModal())
	{
		CFile file(fileDlg.GetFileName(),CFile::modeCreate | CFile::modeWrite);
		file.Write("http://www.sunxin.org",strlen("http://www.sunxin.org"));
		file.Close();
	}*/
	//////////////////////////////////////////////////////////////////////////
	//CArchive 对象提供了一个类型安全缓冲机制，用于将可序列化对象写入 CFile 对象或从中读取可序列化对象。
	//通常，CFile 对象表示磁盘文件；但是，它也可以是表示“剪贴板”的内存文件（CSharedFile 对象）
	//////////////////////////////////////////////////////////////////////////
	
	CFile file("1.txt",CFile::modeCreate | CFile::modeWrite);
	CArchive ar(&file,CArchive::store);
	int i=4;
	char ch='a';
	float f=1.3f;
	CString str("http://www.sunxin.org");
	ar<<i<<ch<<f<<str;

}

void CTextOperationView::OnRegWrite() 
{
	// TODO: Add your command handler code here
	HKEY hKey;
	DWORD dwAge=30;
	RegCreateKey(HKEY_LOCAL_MACHINE,"Software\\http://www.sunxin.org\\admin",&hKey);
	RegSetValue(hKey,NULL,REG_SZ,"zhangsan",strlen("zhangsan"));
	RegSetValueEx(hKey,"age",0,REG_DWORD,(CONST BYTE*)&dwAge,4);
	RegCloseKey(hKey);
}

void CTextOperationView::OnRegRead() 
{
	// TODO: Add your command handler code here
	HKEY hKey;
	RegOpenKey(HKEY_LOCAL_MACHINE,"Software\\http://www.sunxin.org\\admin",&hKey);
	DWORD dwType;
	DWORD dwValue;
	DWORD dwAge;
	RegQueryValueEx(hKey,"age",0,&dwType,(LPBYTE)&dwAge,&dwValue);
	CString str;
	str.Format("age=%d",dwAge);
	MessageBox(str);
}

void CTextOperationView::OnRead() 
{
	// TODO: Add your command handler code here
	/*CFileDialog fileDlg(TRUE);
	fileDlg.m_ofn.lpstrTitle="我的文件打开对话框";
	fileDlg.m_ofn.lpstrFilter="Text Files(*.txt)\0*.txt\0All Files(*.*)\0*.*\0\0";
	
	if(IDOK==fileDlg.DoModal())
	{
		CFile file(fileDlg.GetFileName(),CFile::modeRead);
		char *pBuf;
		DWORD dwFileLen;
		dwFileLen=file.GetLength();
		pBuf=new char[dwFileLen+1];
		pBuf[dwFileLen]=0;
		file.Read(pBuf,dwFileLen);
		file.Close();
		MessageBox(pBuf);
	}*/
	CFile file("1.txt",CFile::modeRead);
	CArchive ar(&file,CArchive::load);
	int i;
	char ch;
	float f;
	CString str;
	CString strResult;
	ar>>i>>ch>>f>>str;
	strResult.Format("%d,%c,%f,%s",i,ch,f,str);
	MessageBox(strResult);
}

void CTextOperationView::OnDot() 
{
	// TODO: Add your command handler code here
	m_nDrawType=1;
}

void CTextOperationView::OnCircle() 
{
	// TODO: Add your command handler code here
	m_nDrawType=4;
}

void CTextOperationView::OnLine() 
{
	// TODO: Add your command handler code here
	m_nDrawType=2;
}

void CTextOperationView::OnRect() 
{
	// TODO: Add your command handler code here
	m_nDrawType=3;
}
