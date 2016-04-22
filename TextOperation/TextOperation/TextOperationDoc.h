// TextOperationDoc.h : interface of the CTextOperationDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEXTOPERATIONDOC_H__69CA746B_AB41_42B4_BCDF_35F70C875E37__INCLUDED_)
#define AFX_TEXTOPERATIONDOC_H__69CA746B_AB41_42B4_BCDF_35F70C875E37__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTextOperationDoc : public CDocument
{
protected: // create from serialization only
	CTextOperationDoc();
	DECLARE_DYNCREATE(CTextOperationDoc)

// Attributes
public:
	CObArray m_obArray;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTextOperationDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual void DeleteContents();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTextOperationDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTextOperationDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEXTOPERATIONDOC_H__69CA746B_AB41_42B4_BCDF_35F70C875E37__INCLUDED_)
