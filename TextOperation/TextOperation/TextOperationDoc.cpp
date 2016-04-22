// TextOperationDoc.cpp : implementation of the CTextOperationDoc class
//

#include "stdafx.h"
#include "TextOperation.h"

#include "TextOperationDoc.h"

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

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTextOperationDoc serialization

void CTextOperationDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
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
