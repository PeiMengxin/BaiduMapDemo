
// baidumapDlg.h : ͷ�ļ�
//

#pragma once
#include "CWebBrowser2.h"
#include "WebPage.h"
#include "afxwin.h"


// CbaidumapDlg �Ի���
class CbaidumapDlg : public CDialogEx
{
// ����
public:
	CbaidumapDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_BAIDUMAP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CWebBrowser2 m_webbrowser;
	CWebPage m_webpage;
	afx_msg void OnBnClickedButton1();
	CEdit m_edit_lng;
	CEdit m_edit_lat;
	CString m_lng;
	CString m_lat;
};
