
// baidumap.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CbaidumapApp: 
// �йش����ʵ�֣������ baidumap.cpp
//

class CbaidumapApp : public CWinApp
{
public:
	CbaidumapApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CbaidumapApp theApp;