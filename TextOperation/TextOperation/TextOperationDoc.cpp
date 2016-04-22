// TextOperationDoc.cpp : implementation of the CTextOperationDoc class
//

#include "stdafx.h"
#include "TextOperation.h"

#include "TextOperationDoc.h"
#include "TextOperationView.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTextOperationDoc

IMPLEMENT_DYNCREATE(CTextOperationDoc, CDocument)

BEGIN_MESSAGE_MAP(CTextOperationDoc, CDocument)
	//{{AFX_MSG_MAP(CTextOperationDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTextOperationDoc construction/destruction

CTextOperationDoc::CTextOperationDoc()
{
	// TODO: add one-time construction code here

}

CTextOperationDoc::~CTextOperationDoc()
{
}

BOOL CTextOperationDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	SetTitle("http://www.baidu.org");
	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTextOperationDoc serialization

void CTextOperationDoc::Serialize(CArchive& ar)
{
	POSITION pos=GetFirstViewPosition();
	CTextOperationView *pView=(CTextOperationView*)GetNextView(pos);
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
	m_obArray.Serialize(ar);
}

/////////////////////////////////////////////////////////////////////////////
// CTextOperationDoc diagnostics

#ifdef _DEBUG
void CTextOperationDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTextOperationDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTextOperationDoc commands

void CTextOperationDoc::DeleteContents() 
{
	// TODO: Add your specialized code here and/or call the base class
	int nCount;
	nCount=m_obArray.GetSize();
	/*for(int i=0;i<nCount;i++)
	{
		delete m_obArray.GetAt(i);
		//m_obArray.RemoveAt(i);
	}
	m_obArray.RemoveAll();*/
	while(nCount--)
	{
		delete m_obArray.GetAt(nCount);
		m_obArray.RemoveAt(nCount);
	}
	CDocument::DeleteContents();
}
