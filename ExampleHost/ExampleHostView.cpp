
// ExampleHostView.cpp : implementation of the CExampleHostView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "ExampleHost.h"
#endif

#include "ExampleHostDoc.h"
#include "ExampleHostView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExampleHostView

IMPLEMENT_DYNCREATE(CExampleHostView, CView)

BEGIN_MESSAGE_MAP(CExampleHostView, CView)
END_MESSAGE_MAP()

// CExampleHostView construction/destruction

CExampleHostView::CExampleHostView() noexcept
{
	// TODO: add construction code here

}

CExampleHostView::~CExampleHostView()
{
}

BOOL CExampleHostView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CExampleHostView drawing

void CExampleHostView::OnDraw(CDC* /*pDC*/)
{
	CExampleHostDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}

BOOL CExampleHostView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	CLSID clsid;
	return CView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext)
		&& SUCCEEDED(IIDFromString(L"{1A12316B-249C-493F-9E9C-FD6EE986B72D}", &clsid))
		&& m_control.CreateControl(clsid, NULL, WS_VISIBLE, CRect(0, 0, 200, 200), this, 0);
}

// CExampleHostView diagnostics

#ifdef _DEBUG
void CExampleHostView::AssertValid() const
{
	CView::AssertValid();
}

void CExampleHostView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExampleHostDoc* CExampleHostView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExampleHostDoc)));
	return (CExampleHostDoc*)m_pDocument;
}
#endif //_DEBUG


// CExampleHostView message handlers
