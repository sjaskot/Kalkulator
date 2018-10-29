/********************************************************************************
** Form generated from reading UI file 'Kalkulator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KALKULATOR_H
#define UI_KALKULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KalkulatorClass
{
public:
    QWidget *centralWidget;
    QLineEdit *Display;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button5;
    QPushButton *Button9;
    QPushButton *Button6;
    QPushButton *Button4;
    QPushButton *ButtonEquals;
    QPushButton *ButtonAdd;
    QPushButton *ButtonMultiply;
    QPushButton *Button0;
    QPushButton *ButtonSubtract;
    QPushButton *ButtonDivision;
    QPushButton *ButtonSquare;
    QPlainTextEdit *plainTextEdit;
    QPushButton *ButtonCom;
    QPushButton *ButtonBsc;
    QPushButton *ButtonClrAll;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuPlik;

    void setupUi(QMainWindow *KalkulatorClass)
    {
        if (KalkulatorClass->objectName().isEmpty())
            KalkulatorClass->setObjectName(QString::fromUtf8("KalkulatorClass"));
        KalkulatorClass->setWindowModality(Qt::NonModal);
        KalkulatorClass->setEnabled(true);
        KalkulatorClass->resize(372, 415);
        KalkulatorClass->setMinimumSize(QSize(372, 415));
        KalkulatorClass->setMaximumSize(QSize(372, 415));
        KalkulatorClass->setSizeIncrement(QSize(0, 0));
        KalkulatorClass->setBaseSize(QSize(312, 384));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/janek/Downloads/QT/map_2026.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        KalkulatorClass->setWindowIcon(icon);
        KalkulatorClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralWidget = new QWidget(KalkulatorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setEnabled(true);
        Display->setGeometry(QRect(10, 10, 291, 61));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setCursor(QCursor(Qt::ForbiddenCursor));
        Display->setMouseTracking(false);
        Display->setFocusPolicy(Qt::NoFocus);
        Display->setContextMenuPolicy(Qt::DefaultContextMenu);
        Display->setAcceptDrops(true);
        Display->setLayoutDirection(Qt::LeftToRight);
        Display->setCursorPosition(0);
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Display->setDragEnabled(false);
        Display->setReadOnly(false);
        Display->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(10, 80, 51, 51));
        Button1->setAutoDefault(false);
        Button1->setProperty("1", QVariant(false));
        Button1->setProperty("liczba", QVariant(QChar(0)));
        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(70, 80, 51, 51));
        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(130, 80, 51, 51));
        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(10, 200, 51, 51));
        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(70, 200, 51, 51));
        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(70, 140, 51, 51));
        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(130, 200, 51, 51));
        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(130, 140, 51, 51));
        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(10, 140, 51, 51));
        ButtonEquals = new QPushButton(centralWidget);
        ButtonEquals->setObjectName(QString::fromUtf8("ButtonEquals"));
        ButtonEquals->setGeometry(QRect(10, 260, 171, 61));
        ButtonAdd = new QPushButton(centralWidget);
        ButtonAdd->setObjectName(QString::fromUtf8("ButtonAdd"));
        ButtonAdd->setGeometry(QRect(190, 80, 51, 51));
        ButtonMultiply = new QPushButton(centralWidget);
        ButtonMultiply->setObjectName(QString::fromUtf8("ButtonMultiply"));
        ButtonMultiply->setGeometry(QRect(190, 140, 51, 51));
        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(190, 200, 51, 51));
        ButtonSubtract = new QPushButton(centralWidget);
        ButtonSubtract->setObjectName(QString::fromUtf8("ButtonSubtract"));
        ButtonSubtract->setGeometry(QRect(250, 80, 51, 51));
        ButtonDivision = new QPushButton(centralWidget);
        ButtonDivision->setObjectName(QString::fromUtf8("ButtonDivision"));
        ButtonDivision->setGeometry(QRect(250, 140, 51, 51));
        ButtonSquare = new QPushButton(centralWidget);
        ButtonSquare->setObjectName(QString::fromUtf8("ButtonSquare"));
        ButtonSquare->setGeometry(QRect(250, 200, 51, 51));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(false);
        plainTextEdit->setGeometry(QRect(40, 320, 101, 71));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        plainTextEdit->setFont(font1);
        plainTextEdit->setFrameShape(QFrame::NoFrame);
        plainTextEdit->setFrameShadow(QFrame::Raised);
        ButtonCom = new QPushButton(centralWidget);
        ButtonCom->setObjectName(QString::fromUtf8("ButtonCom"));
        ButtonCom->setGeometry(QRect(190, 260, 51, 51));
        ButtonBsc = new QPushButton(centralWidget);
        ButtonBsc->setObjectName(QString::fromUtf8("ButtonBsc"));
        ButtonBsc->setGeometry(QRect(250, 260, 51, 51));
        ButtonClrAll = new QPushButton(centralWidget);
        ButtonClrAll->setObjectName(QString::fromUtf8("ButtonClrAll"));
        ButtonClrAll->setGeometry(QRect(310, 80, 51, 51));
        KalkulatorClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(KalkulatorClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        KalkulatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KalkulatorClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        KalkulatorClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(KalkulatorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 372, 21));
        menuPlik = new QMenu(menuBar);
        menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
        KalkulatorClass->setMenuBar(menuBar);

        menuBar->addAction(menuPlik->menuAction());

        retranslateUi(KalkulatorClass);

        QMetaObject::connectSlotsByName(KalkulatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *KalkulatorClass)
    {
        KalkulatorClass->setWindowTitle(QApplication::translate("KalkulatorClass", "Kalkulator version 1.0", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        Display->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        Display->setText(QString());
        Button1->setText(QApplication::translate("KalkulatorClass", "1", nullptr));
        Button2->setText(QApplication::translate("KalkulatorClass", "2", nullptr));
        Button3->setText(QApplication::translate("KalkulatorClass", "3", nullptr));
        Button7->setText(QApplication::translate("KalkulatorClass", "7", nullptr));
        Button8->setText(QApplication::translate("KalkulatorClass", "8", nullptr));
        Button5->setText(QApplication::translate("KalkulatorClass", "5", nullptr));
        Button9->setText(QApplication::translate("KalkulatorClass", "9", nullptr));
        Button6->setText(QApplication::translate("KalkulatorClass", "6", nullptr));
        Button4->setText(QApplication::translate("KalkulatorClass", "4", nullptr));
        ButtonEquals->setText(QApplication::translate("KalkulatorClass", "=", nullptr));
        ButtonAdd->setText(QApplication::translate("KalkulatorClass", "+", nullptr));
        ButtonMultiply->setText(QApplication::translate("KalkulatorClass", "*", nullptr));
        Button0->setText(QApplication::translate("KalkulatorClass", "0", nullptr));
        ButtonSubtract->setText(QApplication::translate("KalkulatorClass", "-", nullptr));
        ButtonDivision->setText(QApplication::translate("KalkulatorClass", "/", nullptr));
        ButtonSquare->setText(QApplication::translate("KalkulatorClass", "\342\210\232", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("KalkulatorClass", "Copyright by:\n"
"Jan Jaskot", nullptr));
        ButtonCom->setText(QApplication::translate("KalkulatorClass", ".", nullptr));
        ButtonBsc->setText(QApplication::translate("KalkulatorClass", "Bsc", nullptr));
        ButtonClrAll->setText(QApplication::translate("KalkulatorClass", "C", nullptr));
        menuPlik->setTitle(QApplication::translate("KalkulatorClass", "Plik", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KalkulatorClass: public Ui_KalkulatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KALKULATOR_H
