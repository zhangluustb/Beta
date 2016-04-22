// TextOperationView.h : interface of the CTextOperationView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEXTOPERATIONVIEW_H__975BE298_9EB0_41B9_9CE0_E01ABFBCD5D2__INCLUDED_)
#define AFX_TEXTOPERATIONVIEW_H__975BE298_9EB0_41B9_9CE0_E01ABFBCD5D2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTextOperationView : public CView
{
protected: // create from serialization only
	CTextOperationView();
	DECLARE_DYNCREATE(CTextOperationView)

// Attributes
public:
	CTextOperationDoc* GetDocument();
	int m_nWidth;
	CPoint m_ptOrigin;
	CString m_strLine;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTextOperationView)
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
	virtual ~CTextOperationView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTextOperationView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnWrite();
	afx_msg void OnRegWrite();
	afx_msg void OnRegRead();
	afx_msg void OnRead();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CBitmap bitmap;
};

#ifndef _DEBUG  // debug version in TextOperationView.cpp
inline CTextOperationDoc* CTextOperationView::GetDocument()
   { return (CTextOperationDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEXTOPERATIONVIEW_H__975BE298_9EB0_41B9_9CE0_E01ABFBCD5D2__INCLUDED_)
