/********************************************************************************
** Form generated from reading UI file 'widget.ui'
** Med JD
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *res;
    QGridLayout *gridLayout;
    QPushButton *pbquatre;
    QPushButton *pbsquare;
    QPushButton *pbcinq;
    QPushButton *pbun;
    QPushButton *Pbplusmoins;
    QPushButton *pbsix;
    QPushButton *Pbvirgule;
    QPushButton *Pbzero;
    QPushButton *pbtrois;
    QPushButton *pbdeux;
    QPushButton *pbsept;
    QPushButton *pbhuit;
    QPushButton *pbrecule;
    QPushButton *pbneuf;
    QPushButton *pbefface;
    QPushButton *pbdiviser;
    QPushButton *pbmultiplier;
    QPushButton *pbmoins;
    QPushButton *pbplus;
    QPushButton *Pbegale;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(329, 412);
        Widget->setMinimumSize(QSize(0, 60));
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 50, 182, 276));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        res = new QLabel(verticalLayoutWidget);
        res->setObjectName(QStringLiteral("res"));
        res->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        res->setFont(font);
        res->setStyleSheet(QLatin1String("background-color: rgb(194, 194, 194);\n"
"border-color: rgb(0, 0, 0);"));
        res->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(res);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pbquatre = new QPushButton(verticalLayoutWidget);
        pbquatre->setObjectName(QStringLiteral("pbquatre"));
        pbquatre->setMinimumSize(QSize(0, 40));
        pbquatre->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pbquatre, 2, 0, 1, 1);

        pbsquare = new QPushButton(verticalLayoutWidget);
        pbsquare->setObjectName(QStringLiteral("pbsquare"));
        pbsquare->setMinimumSize(QSize(0, 40));
        pbsquare->setMaximumSize(QSize(40, 16777215));
        pbsquare->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pbsquare, 0, 0, 1, 1);

        pbcinq = new QPushButton(verticalLayoutWidget);
        pbcinq->setObjectName(QStringLiteral("pbcinq"));
        pbcinq->setMinimumSize(QSize(0, 40));
        pbcinq->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pbcinq, 2, 1, 1, 1);

        pbun = new QPushButton(verticalLayoutWidget);
        pbun->setObjectName(QStringLiteral("pbun"));
        pbun->setMinimumSize(QSize(0, 40));
        pbun->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pbun, 3, 0, 1, 1);

        Pbplusmoins = new QPushButton(verticalLayoutWidget);
        Pbplusmoins->setObjectName(QStringLiteral("Pbplusmoins"));
        Pbplusmoins->setMinimumSize(QSize(0, 40));
        Pbplusmoins->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(Pbplusmoins, 4, 0, 1, 1);

        pbsix = new QPushButton(verticalLayoutWidget);
        pbsix->setObjectName(QStringLiteral("pbsix"));
        pbsix->setMinimumSize(QSize(0, 40));
        pbsix->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pbsix, 2, 2, 1, 1);

        Pbvirgule = new QPushButton(verticalLayoutWidget);
        Pbvirgule->setObjectName(QStringLiteral("Pbvirgule"));
        Pbvirgule->setMinimumSize(QSize(0, 40));
        Pbvirgule->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(Pbvirgule, 4, 2, 1, 1);

        Pbzero = new QPushButton(verticalLayoutWidget);
        Pbzero->setObjectName(QStringLiteral("Pbzero"));
        Pbzero->setMinimumSize(QSize(0, 40));
        Pbzero->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(Pbzero, 4, 1, 1, 1);

        pbtrois = new QPushButton(verticalLayoutWidget);
        pbtrois->setObjectName(QStringLiteral("pbtrois"));
        pbtrois->setMinimumSize(QSize(0, 40));
        pbtrois->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pbtrois, 3, 2, 1, 1);

        pbdeux = new QPushButton(verticalLayoutWidget);
        pbdeux->setObjectName(QStringLiteral("pbdeux"));
        pbdeux->setMinimumSize(QSize(0, 40));
        pbdeux->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pbdeux, 3, 1, 1, 1);

        pbsept = new QPushButton(verticalLayoutWidget);
        pbsept->setObjectName(QStringLiteral("pbsept"));
        pbsept->setMinimumSize(QSize(0, 40));
        pbsept->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pbsept, 1, 0, 1, 1);

        pbhuit = new QPushButton(verticalLayoutWidget);
        pbhuit->setObjectName(QStringLiteral("pbhuit"));
        pbhuit->setMinimumSize(QSize(0, 40));
        pbhuit->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pbhuit, 1, 1, 1, 1);

        pbrecule = new QPushButton(verticalLayoutWidget);
        pbrecule->setObjectName(QStringLiteral("pbrecule"));
        pbrecule->setMinimumSize(QSize(0, 40));
        pbrecule->setMaximumSize(QSize(40, 16777215));
        pbrecule->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pbrecule, 0, 1, 1, 1);

        pbneuf = new QPushButton(verticalLayoutWidget);
        pbneuf->setObjectName(QStringLiteral("pbneuf"));
        pbneuf->setMinimumSize(QSize(0, 40));
        pbneuf->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pbneuf, 1, 2, 1, 1);

        pbefface = new QPushButton(verticalLayoutWidget);
        pbefface->setObjectName(QStringLiteral("pbefface"));
        pbefface->setMinimumSize(QSize(0, 40));
        pbefface->setMaximumSize(QSize(40, 16777215));
        pbefface->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pbefface, 0, 2, 1, 1);

        pbdiviser = new QPushButton(verticalLayoutWidget);
        pbdiviser->setObjectName(QStringLiteral("pbdiviser"));
        pbdiviser->setMinimumSize(QSize(0, 40));
        pbdiviser->setMaximumSize(QSize(40, 16777215));
        pbdiviser->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pbdiviser, 0, 3, 1, 1);

        pbmultiplier = new QPushButton(verticalLayoutWidget);
        pbmultiplier->setObjectName(QStringLiteral("pbmultiplier"));
        pbmultiplier->setMinimumSize(QSize(0, 40));
        pbmultiplier->setMaximumSize(QSize(40, 16777215));
        pbmultiplier->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pbmultiplier, 1, 3, 1, 1);

        pbmoins = new QPushButton(verticalLayoutWidget);
        pbmoins->setObjectName(QStringLiteral("pbmoins"));
        pbmoins->setMinimumSize(QSize(0, 40));
        pbmoins->setMaximumSize(QSize(40, 16777215));
        pbmoins->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pbmoins, 2, 3, 1, 1);

        pbplus = new QPushButton(verticalLayoutWidget);
        pbplus->setObjectName(QStringLiteral("pbplus"));
        pbplus->setMinimumSize(QSize(0, 40));
        pbplus->setMaximumSize(QSize(40, 16777215));
        pbplus->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pbplus, 3, 3, 1, 1);

        Pbegale = new QPushButton(verticalLayoutWidget);
        Pbegale->setObjectName(QStringLiteral("Pbegale"));
        Pbegale->setMinimumSize(QSize(0, 40));
        Pbegale->setMaximumSize(QSize(40, 16777215));
        Pbegale->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(Pbegale, 4, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Calculatrice", 0));
        res->setText(QApplication::translate("Widget", "0", 0));
        pbquatre->setText(QApplication::translate("Widget", "4", 0));
        pbsquare->setText(QApplication::translate("Widget", "X\302\262", 0));
        pbcinq->setText(QApplication::translate("Widget", "5", 0));
        pbun->setText(QApplication::translate("Widget", "1", 0));
        Pbplusmoins->setText(QApplication::translate("Widget", "+/-", 0));
        pbsix->setText(QApplication::translate("Widget", "6", 0));
        Pbvirgule->setText(QApplication::translate("Widget", ",", 0));
        Pbzero->setText(QApplication::translate("Widget", "0", 0));
        pbtrois->setText(QApplication::translate("Widget", "3", 0));
        pbdeux->setText(QApplication::translate("Widget", "2", 0));
        pbsept->setText(QApplication::translate("Widget", "7", 0));
        pbhuit->setText(QApplication::translate("Widget", "8", 0));
        pbrecule->setText(QApplication::translate("Widget", "<", 0));
        pbneuf->setText(QApplication::translate("Widget", "9", 0));
        pbefface->setText(QApplication::translate("Widget", "C", 0));
        pbdiviser->setText(QApplication::translate("Widget", "%", 0));
        pbmultiplier->setText(QApplication::translate("Widget", "x", 0));
        pbmoins->setText(QApplication::translate("Widget", "-", 0));
        pbplus->setText(QApplication::translate("Widget", "+", 0));
        Pbegale->setText(QApplication::translate("Widget", "=", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
