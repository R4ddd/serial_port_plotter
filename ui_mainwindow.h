/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot/qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionPause_Plot;
    QAction *actionDisconnect;
    QAction *actionClear;
    QAction *actionHow_to_use;
    QAction *actionRecord_stream;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QLineEdit *InputData;
    QGridLayout *gridLayout_4;
    QSplitter *splitter;
    QCustomPlot *plot;
    QTextEdit *textEdit_UartWindow;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *controlsLayout;
    QGroupBox *PortControlsBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPort;
    QComboBox *comboPort;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelBaud;
    QComboBox *comboBaud;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelData;
    QComboBox *comboData;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelParity;
    QComboBox *comboParity;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelStop;
    QComboBox *comboStop;
    QGroupBox *PlotControlsBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *plotControlsLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *pointsLabel;
    QSpinBox *spinPoints;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelYStep;
    QSpinBox *spinYStep;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QSpinBox *spinAxesMin;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QSpinBox *spinAxesMax;
    QPushButton *pushButton_AutoScale;
    QListWidget *listWidget_Channels;
    QPushButton *pushButton_ResetVisible;
    QPushButton *savePNGButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *gridGroupBox;
    QGridLayout *TextControlsBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_TextEditHide;
    QPushButton *pushButton_ShowallData;
    QPushButton *SendData;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1002, 743);
        MainWindow->setMinimumSize(QSize(840, 620));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/serial_port_plotter/play_nor.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/serial_port_plotter/play_nor.png"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QStringLiteral(":/serial_port_plotter/play_dis.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QStringLiteral(":/serial_port_plotter/play_dis.png"), QSize(), QIcon::Disabled, QIcon::On);
        icon.addFile(QStringLiteral(":/serial_port_plotter/play_act.png"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QStringLiteral(":/serial_port_plotter/play_act.png"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QStringLiteral(":/serial_port_plotter/play_act.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QStringLiteral(":/serial_port_plotter/play_act.png"), QSize(), QIcon::Selected, QIcon::On);
        actionConnect->setIcon(icon);
        actionPause_Plot = new QAction(MainWindow);
        actionPause_Plot->setObjectName(QStringLiteral("actionPause_Plot"));
        actionPause_Plot->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/serial_port_plotter/pause_nor.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/serial_port_plotter/pause_nor.png"), QSize(), QIcon::Normal, QIcon::On);
        icon1.addFile(QStringLiteral(":/serial_port_plotter/pause_dis.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon1.addFile(QStringLiteral(":/serial_port_plotter/pause_dis.png"), QSize(), QIcon::Disabled, QIcon::On);
        icon1.addFile(QStringLiteral(":/serial_port_plotter/pause_act.png"), QSize(), QIcon::Active, QIcon::Off);
        icon1.addFile(QStringLiteral(":/serial_port_plotter/pause_act.png"), QSize(), QIcon::Active, QIcon::On);
        icon1.addFile(QStringLiteral(":/serial_port_plotter/pause_act.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon1.addFile(QStringLiteral(":/serial_port_plotter/pause_act.png"), QSize(), QIcon::Selected, QIcon::On);
        actionPause_Plot->setIcon(icon1);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        actionDisconnect->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/serial_port_plotter/stop_nor.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/serial_port_plotter/stop_nor.png"), QSize(), QIcon::Normal, QIcon::On);
        icon2.addFile(QStringLiteral(":/serial_port_plotter/stop_dis.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon2.addFile(QStringLiteral(":/serial_port_plotter/stop_dis.png"), QSize(), QIcon::Disabled, QIcon::On);
        icon2.addFile(QStringLiteral(":/serial_port_plotter/stop_act.png"), QSize(), QIcon::Active, QIcon::Off);
        icon2.addFile(QStringLiteral(":/serial_port_plotter/stop_act.png"), QSize(), QIcon::Active, QIcon::On);
        icon2.addFile(QStringLiteral(":/serial_port_plotter/stop_act.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon2.addFile(QStringLiteral(":/serial_port_plotter/stop_act.png"), QSize(), QIcon::Selected, QIcon::On);
        actionDisconnect->setIcon(icon2);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionClear->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/serial_port_plotter/clear_nor.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/serial_port_plotter/clear_nor.png"), QSize(), QIcon::Normal, QIcon::On);
        icon3.addFile(QStringLiteral(":/serial_port_plotter/clear_dis.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon3.addFile(QStringLiteral(":/serial_port_plotter/clear_dis.png"), QSize(), QIcon::Disabled, QIcon::On);
        icon3.addFile(QStringLiteral(":/serial_port_plotter/clear_act.png"), QSize(), QIcon::Active, QIcon::Off);
        icon3.addFile(QStringLiteral(":/serial_port_plotter/clear_act.png"), QSize(), QIcon::Active, QIcon::On);
        icon3.addFile(QStringLiteral(":/serial_port_plotter/clear_act.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon3.addFile(QStringLiteral(":/serial_port_plotter/clear_act.png"), QSize(), QIcon::Selected, QIcon::On);
        actionClear->setIcon(icon3);
        actionHow_to_use = new QAction(MainWindow);
        actionHow_to_use->setObjectName(QStringLiteral("actionHow_to_use"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/serial_port_plotter/help_nor.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QStringLiteral(":/serial_port_plotter/help_nor.png"), QSize(), QIcon::Normal, QIcon::On);
        icon4.addFile(QStringLiteral(":/serial_port_plotter/help_dis.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon4.addFile(QStringLiteral(":/serial_port_plotter/help_dis.png"), QSize(), QIcon::Disabled, QIcon::On);
        icon4.addFile(QStringLiteral(":/serial_port_plotter/help_act.png"), QSize(), QIcon::Active, QIcon::Off);
        icon4.addFile(QStringLiteral(":/serial_port_plotter/help_act.png"), QSize(), QIcon::Active, QIcon::On);
        icon4.addFile(QStringLiteral(":/serial_port_plotter/help_act.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon4.addFile(QStringLiteral(":/serial_port_plotter/help_act.png"), QSize(), QIcon::Selected, QIcon::On);
        actionHow_to_use->setIcon(icon4);
        actionRecord_stream = new QAction(MainWindow);
        actionRecord_stream->setObjectName(QStringLiteral("actionRecord_stream"));
        actionRecord_stream->setCheckable(true);
        actionRecord_stream->setChecked(false);
        actionRecord_stream->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/line_icon_set/document.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QStringLiteral(":/icons/line_icon_set_text/document.png"), QSize(), QIcon::Normal, QIcon::On);
        icon5.addFile(QStringLiteral(":/icons/line_icon_set/document.png"), QSize(), QIcon::Disabled, QIcon::Off);
        actionRecord_stream->setIcon(icon5);
        actionRecord_stream->setVisible(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        InputData = new QLineEdit(centralWidget);
        InputData->setObjectName(QStringLiteral("InputData"));

        gridLayout_3->addWidget(InputData, 1, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        splitter->setFont(font);
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(5);
        splitter->setChildrenCollapsible(false);
        plot = new QCustomPlot(splitter);
        plot->setObjectName(QStringLiteral("plot"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plot->sizePolicy().hasHeightForWidth());
        plot->setSizePolicy(sizePolicy1);
        plot->setMinimumSize(QSize(0, 400));
        splitter->addWidget(plot);
        textEdit_UartWindow = new QTextEdit(splitter);
        textEdit_UartWindow->setObjectName(QStringLiteral("textEdit_UartWindow"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textEdit_UartWindow->sizePolicy().hasHeightForWidth());
        textEdit_UartWindow->setSizePolicy(sizePolicy2);
        textEdit_UartWindow->setMinimumSize(QSize(0, 150));
        splitter->addWidget(textEdit_UartWindow);

        gridLayout_4->addWidget(splitter, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 0, 1, 1, 1);

        controlsLayout = new QVBoxLayout();
        controlsLayout->setSpacing(6);
        controlsLayout->setObjectName(QStringLiteral("controlsLayout"));
        PortControlsBox = new QGroupBox(centralWidget);
        PortControlsBox->setObjectName(QStringLiteral("PortControlsBox"));
        PortControlsBox->setFlat(false);
        PortControlsBox->setCheckable(false);
        gridLayout = new QGridLayout(PortControlsBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton = new QPushButton(PortControlsBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelPort = new QLabel(PortControlsBox);
        labelPort->setObjectName(QStringLiteral("labelPort"));
        labelPort->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(labelPort);

        comboPort = new QComboBox(PortControlsBox);
        comboPort->setObjectName(QStringLiteral("comboPort"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboPort->sizePolicy().hasHeightForWidth());
        comboPort->setSizePolicy(sizePolicy3);
        comboPort->setMinimumSize(QSize(69, 0));
        comboPort->setMaximumSize(QSize(69, 16777215));

        horizontalLayout->addWidget(comboPort);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelBaud = new QLabel(PortControlsBox);
        labelBaud->setObjectName(QStringLiteral("labelBaud"));
        labelBaud->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(labelBaud);

        comboBaud = new QComboBox(PortControlsBox);
        comboBaud->setObjectName(QStringLiteral("comboBaud"));
        sizePolicy3.setHeightForWidth(comboBaud->sizePolicy().hasHeightForWidth());
        comboBaud->setSizePolicy(sizePolicy3);
        comboBaud->setMinimumSize(QSize(69, 0));
        comboBaud->setMaximumSize(QSize(69, 16777215));
        comboBaud->setEditable(true);

        horizontalLayout_2->addWidget(comboBaud);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelData = new QLabel(PortControlsBox);
        labelData->setObjectName(QStringLiteral("labelData"));
        labelData->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(labelData);

        comboData = new QComboBox(PortControlsBox);
        comboData->setObjectName(QStringLiteral("comboData"));
        sizePolicy3.setHeightForWidth(comboData->sizePolicy().hasHeightForWidth());
        comboData->setSizePolicy(sizePolicy3);
        comboData->setMinimumSize(QSize(69, 0));
        comboData->setMaximumSize(QSize(69, 16777215));

        horizontalLayout_3->addWidget(comboData);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelParity = new QLabel(PortControlsBox);
        labelParity->setObjectName(QStringLiteral("labelParity"));
        labelParity->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(labelParity);

        comboParity = new QComboBox(PortControlsBox);
        comboParity->setObjectName(QStringLiteral("comboParity"));
        sizePolicy3.setHeightForWidth(comboParity->sizePolicy().hasHeightForWidth());
        comboParity->setSizePolicy(sizePolicy3);
        comboParity->setMinimumSize(QSize(69, 0));
        comboParity->setMaximumSize(QSize(69, 16777215));

        horizontalLayout_4->addWidget(comboParity);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelStop = new QLabel(PortControlsBox);
        labelStop->setObjectName(QStringLiteral("labelStop"));
        labelStop->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(labelStop);

        comboStop = new QComboBox(PortControlsBox);
        comboStop->setObjectName(QStringLiteral("comboStop"));
        sizePolicy3.setHeightForWidth(comboStop->sizePolicy().hasHeightForWidth());
        comboStop->setSizePolicy(sizePolicy3);
        comboStop->setMinimumSize(QSize(69, 0));
        comboStop->setMaximumSize(QSize(69, 16777215));

        horizontalLayout_5->addWidget(comboStop);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        controlsLayout->addWidget(PortControlsBox);

        PlotControlsBox = new QGroupBox(centralWidget);
        PlotControlsBox->setObjectName(QStringLiteral("PlotControlsBox"));
        gridLayout_2 = new QGridLayout(PlotControlsBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        plotControlsLayout = new QVBoxLayout();
        plotControlsLayout->setSpacing(6);
        plotControlsLayout->setObjectName(QStringLiteral("plotControlsLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pointsLabel = new QLabel(PlotControlsBox);
        pointsLabel->setObjectName(QStringLiteral("pointsLabel"));
        pointsLabel->setMinimumSize(QSize(50, 0));
        pointsLabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_10->addWidget(pointsLabel);

        spinPoints = new QSpinBox(PlotControlsBox);
        spinPoints->setObjectName(QStringLiteral("spinPoints"));
        spinPoints->setMinimumSize(QSize(69, 0));
        spinPoints->setMaximumSize(QSize(69, 16777215));
        spinPoints->setMinimum(0);
        spinPoints->setMaximum(999999999);
        spinPoints->setSingleStep(10);
        spinPoints->setValue(1000);

        horizontalLayout_10->addWidget(spinPoints);


        plotControlsLayout->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        labelYStep = new QLabel(PlotControlsBox);
        labelYStep->setObjectName(QStringLiteral("labelYStep"));
        labelYStep->setMinimumSize(QSize(50, 0));
        labelYStep->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_9->addWidget(labelYStep);

        spinYStep = new QSpinBox(PlotControlsBox);
        spinYStep->setObjectName(QStringLiteral("spinYStep"));
        spinYStep->setMinimumSize(QSize(69, 0));
        spinYStep->setMaximumSize(QSize(69, 16777215));
        spinYStep->setMinimum(1);
        spinYStep->setMaximum(10000);
        spinYStep->setSingleStep(1);
        spinYStep->setValue(10);

        horizontalLayout_9->addWidget(spinYStep);


        plotControlsLayout->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label = new QLabel(PlotControlsBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(50, 0));
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_7->addWidget(label);

        spinAxesMin = new QSpinBox(PlotControlsBox);
        spinAxesMin->setObjectName(QStringLiteral("spinAxesMin"));
        spinAxesMin->setMinimumSize(QSize(69, 0));
        spinAxesMin->setMaximumSize(QSize(69, 16777215));
        spinAxesMin->setMinimum(-65536);
        spinAxesMin->setMaximum(65536);
        spinAxesMin->setSingleStep(10);
        spinAxesMin->setValue(-100);

        horizontalLayout_7->addWidget(spinAxesMin);


        plotControlsLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_2 = new QLabel(PlotControlsBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_8->addWidget(label_2);

        spinAxesMax = new QSpinBox(PlotControlsBox);
        spinAxesMax->setObjectName(QStringLiteral("spinAxesMax"));
        spinAxesMax->setMinimumSize(QSize(69, 0));
        spinAxesMax->setMaximumSize(QSize(69, 16777215));
        spinAxesMax->setMinimum(-65536);
        spinAxesMax->setMaximum(65536);
        spinAxesMax->setSingleStep(10);
        spinAxesMax->setValue(100);

        horizontalLayout_8->addWidget(spinAxesMax);


        plotControlsLayout->addLayout(horizontalLayout_8);

        pushButton_AutoScale = new QPushButton(PlotControlsBox);
        pushButton_AutoScale->setObjectName(QStringLiteral("pushButton_AutoScale"));
        pushButton_AutoScale->setSizeIncrement(QSize(0, 8));

        plotControlsLayout->addWidget(pushButton_AutoScale);

        listWidget_Channels = new QListWidget(PlotControlsBox);
        listWidget_Channels->setObjectName(QStringLiteral("listWidget_Channels"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(listWidget_Channels->sizePolicy().hasHeightForWidth());
        listWidget_Channels->setSizePolicy(sizePolicy4);
        listWidget_Channels->setMinimumSize(QSize(0, 0));
        listWidget_Channels->setMaximumSize(QSize(150, 16777215));
        listWidget_Channels->setLayoutDirection(Qt::LeftToRight);
        listWidget_Channels->setAutoScroll(false);
        listWidget_Channels->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget_Channels->setAlternatingRowColors(true);
        listWidget_Channels->setSelectionBehavior(QAbstractItemView::SelectItems);
        listWidget_Channels->setTextElideMode(Qt::ElideMiddle);
        listWidget_Channels->setResizeMode(QListView::Adjust);
        listWidget_Channels->setModelColumn(0);
        listWidget_Channels->setSelectionRectVisible(true);

        plotControlsLayout->addWidget(listWidget_Channels);

        pushButton_ResetVisible = new QPushButton(PlotControlsBox);
        pushButton_ResetVisible->setObjectName(QStringLiteral("pushButton_ResetVisible"));

        plotControlsLayout->addWidget(pushButton_ResetVisible);

        savePNGButton = new QPushButton(PlotControlsBox);
        savePNGButton->setObjectName(QStringLiteral("savePNGButton"));

        plotControlsLayout->addWidget(savePNGButton);


        gridLayout_2->addLayout(plotControlsLayout, 0, 0, 1, 1);


        controlsLayout->addWidget(PlotControlsBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        controlsLayout->addItem(verticalSpacer);

        gridGroupBox = new QGroupBox(centralWidget);
        gridGroupBox->setObjectName(QStringLiteral("gridGroupBox"));
        gridGroupBox->setMinimumSize(QSize(0, 80));
        TextControlsBox = new QGridLayout(gridGroupBox);
        TextControlsBox->setSpacing(6);
        TextControlsBox->setContentsMargins(11, 11, 11, 11);
        TextControlsBox->setObjectName(QStringLiteral("TextControlsBox"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_TextEditHide = new QPushButton(gridGroupBox);
        pushButton_TextEditHide->setObjectName(QStringLiteral("pushButton_TextEditHide"));
        pushButton_TextEditHide->setCheckable(true);
        pushButton_TextEditHide->setChecked(false);

        verticalLayout->addWidget(pushButton_TextEditHide);

        pushButton_ShowallData = new QPushButton(gridGroupBox);
        pushButton_ShowallData->setObjectName(QStringLiteral("pushButton_ShowallData"));
        pushButton_ShowallData->setCheckable(true);

        verticalLayout->addWidget(pushButton_ShowallData);


        TextControlsBox->addLayout(verticalLayout, 0, 0, 1, 1);


        controlsLayout->addWidget(gridGroupBox);


        gridLayout_3->addLayout(controlsLayout, 0, 0, 1, 1);

        SendData = new QPushButton(centralWidget);
        SendData->setObjectName(QStringLiteral("SendData"));

        gridLayout_3->addWidget(SendData, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::TopToolBarArea);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionConnect);
        toolBar->addAction(actionPause_Plot);
        toolBar->addAction(actionDisconnect);
        toolBar->addSeparator();
        toolBar->addAction(actionClear);
        toolBar->addSeparator();
        toolBar->addAction(actionHow_to_use);
        toolBar->addSeparator();
        toolBar->addAction(actionRecord_stream);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("MainWindow", "Connect to COM port", nullptr));
#endif // QT_NO_TOOLTIP
        actionPause_Plot->setText(QApplication::translate("MainWindow", "Pause", nullptr));
#ifndef QT_NO_TOOLTIP
        actionPause_Plot->setToolTip(QApplication::translate("MainWindow", "Pause plot", nullptr));
#endif // QT_NO_TOOLTIP
        actionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDisconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect COM port", nullptr));
#endif // QT_NO_TOOLTIP
        actionClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("MainWindow", "Clear plot data", nullptr));
#endif // QT_NO_TOOLTIP
        actionHow_to_use->setText(QApplication::translate("MainWindow", "How to use", nullptr));
        actionRecord_stream->setText(QApplication::translate("MainWindow", "Record stream", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRecord_stream->setToolTip(QApplication::translate("MainWindow", "Record the incoming data to a .csv file ( shortcut : s )", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRecord_stream->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        PortControlsBox->setTitle(QApplication::translate("MainWindow", "PORT CONTROLS", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
        labelPort->setText(QApplication::translate("MainWindow", "PORT", nullptr));
        labelBaud->setText(QApplication::translate("MainWindow", "BAUD", nullptr));
        labelData->setText(QApplication::translate("MainWindow", "DATA", nullptr));
        labelParity->setText(QApplication::translate("MainWindow", "PARITY", nullptr));
        labelStop->setText(QApplication::translate("MainWindow", "STOP", nullptr));
        PlotControlsBox->setTitle(QApplication::translate("MainWindow", "PLOT CONTROLS", nullptr));
        pointsLabel->setText(QApplication::translate("MainWindow", "POINTS", nullptr));
        labelYStep->setText(QApplication::translate("MainWindow", "Y STEP", nullptr));
        label->setText(QApplication::translate("MainWindow", "MIN", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "MAX", nullptr));
        pushButton_AutoScale->setText(QApplication::translate("MainWindow", "AutoScale Yaxis", nullptr));
        pushButton_ResetVisible->setText(QApplication::translate("MainWindow", "Reset All Visible", nullptr));
        savePNGButton->setText(QApplication::translate("MainWindow", "Save PNG", nullptr));
        gridGroupBox->setTitle(QApplication::translate("MainWindow", "TEXT CONTROLS", nullptr));
        pushButton_TextEditHide->setText(QApplication::translate("MainWindow", "Hide TextBox", nullptr));
        pushButton_ShowallData->setText(QApplication::translate("MainWindow", "Show All Incoming Data", nullptr));
        SendData->setText(QApplication::translate("MainWindow", "Send Data", nullptr));
#ifndef QT_NO_SHORTCUT
        SendData->setShortcut(QApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
