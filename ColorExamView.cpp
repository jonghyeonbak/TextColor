
// ColorExamView.cpp : CColorExamView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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
	// 표준 인쇄 명령입니다.
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

// CColorExamView 생성/소멸

CColorExamView::CColorExamView()
{
	// TODO: 여기에 생성 코드를 추가합니다.
		m_TextColor = RGB(0, 0, 0);
		m_BkColor = RGB(255, 255, 255);
}

CColorExamView::~CColorExamView()
{
}

BOOL CColorExamView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CColorExamView 그리기

void CColorExamView::OnDraw(CDC* pDC)
{
	CColorExamDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
	CRect rect;
	GetClientRect(&rect);
	pDC->SetTextColor(m_TextColor);
	pDC->SetBkColor(m_BkColor);
	pDC->DrawText(_T("메뉴에 대한 학습"), 
			&rect,
			DT_SINGLELINE | DT_CENTER | DT_VCENTER);
}


// CColorExamView 인쇄

BOOL CColorExamView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CColorExamView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CColorExamView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CColorExamView 진단

#ifdef _DEBUG
void CColorExamView::AssertValid() const
{
	CView::AssertValid();
}

void CColorExamView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CColorExamDoc* CColorExamView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CColorExamDoc)));
	return (CColorExamDoc*)m_pDocument;
}
#endif //_DEBUG


// CColorExamView 메시지 처리기


void CColorExamView::OnTextBlack()
{
		// TODO: 여기에 명령 처리기 코드를 추가합니다.
	//	MessageBox(_T("검정색"));
		m_TextColor = RGB(0, 0, 0);
		Invalidate();
}


void CColorExamView::OnTextRed()
{
		// TODO: 여기에 명령 처리기 코드를 추가합니다.
		//MessageBox(_T("빨간색"));
		m_TextColor = RGB(255, 0, 0);
		Invalidate();                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
}


void CColorExamView::OnTextGreen()
{
		// TODO: 여기에 명령 처리기 코드를 추가합니다.
		//MessageBox(_T("초록색"));
		m_TextColor = RGB(0, 255, 0);
		Invalidate();
}


void CColorExamView::OnTextBlue()
{
		// TODO: 여기에 명령 처리 기 코드를추가합니다.
		//MessageBox(_T("파란색"));
		m_TextColor = RGB(0, 0, 255);
		Invalidate();
}


void CColorExamView::OnUpdateTextBlack(CCmdUI *pCmdUI)
{
		// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
		pCmdUI->SetCheck(m_TextColor == RGB(0, 0, 0));
}


void CColorExamView::OnUpdateTextRed(CCmdUI *pCmdUI)
{
		// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
		pCmdUI->SetCheck(m_TextColor == RGB(255, 0, 0));
}


void CColorExamView::OnUpdateTextBlue(CCmdUI *pCmdUI)
{
		// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
		pCmdUI->SetCheck(m_TextColor == RGB(0, 0, 255));
}


void CColorExamView::OnUpdateTextGreen(CCmdUI *pCmdUI)
{
		// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
		pCmdUI->SetCheck(m_TextColor == RGB(0, 255, 0));
}


void CColorExamView::OnContextMenu(CWnd* pWnd, CPoint point)
{
		// TODO: 여기에 메시지 처리기 코드를 추가합니다.
		//MessageBox(_T("마우스 오른쪽 버튼 클릭"));
		CMenu menu;
		menu.LoadMenuW(IDR_MAINFRAME);
		CMenu *pContextMenu = pContextMenu = menu.GetSubMenu(4);
		pContextMenu->TrackPopupMenu(TPM_LEFTALIGN, point.x, point.y, this);
}


void CColorExamView::OnBlackBlack()
{
		// TODO: 여기에 명령 처리기 코드를 추가합니다.
		m_BkColor = RGB(0, 0, 0);
		Invalidate();
}


void CColorExamView::OnBlackRed()
{
		// TODO: 여기에 명령 처리기 코드를 추가합니다.
		m_BkColor = RGB(255, 0, 0);
		Invalidate();
}


void CColorExamView::OnBlackGreen()
{
		// TODO: 여기에 명령 처리기 코드를 추가합니다.
		m_BkColor = RGB(0, 0, 255);
		Invalidate();
}


void CColorExamView::OnBlackBule()
{
		// TODO: 여기에 명령 처리기 코드를 추가합니다.
		m_BkColor = RGB(0, 255, 0);
		Invalidate();
}
