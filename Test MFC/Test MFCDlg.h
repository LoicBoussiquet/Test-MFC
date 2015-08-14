
// Test MFCDlg.h : fichier d'en-t�te
//

#pragma once


// bo�te de dialogue CTestMFCDlg
class CTestMFCDlg : public CDialogEx
{
// Construction
public:
	CTestMFCDlg(CWnd* pParent = NULL);	// constructeur standard

// Donn�es de bo�te de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Prise en charge de DDX/DDV


// Impl�mentation
protected:
	HICON m_hIcon;
	BOOL Checked;
	bool Clicked;
	CString TexteEditBox;
	CComboBox* ComboBox;	

	// Fonctions g�n�r�es de la table des messages	
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnBnClickedBtValider();
	afx_msg void OnBnClickedCheckBox();
	afx_msg void OnBnClickedRadioBox();	
	afx_msg void OnBnClickedRadioBox2();
	bool Clicked2;
};
