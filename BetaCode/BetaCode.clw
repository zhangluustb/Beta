; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTestDlg2
LastTemplate=CButton
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "BetaCode.h"
LastPage=0

ClassCount=9
Class1=CBetaCodeApp
Class2=CBetaCodeDoc
Class3=CBetaCodeView
Class4=CMainFrame

ResourceCount=6
Resource1=IDR_MENU1
Class5=CAboutDlg
Resource2=IDR_TOOLBAR1
Resource3=IDD_ABOUTBOX
Class6=CSplashWnd
Resource4=IDR_MAINFRAME
Class7=CTestDlg
Resource5=IDD_DIALOG1
Class8=CTestDlg2
Class9=CWinXinBtn
Resource6=IDD_DIALOG2

[CLS:CBetaCodeApp]
Type=0
HeaderFile=BetaCode.h
ImplementationFile=BetaCode.cpp
Filter=N

[CLS:CBetaCodeDoc]
Type=0
HeaderFile=BetaCodeDoc.h
ImplementationFile=BetaCodeDoc.cpp
Filter=N

[CLS:CBetaCodeView]
Type=0
HeaderFile=BetaCodeView.h
ImplementationFile=BetaCodeView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=BetaCode.cpp
ImplementationFile=BetaCode.cpp
Filter=D
LastObject=ID_EDIT_CUT

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=IDM_NEWTOOLBAR
Command17=ID_APP_ABOUT
Command18=IDM_DLG1
Command19=IDM_DLG2
CommandCount=19

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_MENU1]
Type=1
Class=?
Command1=ID_MENUITEM32771
Command2=ID_MENUITEM32772
Command3=ID_MENUITEM32773
Command4=ID_MENUITEM32774
Command5=ID_MENUITEM32775
Command6=ID_MENUITEM32776
Command7=ID_MENUITEM32777
Command8=ID_MENUITEM32778
Command9=ID_MENUITEM32779
Command10=ID_MENUITEM32780
CommandCount=10

[TB:IDR_TOOLBAR1]
Type=1
Class=?
Command1=IDT_0
Command2=IDT_2
Command3=IDT_2
CommandCount=3

[CLS:CSplashWnd]
Type=0
HeaderFile=SplashWnd.h
ImplementationFile=SplashWnd.cpp
BaseClass=CView
Filter=C
LastObject=CSplashWnd

[DLG:IDD_DIALOG1]
Type=1
Class=CTestDlg
ControlCount=11
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_BTN_ADD,button,1342242816
Control4=IDC_BUTTON2,button,1342242816
Control5=IDC_STATIC2,static,1342308608
Control6=IDC_STATIC1,static,1342308608
Control7=IDC_STATIC3,static,1342308608
Control8=IDC_EDIT1,edit,1350631552
Control9=IDC_EDIT2,edit,1350631552
Control10=IDC_EDIT3,edit,1350631552
Control11=IDC_SEPARATOR,static,1342177287

[CLS:CTestDlg]
Type=0
HeaderFile=TestDlg.h
ImplementationFile=TestDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=CTestDlg2
ControlCount=2
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_BUTTON2,button,1342242816

[CLS:CTestDlg2]
Type=0
HeaderFile=TestDlg2.h
ImplementationFile=TestDlg2.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_BUTTON1
VirtualFilter=dWC

[CLS:CWinXinBtn]
Type=0
HeaderFile=WinXinBtn.h
ImplementationFile=WinXinBtn.cpp
BaseClass=CButton
Filter=W
LastObject=CWinXinBtn
VirtualFilter=BWC

