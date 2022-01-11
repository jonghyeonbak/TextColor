
// ColorExamView.cpp : CColorExamView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "ColorExam.h"
#endif

#include "ColorExamDoc.h"
#include "ColorExamView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CColorExamView

IMPLEMENT_DYNCREATE(CColorExamView, CView)

BEGIN_MESSAGE_MAP(CColorExamView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
		ON_COMMAND(ID_TEXT_BLACK, &CColorExamView::OnTextBlack)
		ON_COMMAND(ID_TEXT_RED, &CColorExamView::OnTextRed)
		ON_COMMAND(ID_TEXT_GREEN, &CColorExamView::OnTextGreen)
		ON_COMMAND(ID_TEXT_BLUE, &CColorExamView::OnTextBlue)
		ON_UPDATE_COMMAND_UI(ID_TEXT_BLACK, &CColorExamView::OnUpdateTextBlack)
		ON_UPDATE_COMMAND_UI(ID_TEXT_RED, &CColorExamView::OnUpdateTextRed)
		ON_UPDATE_COMMAND_UI(ID_TEXT_BLUE, &CColorExamView::OnUpdateTextBlue)
		ON_UPDATE_COMMAND_UI(ID_TEXT_GREEN, &CColorExamView::OnUpdateTextGreen)
		ON_WM_CONTEXTMENU()
		ON_COMMAND(ID_BLACK_BLACK, &CColorExamView::OnBlackBlack)
		ON_COMMAND(ID_BLACK_RED, &CColorExamView::OnBlackRed)
		ON_COMMAND(ID_BLACK_GREEN, &CColorExamView::OnBlackGreen)
		ON_COMMAND(ID_BLACK_BULE, &CColorExamView::OnBlackBule)
END_MESSAGE_MAP()

// CColorExamView ����/�Ҹ�

CColorExamView::CColorExamView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
		m_TextColor = RGB(0, 0, 0);
		m_BkColor = RGB(255, 255, 255);
}

CColorExamView::~CColorExamView()
{
}

BOOL CColorExamView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CColorExamView �׸���

void CColorExamView::OnDraw(CDC* pDC)
{
	CColorExamDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
	CRect rect;
	GetClientRect(&rect);
	pDC->SetTextColor(m_TextColor);
	pDC->SetBkColor(m_BkColor);
	pDC->DrawText(_T("�޴��� ���� �н�"), 
			&rect,
			DT_SINGLELINE | DT_CENTER | DT_VCENTER);
}


// CColorExamView �μ�

BOOL CColorExamView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CColorExamView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CColorExamView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CColorExamView ����

#ifdef _DEBUG
void CColorExamView::AssertValid() const
{
	CView::AssertValid();
}

void CColorExamView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CColorExamDoc* CColorExamView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CColorExamDoc)));
	return (CColorExamDoc*)m_pDocument;
}
#endif //_DEBUG


// CColorExamView �޽��� ó����


void CColorExamView::OnTextBlack()
{
		// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	//	MessageBox(_T("������"));
		m_TextColor = RGB(0, 0, 0);
		Invalidate();
}


void CColorExamView::OnTextRed()
{
		// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
		//MessageBox(_T("������"));
		m_TextColor = RGB(255, 0, 0);
		Invalidate();                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
}


void CColorExamView::OnTextGreen()
{
		// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
		//MessageBox(_T("�ʷϻ�"));
		m_TextColor = RGB(0, 255, 0);
		Invalidate();
}


void CColorExamView::OnTextBlue()
{
		// TODO: ���⿡ ��� ó�� �� �ڵ带�߰��մϴ�.
		//MessageBox(_T("�Ķ���"));
		m_TextColor = RGB(0, 0, 255);
		Invalidate();
}


void CColorExamView::OnUpdateTextBlack(CCmdUI *pCmdUI)
{
		// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
		pCmdUI->SetCheck(m_TextColor == RGB(0, 0, 0));
}


void CColorExamView::OnUpdateTextRed(CCmdUI *pCmdUI)
{
		// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
		pCmdUI->SetCheck(m_TextColor == RGB(255, 0, 0));
}


void CColorExamView::OnUpdateTextBlue(CCmdUI *pCmdUI)
{
		// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
		pCmdUI->SetCheck(m_TextColor == RGB(0, 0, 255));
}


void CColorExamView::OnUpdateTextGreen(CCmdUI *pCmdUI)
{
		// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
		pCmdUI->SetCheck(m_TextColor == RGB(0, 255, 0));
}


void CColorExamView::OnContextMenu(CWnd* pWnd, CPoint point)
{
		// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
		//MessageBox(_T("���콺 ������ ��ư Ŭ��"));
		CMenu menu;
		menu.LoadMenuW(IDR_MAINFRAME);
		CMenu *pContextMenu = pContextMenu = menu.GetSubMenu(4);
		pContextMenu->TrackPopupMenu(TPM_LEFTALIGN, point.x, point.y, this);
}


void CColorExamView::OnBlackBlack()
{
		// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
		m_BkColor = RGB(0, 0, 0);
		Invalidate();
}


void CColorExamView::OnBlackRed()
{
		// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
		m_BkColor = RGB(255, 0, 0);
		Invalidate();
}


void CColorExamView::OnBlackGreen()
{
		// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
		m_BkColor = RGB(0, 0, 255);
		Invalidate();
}


void CColorExamView::OnBlackBule()
{
		// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
		m_BkColor = RGB(0, 255, 0);
		Invalidate();
}
