
// ExampleHostView.h : interface of the CExampleHostView class
//

#pragma once


class CExampleHostView : public CView
{
protected: // create from serialization only
	CExampleHostView() noexcept;
	DECLARE_DYNCREATE(CExampleHostView)

// Attributes
public:
	CExampleHostDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CExampleHostView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	CWnd m_control;
	BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL) override;

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ExampleHostView.cpp
inline CExampleHostDoc* CExampleHostView::GetDocument() const
   { return reinterpret_cast<CExampleHostDoc*>(m_pDocument); }
#endif

