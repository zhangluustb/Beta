// BetaCodeDoc.cpp : implementation of the CBetaCodeDoc class
//

#include "stdafx.h"
#include "BetaCode.h"

#include "BetaCodeDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBetaCodeDoc

IMPLEMENT_DYNCREATE(CBetaCodeDoc, CDocument)

BEGIN_MESSAGE_MAP(CBetaCodeDoc, CDocument)
	//{{AFX_MSG_MAP(CBetaCodeDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBetaCodeDoc construction/destruction

CBetaCodeDoc::CBetaCodeDoc()
{
	// TODO: add one-time construction code here

}

CBetaCodeDoc::~CBetaCodeDoc()
{
}

BOOL CBetaCodeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CBetaCodeDoc serialization

void CBetaCodeDoc::Serialize(CArchive& ar)
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
// CBetaCodeDoc diagnostics

#ifdef _DEBUG
void CBetaCodeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBetaCodeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBetaCodeDoc commands
