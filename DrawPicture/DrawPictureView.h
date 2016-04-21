// DrawPictureView.h : interface of the CDrawPictureView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DRAWPICTUREVIEW_H__35278D09_B5E4_499E_94CC_92C7AD208059__INCLUDED_)
#define AFX_DRAWPICTUREVIEW_H__35278D09_B5E4_499E_94CC_92C7AD208059__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDrawPictureView : public CView
{
protected: // create from serialization only
	CDrawPictureView();
	DECLARE_DYNCREATE(CDrawPictureView)

// Attributes
public:
	CDrawPictureDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDrawPictureView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDrawPictureView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDrawPictureView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in DrawPictureView.cpp
inline CDrawPictureDoc* CDrawPictureView::GetDocument()
   { return (CDrawPictureDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAWPICTUREVIEW_H__35278D09_B5E4_499E_94CC_92C7AD208059__INCLUDED_)
