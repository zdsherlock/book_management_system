
// book_manmagement_system_v3Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "book_manmagement_system_v3.h"
#include "book_manmagement_system_v3Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

//class CAboutDlg : public CDialogEx
//{
//public:
//	CAboutDlg();
//
//// 对话框数据
//	enum { IDD = IDD_ABOUTBOX };
//
//	protected:
//	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
//
//// 实现
//protected:
//	DECLARE_MESSAGE_MAP()
//public:
//	afx_msg void OnBnClickedButtonAdd();
//	afx_msg void OnBnClickedCancel();
//};
//
//CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
//{
//}
//
//void CAboutDlg::DoDataExchange(CDataExchange* pDX)
//{
//	CDialogEx::DoDataExchange(pDX);
//}
//
//BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
//	ON_BN_CLICKED(IDC_BUTTON_ADD, &CAboutDlg::OnBnClickedButtonAdd)
//	ON_BN_CLICKED(IDCANCEL, &CAboutDlg::OnBnClickedCancel)
//END_MESSAGE_MAP()


// Cbook_manmagement_system_v3Dlg 对话框




Cbook_manmagement_system_v3Dlg::Cbook_manmagement_system_v3Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cbook_manmagement_system_v3Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cbook_manmagement_system_v3Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cbook_manmagement_system_v3Dlg, CDialogEx)
	//ON_BN_CLICKED(IDC_BUTTON_ADD, &Cbook_manmagement_system_v3Dlg::OnBnClickedButtonAdd)
	//ON_BN_CLICKED(IDCANCEL, &Cbook_manmagement_system_v3Dlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// Cbook_manmagement_system_v3Dlg 消息处理程序

BOOL Cbook_manmagement_system_v3Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void Cbook_manmagement_system_v3Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		//CAboutDlg dlgAbout;
		//dlgAbout.DoModal();                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void Cbook_manmagement_system_v3Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR Cbook_manmagement_system_v3Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




	// TODO: 在此添加控件通知处理程序代码
	//CEDIT里取值
	//CEdit* userName;
	//CEdit* passWord;
	//sqlite3* db;
	//char* sql;
	//char *errMsg;
	//char **dbResult;
	//int nRow = 0, nColumn = 0;
	//int rc;

	////取出输入用户名
	//CString str1;
	//userName = (CEdit*)GetDlgItem(IDC_EDIT_USER_NAME); // 这个是什么语句
	//userName->GetWindowText(str1);
	//
	////取出输入密码
	//CString str2;
	//passWord = (CEdit*)GetDlgItem(IDC_EDIT_USER_NAME); 
	//passWord->GetWindowText(str2);

	// rc = sqlite3_open("password.db", &db);//打开数据库

	//if (rc)/*无法检测数据库值为空的情况*/
	//{
	//	sqlite3_close(db);  //打开失败！
	//	MessageBox(_T("数据库打开失败，请检查后再操作！"), NULL, MB_ICONSTOP);
	//	return ;
	//}
	//
	//sql = "SELECT * FROM password";//定义sql
	//
	//sqlite3_get_table(db,sql,&dbResult,&nRow,&nColumn,&errMsg);//取出数据库数据；&dbResult二维数组

	//CString cstr1(dbResult[1*nColumn]);//转译
	//CString cstr2(dbResult[1*nColumn+1]);//为什么这里没有实现取值 <zd002>
	////userName->SetWindowText(cstr1);//CString类
	////passWord->SetWindowText(cstr2);

	//if(str1 != 数据库用户名){
	//	MessageBox(_T("用户名错误"), NULL, MB_ICONSTOP);
	//}else if(str2 != 数据库密码)
	//{
	//	MessageBox(_T("用户名错误"), NULL, MB_ICONSTOP);
	//}else
	//{
	//	//关闭当前窗口，弹出管理员界面 <zd001>
	//}

	//sqlite3_free_table(dbResult); //释放内存
	//sqlite3_close(db);			 //关闭数据库
