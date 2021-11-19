
// AddCalcuDlg.h : 头文件
//
#pragma once
#include "TipDlg.h"

// CAddCalcuDlg 对话框
class CAddCalcuDlg : public CDialogEx
{
// 构造
public:
	CAddCalcuDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_ADDCALCU_DIALOG };

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
	double m_editSummand;
	double m_editAddend;
	double m_editSum;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedAddButton();
};
