
// ColorExamView.h : CColorExamView Ŭ������ �������̽�
//

#pragma once


class CColorExamView : public CView
{
protected: // serialization������ ��������ϴ�.
	CColorExamView();
	DECLARE_DYNCREATE(CColorExamView)

// Ư���Դϴ�.
public:
	CColorExamDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CColorExamView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
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

#ifndef _DEBUG  // ColorExamView.cpp�� ����� ����
inline CColorExamDoc* CColorExamView::GetDocument() const
   { return reinterpret_cast<CColorExamDoc*>(m_pDocument); }
#endif

