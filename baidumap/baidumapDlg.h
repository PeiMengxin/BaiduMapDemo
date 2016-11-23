
// baidumapDlg.h : 头文件
//

#pragma once
#include "CWebBrowser2.h"
#include "WebPage.h"
#include "afxwin.h"


// CbaidumapDlg 对话框
class CbaidumapDlg : public CDialogEx
{
// 构造
public:
	CbaidumapDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_BAIDUMAP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
