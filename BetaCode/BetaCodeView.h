// BetaCodeView.h : interface of the CBetaCodeView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BETACODEVIEW_H__BF986326_C0AE_455B_9433_D6E65E72B269__INCLUDED_)
#define AFX_BETACODEVIEW_H__BF986326_C0AE_455B_9433_D6E65E72B269__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CBetaCodeView : public CView
{
protected: // create from serialization only
	CBetaCodeView();
	DECLARE_DYNCREATE(CBetaCodeView)

// Attributes
public:
	CBetaCodeDoc* GetDocument();
	CStringArray m_strArray;
private:
	CString m_strLine;
	CMenu m_menu;
	int m_nIndex;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBetaCodeView)
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
	virtual ~CBetaCodeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBetaCodeView)
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//}}AFX_MSG
	afx_msg void OnPhone1();
	afx_msg void OnPhone2();
	afx_msg void OnPhone3();
	afx_msg void OnPhone4();
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in BetaCodeView.cpp
inline CBetaCodeDoc* CBetaCodeView::GetDocument()
   { return (CBetaCodeDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BETACODEVIEW_H__BF986326_C0AE_455B_9433_D6E65E72B269__INCLUDED_)
