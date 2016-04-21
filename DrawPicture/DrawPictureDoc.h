// DrawPictureDoc.h : interface of the CDrawPictureDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DRAWPICTUREDOC_H__48066FFE_3EBA_4539_968F_0B2674EF4AAC__INCLUDED_)
#define AFX_DRAWPICTUREDOC_H__48066FFE_3EBA_4539_968F_0B2674EF4AAC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDrawPictureDoc : public CDocument
{
protected: // create from serialization only
	CDrawPictureDoc();
	DECLARE_DYNCREATE(CDrawPictureDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDrawPictureDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDrawPictureDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDrawPictureDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAWPICTUREDOC_H__48066FFE_3EBA_4539_968F_0B2674EF4AAC__INCLUDED_)
