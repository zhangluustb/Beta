; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CProp3
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "betacode.h"
LastPage=0

ClassCount=14
Class1=CBetaCodeApp
Class2=CAboutDlg
Class3=CBetaCodeDoc
Class4=CBetaCodeView
Class5=CMainFrame
Class6=CProp1
Class7=CProp2
Class8=CProp3
Class9=CPropSheet
Class10=CSplashWnd
Class11=CTestDlg
Class12=CTestDlg2
Class13=CWeixinBtn
Class14=CWinXinBtn

ResourceCount=9
Resource1=IDD_PROP2
Resource2=IDR_MAINFRAME
Resource3=IDD_DIALOG2
Resource4=IDD_DIALOG1
Resource5=IDR_TOOLBAR1
Resource6=IDR_MENU1
Resource7=IDD_ABOUTBOX
Resource8=IDD_PROP1
Resource9=IDD_PROP3

[CLS:CBetaCodeApp]
Type=0
BaseClass=CWinApp
HeaderFile=BetaCode.h
ImplementationFile=BetaCode.cpp

[CLS:CAboutDlg]
Type=0
BaseClass=CDialog
HeaderFile=BetaCode.cpp
ImplementationFile=BetaCode.cpp
LastObject=CAboutDlg

[CLS:CBetaCodeDoc]
Type=0
BaseClass=CDocument
HeaderFile=BetaCodeDoc.h
ImplementationFile=BetaCodeDoc.cpp

[CLS:CBetaCodeView]
Type=0
BaseClass=CView
HeaderFile=BetaCodeView.h
ImplementationFile=BetaCodeView.cpp

[CLS:CMainFrame]
Type=0
BaseClass=CFrameWnd
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp

[CLS:CProp1]
Type=0
BaseClass=CPropertyPage
HeaderFile=Prop11.h
ImplementationFile=Prop11.cpp
LastObject=IDC_RADIO1
Filter=D
VirtualFilter=idWC

[CLS:CProp2]
Type=0
BaseClass=CPropertyPage
HeaderFile=Prop21.h
ImplementationFile=Prop21.cpp
Filter=D
VirtualFilter=idWC

[CLS:CProp3]
Type=0
BaseClass=CPropertyPage
HeaderFile=Prop31.h
ImplementationFile=Prop31.cpp
Filter=D
VirtualFilter=idWC

[CLS:CPropSheet]
Type=0
BaseClass=CPropertySheet
HeaderFile=PropSheet1.h
ImplementationFile=PropSheet1.cpp

[CLS:CSplashWnd]
Type=0
BaseClass=CWnd
HeaderFile=SplashWnd.h
ImplementationFile=SplashWnd.cpp

[CLS:CTestDlg]
Type=0
BaseClass=CDialog
HeaderFile=TestDlg.h
ImplementationFile=TestDlg.cpp

[CLS:CTestDlg2]
Type=0
BaseClass=CDialog
HeaderFile=TestDlg2.h
ImplementationFile=TestDlg2.cpp

[CLS:CWeixinBtn]
Type=0
BaseClass=CDialog
HeaderFile=WeixinBtn.h
ImplementationFile=WeixinBtn.cpp

[CLS:CWinXinBtn]
Type=0
BaseClass=CButton
HeaderFile=WinXinBtn.h
ImplementationFile=WinXinBtn.cpp

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_PROP1]
Type=1
Class=CProp1
ControlCount=6
Control1=IDC_STATIC,button,1342177287
Control2=IDC_LIST1,listbox,1352728835
Control3=IDC_RADIO1,button,1342308361
Control4=IDC_RADIO2,button,1342177289
Control5=IDC_RADIO3,button,1342177289
Control6=IDC_STATIC,static,1342308352

[DLG:IDD_PROP2]
Type=1
Class=CProp2
ControlCount=5
Control1=IDC_STATIC,button,1342177287
Control2=IDC_CHECK1,button,1342242819
Control3=IDC_CHECK2,button,1342242819
Control4=IDC_CHECK3,button,1342242819
Control5=IDC_CHECK4,button,1342242819

[DLG:IDD_PROP3]
Type=1
Class=CProp3
ControlCount=2
Control1=IDC_COMBO1,combobox,1344339970
Control2=IDC_STATIC,static,1342308352

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

[DLG:IDD_DIALOG2]
Type=1
Class=CTestDlg2
ControlCount=2
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_BUTTON2,button,1342242816

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

[TB:IDR_TOOLBAR1]
Type=1
Class=?
Command1=IDT_0
Command2=IDT_2
Command3=IDT_2
CommandCount=3

[MNU:IDR_MAINFRAME]
Type=1
Class=?
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
Command20=IDD_DATASHEET
CommandCount=20

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

[ACL:IDR_MAINFRAME]
Type=1
Class=?
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

