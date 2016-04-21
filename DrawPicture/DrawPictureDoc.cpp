// DrawPictureDoc.cpp : implementation of the CDrawPictureDoc class
//

#include "stdafx.h"
#include "DrawPicture.h"

#include "DrawPictureDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDrawPictureDoc

IMPLEMENT_DYNCREATE(CDrawPictureDoc, CDocument)

BEGIN_MESSAGE_MAP(CDrawPictureDoc, CDocument)
	//{{AFX_MSG_MAP(CDrawPictureDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDrawPictureDoc construction/destruction

CDrawPictureDoc::CDrawPictureDoc()
{
	// TODO: add one-time construction code here

}

CDrawPictureDoc::~CDrawPictureDoc()
{
}

BOOL CDrawPictureDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CDrawPictureDoc serialization

void CDrawPictureDoc::Serialize(CArchive& ar)
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
// CDrawPictureDoc diagnostics

#ifdef _DEBUG
void CDrawPictureDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDrawPictureDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDrawPictureDoc commands
