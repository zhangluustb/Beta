// BetaCodeDoc.h : interface of the CBetaCodeDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BETACODEDOC_H__F74B7FCD_F544_4462_8024_38E1A0F8D70C__INCLUDED_)
#define AFX_BETACODEDOC_H__F74B7FCD_F544_4462_8024_38E1A0F8D70C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CBetaCodeDoc : public CDocument
{
protected: // create from serialization only
	CBetaCodeDoc();
	DECLARE_DYNCREATE(CBetaCodeDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBetaCodeDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBetaCodeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBetaCodeDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BETACODEDOC_H__F74B7FCD_F544_4462_8024_38E1A0F8D70C__INCLUDED_)
