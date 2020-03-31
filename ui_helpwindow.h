/********************************************************************************
** Form generated from reading UI file 'helpwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWINDOW_H
#define UI_HELPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_HelpWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEdit;

    void setupUi(QDialog *HelpWindow)
    {
        if (HelpWindow->objectName().isEmpty())
            HelpWindow->setObjectName(QStringLiteral("HelpWindow"));
        HelpWindow->resize(498, 474);
        gridLayout = new QGridLayout(HelpWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(HelpWindow);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        textEdit = new QTextEdit(HelpWindow);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);


        retranslateUi(HelpWindow);

        QMetaObject::connectSlotsByName(HelpWindow);
    } // setupUi

    void retranslateUi(QDialog *HelpWindow)
    {
        HelpWindow->setWindowTitle(QApplication::translate("HelpWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("HelpWindow", "INSTRUCTIONS", nullptr));
        textEdit->setHtml(QApplication::translate("HelpWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\255\321\202\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\260\320\265\321\202 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276 \320\276\321\201\320\265\320\271 \321\207\320\270\321\201\320\273\320\276\320\262\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\321\205, \321\201\320\276\320\261\321\200\320\260\320\275\320\275\321\213\321\205 \320\270\320\267 \320\277\320\276\321\201\320\273\320\265\320\264\320\276\320\262\320\260"
                        "\321\202\320\265\320\273\321\214\320\275\320\276\320\263\320\276 \320\277\320\276\321\200\321\202\320\260. <span style=\" text-decoration: underline;\">\320\224\320\260\320\275\320\275\321\213\320\265, \320\276\321\202\320\277\321\200\320\260\320\262\320\273\321\217\320\265\320\274\321\213\320\265 \321\201 \321\203\320\264\320\260\320\273\320\265\320\275\320\275\320\276\320\263\320\276 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260, \320\264\320\276\320\273\320\266\320\275\321\213 \320\261\321\213\321\202\321\214 \320\262 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\275\320\276\320\274 \321\204\320\276\321\200\320\274\320\260\321\202\320\265: \320\272\320\260\320\266\320\264\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260 \320\264\320\276\320\273\320\266\320\275\320\260 \320\275\320\260\321\207\320\270\320\275\320\260\321\202\321\214\321\201\321\217 \321\201 \302\253</span><span style=\" text-decoration: underline; color:#ff0000"
                        ";\">$</span><span style=\" text-decoration: underline;\">\302\273 \320\270 \320\267\320\260\320\272\320\260\320\275\321\207\320\270\320\262\320\260\321\202\321\214\321\201\321\217 \302\253</span><span style=\" text-decoration: underline; color:#ff0000;\">;</span><span style=\" text-decoration: underline;\">\302\273. \320\227\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\264\320\276\320\273\320\266\320\275\321\213 \320\261\321\213\321\202\321\214 \321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\321\213 </span><span style=\" text-decoration: underline; color:#ff0000;\">\320\277\321\200\320\276\320\261\320\265\320\273\320\276\320\274</span><span style=\" text-decoration: underline;\">.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\270\320\274\320\265\321\200 \320\276\321\202\320\277\321\200\320\260\320\262\320\272\320\270 \320\264\320\260\320\275\320\275\321\213\321\205 \320"
                        "\270\320\267 mbed \320\262 \321\215\321\202\320\276 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; font-style:italic;\">Serial.</span><span style=\" font-size:8pt; font-weight:600; font-style:italic; color:#55aa00;\">printf</span><span style=\" font-size:8pt; font-weight:600; font-style:italic;\">(</span><span style=\" font-size:8pt; font-weight:600; font-style:italic; color:#ffaa00;\">&quot;$</span><span style=\" font-size:8pt; font-weight:600; font-style:italic; color:#5500ff;\">%d %f %u</span><span style=\" font-size:8pt; font-weight:600; font-style:italic; color:#ffaa00;\">;&quot;</span><span style=\" font-size:8pt; font-weigh"
                        "t:600; font-style:italic;\">, </span><span style=\" font-size:8pt; font-weight:600; font-style:italic; color:#5500ff;\">int</span><span style=\" font-size:8pt; font-weight:600; font-style:italic;\">, </span><span style=\" font-size:8pt; font-weight:600; font-style:italic; color:#5500ff;\">float</span><span style=\" font-size:8pt; font-weight:600; font-style:italic;\">, </span><span style=\" font-size:8pt; font-weight:600; font-style:italic; color:#5500ff;\">unsignet_int</span><span style=\" font-size:8pt; font-weight:600; font-style:italic;\">); // \320\270 \320\242.\320\224. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; font-style:italic;\">        </span><span style=\" font-size:8pt; font-weight:600; font-style:italic; color:#55aa00;\">delay</span><span style=\" font-size:8pt; font-weight:600; font-style:italic;\">(</span><span style=\" font-size:8pt; font-weight:600; font"
                        "-style:italic; color:#5500ff;\">10</span><span style=\" font-size:8pt; font-weight:600; font-style:italic;\">);  //  \320\275\320\265\320\276\320\261\321\217\320\260\321\202\320\265\320\273\321\214\320\275\320\276! \321\201\320\274\320\276\321\202\321\200\320\270\320\274 \320\277\320\276 \320\277\320\276\321\202\320\265\321\200\321\217\320\274 \320\264\320\260\320\275\320\275\321\213\321\205. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600; font-style:italic;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\247\321\202\320\276\320\261\321\213 \320\275\320\260\321\207\320\260\321\202\321\214 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274"
                        "\321\203, \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276 \320\272 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\321\203 \320\270 \320\275\320\260\321\207\320\275\320\270\321\202\320\265 \320\276\321\202\320\277\321\200\320\260\320\262\320\272\321\203 \320\264\320\260\320\275\320\275\321\213\321\205. \320\236\321\202\320\272\321\200\320\276\320\271\321\202\320\265 Serial Port Plotter \320\270:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- \320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321"
                        "\202\320\276\321\207\320\265\320\272 , \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\261\321\203\320\264\321\203\321\202 \320\275\320\260\320\275\320\265\321\201\320\265\320\275\321\213 \320\275\320\260 \320\263\321\200\320\260\321\204\320\270\320\272. \320\235\320\260\320\277\321\200\320\270\320\274\320\265\321\200, \320\265\321\201\320\273\320\270 \320\262\321\213 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\321\217\320\265\321\202\320\265  \320\264\320\260\320\275\320\275\321\213\321\205 \320\272\320\260\320\266\320\264\321\213\320\265 10 \320\274\321\201 \320\270 \320\262\321\213\321\201\321\202\320\260\320\262\320\273\321\217\320\265\321\202\320\265 500 \321\202\320\276\321\207\320\265\320\272 , \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\276\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202 \320\277\320\276\320\273\320\265 \320\263\321\200\320\260\321\204\320\270\320\272\320\260 \320\267\320\260 5 \321\201\320\265\320\272"
                        "\321\203\320\275\320\264.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- \320\250\320\260\320\263\320\270 \320\270 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \320\264\320\273\321\217 \320\276\321\201\320\270 Y \320\274\320\276\320\263\321\203\321\202 \320\261\321\213\321\202\321\214 \321\201\320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\321\213 \320\262\320\276 \320\262\321\200\320\265\320\274\321\217 \321\200\320\260\320\261\320\276\321\202\321\213.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- \320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\276\321\200\321\202, \320\275\320\260\321\201\321\202\321\200\320\276\320\271\321\202\320\265 \320\265\320\263\320\276 \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \302\253\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\302\273.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\321\201\320\265\320\271 \320\261\321\203\320\264\320\265\321\202 \321\200"
                        "\320\260\320\262\320\275\321\217\321\202\321\201\321\217 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\321\203 \320\262\321\205\320\276\320\264\321\217\321\211\320\270\321\205 \320\264\320\260\320\275\320\275\321\213\321\205.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-\320\222\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \320\267\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \320\270 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272 , \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\321\217  \320\272\320\275\320\276\320\277\320\272\321\203.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-\320\237\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\274\320\276\320\266\320\265\321\202 \321\215\320\272\321\201\320\277\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\320\270\320\271 \320\263\321\200\320\260\321\204\320\270\320\272 \320\262 JPG, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\261\321\203\320\264\320\265\321\202 \320\275\320\260\320\267\320\262\320\260\320\275 \320\277\320\276\320\264 \320\275\320\276\320\274\320\265\321\200\320\276\320\274 \321\202\320\265\320\272\321\203\321\211\320\265\320\271 \321\202\320\276\321\207\320\272\320\270 \320\264\320\260\320\275\320\275\321\213\321\205 \320\270 \321\201\320\276\321\205\321\200\320\260\320\275\320"
                        "\265\320\275 \320\262 \320\272\320\260\321\202\320\260\320\273\320\276\320\263\320\265 \320\270\321\201\320\277\320\276\320\273\320\275\321\217\320\265\320\274\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-\320\242\320\260\320\272 \320\266\320\265 \320\274\320\276\320\266\320\275\320\276 \321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\320\265 .CSV</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\276\320\272\321\200\321\203\321\207\320\270\320\262\320\260\321\217 \320\270 \320\277"
                        "\320\265\321\200\320\265\321\202\320\260\321\201\320\272\320\270\320\262\320\260\321\217 \320\274\321\213\321\210\321\214\321\216, \320\262\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \321\203\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272; \321\211\320\265\320\273\321\207\320\276\320\272 \320\277\320\276 \320\273\321\216\320\261\320\276\320\271 \321\202\320\276\321\207\320\272\320\265 \320\276\320\261\320\273\320\260\321\201\321\202\320\270 \320\263\321\200\320\260\321\204\320\270\320\272\320\260 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\260\320\265\321\202 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 X \320\270 Y \320\262 \321\201\321\202\321\200\320\276\320\272\320\265 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; t"
                        "ext-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-\320\230\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \320\272\320\275\320\276\320\277\320\272\321\203 Clear Plot Data , \321\207\321\202\320\276\320\261\321\213 \320\276\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-\320\241 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 Send Data \320\262\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\321\217\321\202\321"
                        "\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\213\320\265 \320\262 \320\277\320\276\320\273\320\265 \321\201\320\277\321\200\320\260\320\262\320\260 \320\276\321\202 \320\275\320\265\320\265 \320\275\320\260 \320\262\320\260\321\210\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276 (\320\276\321\202\320\277\321\200\320\260\320\262\320\272\320\260 \321\202\320\260\320\272 \320\266\320\265 \320\277\321\200\320\276\320\270\321\201\321\205\320\276\320\264\320\270\321\202 \320\277\320\276 \320\275\320\260\320\266\320\260\321\202\320\270\321\216 ENTER).</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin"
                        "-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The application is created using Qt and QCustomPlot and compiled with MinGW 4.8.2 32 bit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Licence: GPL</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Author: Borislav</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Modified by: Raddd</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpWindow: public Ui_HelpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWINDOW_H
