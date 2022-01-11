
// ColorExamView.h : CColorExamView 클래스의 인터페이스
//

#pragma once


class CColorExamView : public CView
{
protected: // serialization에서만 만들어집니다.
	CColorExamView();
	DECLARE_DYNCREATE(CColorExamView)

// 특성입니다.
public:
	CColorExamDoc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CColorExamView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
		afx_msg void OnTextBlack();
		afx_msg void OnTextRed();
		COLORREF m_TextColor;
		afx_msg void OnTextGreen();
		afx_msg void OnTextBlue();
		afx_msg void OnUpdateTextBlack(CCmdUI *pCmdUI);
		afx_msg void OnUpdateTextRed(CCmdUI *pCmdUI);
		afx_msg void OnUpdateTextBlue(CCmdUI *pCmdUI);
		afx_msg void OnUpdateTextGreen(CCmdUI *pCmdUI);
		afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
		afx_msg void OnBlackBlack();
		afx_msg void OnBlackRed();
		afx_msg void OnBlackGreen();
		afx_msg void OnBlackBule();
		COLORREF m_BkColor;
};

#ifndef _DEBUG  // ColorExamView.cpp의 디버그 버전
inline CColorExamDoc* CColorExamView::GetDocument() const
   { return reinterpret_cast<CColorExamDoc*>(m_pDocument); }
#endif

