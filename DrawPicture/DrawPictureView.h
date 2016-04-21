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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnUpdateDot(CCmdUI* pCmdUI);
	afx_msg void OnDot();
	afx_msg void OnLine();
	afx_msg void OnRect();
	afx_msg void OnEll();
	afx_msg void OnMenuitemset();
	afx_msg void OnMenuitemfont();
	afx_msg void OnMenuitemcolor();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CFont m_font;
	CString m_strFontName;
	COLORREF m_clr;
	int m_DrawType;
	CPoint m_ptOrigin;
	BOOL m_bDraw;
	CPoint m_ptOld;
	int m_nLineStyle;
	UINT m_nLineWidth;
};

#ifndef _DEBUG  // debug version in DrawPictureView.cpp
inline CDrawPictureDoc* CDrawPictureView::GetDocument()
   { return (CDrawPictureDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAWPICTUREVIEW_H__35278D09_B5E4_499E_94CC_92C7AD208059__INCLUDED_)
