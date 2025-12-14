/********************************************************************************
** Form generated from reading UI file 'debugwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGWINDOW_H
#define UI_DEBUGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/trafficgraphwidget.h"

QT_BEGIN_NAMESPACE

class Ui_RPCConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_alerts;
    QTabWidget *tabWidget;
    QWidget *tab_info;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *clientVersion;
    QLabel *labelClientUserAgent;
    QLabel *clientUserAgent;
    QLabel *label_12;
    QLabel *dataDir;
    QLabel *label_11;
    QLabel *blocksDir;
    QLabel *label_13;
    QLabel *startupTime;
    QLabel *labelNetwork;
    QLabel *label_8;
    QLabel *networkName;
    QLabel *label_7;
    QLabel *numberOfConnections;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *numberOfBlocks;
    QLabel *labelLastBlockTime;
    QLabel *lastBlockTime;
    QLabel *labelMempoolTitle;
    QLabel *labelNumberOfTransactions;
    QLabel *mempoolNumberTxs;
    QLabel *labelMemoryUsage;
    QLabel *mempoolSize;
    QVBoxLayout *verticalLayoutDebugButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelDebugLogfile;
    QPushButton *openDebugLogfileButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_console;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *WalletSelectorLabel;
    QComboBox *WalletSelector;
    QSpacerItem *horizontalSpacer;
    QToolButton *fontSmallerButton;
    QToolButton *fontBiggerButton;
    QToolButton *clearButton;
    QTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayoutPrompt;
    QPushButton *promptIcon;
    QLineEdit *lineEdit;
    QWidget *tab_nettraffic;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    TrafficGraphWidget *trafficGraph;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sldGraphRange;
    QLabel *lblGraphRange;
    QPushButton *btnClearTrafficGraph;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QFrame *line;
    QLabel *label_16;
    QLabel *lblBytesIn;
    QHBoxLayout *horizontalLayout_5;
    QFrame *line_2;
    QLabel *label_17;
    QLabel *lblBytesOut;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_peers;
    QVBoxLayout *verticalLayout_6;
    QSplitter *splitter;
    QWidget *widget_1;
    QVBoxLayout *verticalLayout_7;
    QTableView *peerWidget;
    QLabel *banHeading;
    QTableView *banlistWidget;
    QWidget *peersTabRightPanel;
    QVBoxLayout *verticalLayout_8;
    QLabel *peerHeading;
    QScrollArea *scrollArea;
    QWidget *detailWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_30;
    QLabel *peerPermissions;
    QLabel *peerConnectionTypeLabel;
    QLabel *peerConnectionType;
    QLabel *peerNetworkLabel;
    QLabel *peerNetwork;
    QLabel *label_21;
    QLabel *peerVersion;
    QLabel *label_28;
    QLabel *peerSubversion;
    QLabel *label_4;
    QLabel *peerServices;
    QLabel *peerRelayTxesLabel;
    QLabel *peerRelayTxes;
    QLabel *peerHighBandwidthLabel;
    QLabel *peerHighBandwidth;
    QLabel *label_29;
    QLabel *peerHeight;
    QLabel *label_27;
    QLabel *peerSyncHeight;
    QLabel *label_25;
    QLabel *peerCommonHeight;
    QLabel *label_22;
    QLabel *peerConnTime;
    QLabel *peerLastBlockLabel;
    QLabel *peerLastBlock;
    QLabel *peerLastTxLabel;
    QLabel *peerLastTx;
    QLabel *label_15;
    QLabel *peerLastSend;
    QLabel *label_19;
    QLabel *peerLastRecv;
    QLabel *label_18;
    QLabel *peerBytesSent;
    QLabel *label_20;
    QLabel *peerBytesRecv;
    QLabel *label_26;
    QLabel *peerPingTime;
    QLabel *peerPingWaitLabel;
    QLabel *peerPingWait;
    QLabel *peerMinPingLabel;
    QLabel *peerMinPing;
    QLabel *label_timeoffset;
    QLabel *timeoffset;
    QLabel *peerMappedASLabel;
    QLabel *peerMappedAS;
    QLabel *peerAddrRelayEnabledLabel;
    QLabel *peerAddrRelayEnabled;
    QLabel *peerAddrProcessedLabel;
    QLabel *peerAddrProcessed;
    QLabel *peerAddrRateLimitedLabel;
    QLabel *peerAddrRateLimited;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *RPCConsole)
    {
        if (RPCConsole->objectName().isEmpty())
            RPCConsole->setObjectName(QString::fromUtf8("RPCConsole"));
        RPCConsole->resize(740, 430);
        verticalLayout_2 = new QVBoxLayout(RPCConsole);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_alerts = new QLabel(RPCConsole);
        label_alerts->setObjectName(QString::fromUtf8("label_alerts"));
        label_alerts->setVisible(false);
        label_alerts->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000; }"));
        label_alerts->setWordWrap(true);
        label_alerts->setMargin(3);
        label_alerts->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_alerts);

        tabWidget = new QTabWidget(RPCConsole);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_info = new QWidget();
        tab_info->setObjectName(QString::fromUtf8("tab_info"));
        gridLayout = new QGridLayout(tab_info);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        label_9 = new QLabel(tab_info);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_6 = new QLabel(tab_info);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        clientVersion = new QLabel(tab_info);
        clientVersion->setObjectName(QString::fromUtf8("clientVersion"));
        clientVersion->setCursor(QCursor(Qt::IBeamCursor));
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientVersion, 1, 1, 1, 2);

        labelClientUserAgent = new QLabel(tab_info);
        labelClientUserAgent->setObjectName(QString::fromUtf8("labelClientUserAgent"));
        labelClientUserAgent->setIndent(10);

        gridLayout->addWidget(labelClientUserAgent, 2, 0, 1, 1);

        clientUserAgent = new QLabel(tab_info);
        clientUserAgent->setObjectName(QString::fromUtf8("clientUserAgent"));
        clientUserAgent->setCursor(QCursor(Qt::IBeamCursor));
        clientUserAgent->setTextFormat(Qt::PlainText);
        clientUserAgent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientUserAgent, 2, 1, 1, 2);

        label_12 = new QLabel(tab_info);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        dataDir = new QLabel(tab_info);
        dataDir->setObjectName(QString::fromUtf8("dataDir"));
        dataDir->setCursor(QCursor(Qt::IBeamCursor));
        dataDir->setTextFormat(Qt::PlainText);
        dataDir->setWordWrap(true);
        dataDir->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(dataDir, 3, 1, 1, 2);

        label_11 = new QLabel(tab_info);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        blocksDir = new QLabel(tab_info);
        blocksDir->setObjectName(QString::fromUtf8("blocksDir"));
        blocksDir->setCursor(QCursor(Qt::IBeamCursor));
        blocksDir->setTextFormat(Qt::PlainText);
        blocksDir->setWordWrap(true);
        blocksDir->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(blocksDir, 4, 1, 1, 2);

        label_13 = new QLabel(tab_info);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        startupTime = new QLabel(tab_info);
        startupTime->setObjectName(QString::fromUtf8("startupTime"));
        startupTime->setCursor(QCursor(Qt::IBeamCursor));
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(startupTime, 5, 1, 1, 2);

        labelNetwork = new QLabel(tab_info);
        labelNetwork->setObjectName(QString::fromUtf8("labelNetwork"));
        labelNetwork->setFont(font);

        gridLayout->addWidget(labelNetwork, 6, 0, 1, 1);

        label_8 = new QLabel(tab_info);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        networkName = new QLabel(tab_info);
        networkName->setObjectName(QString::fromUtf8("networkName"));
        networkName->setCursor(QCursor(Qt::IBeamCursor));
        networkName->setTextFormat(Qt::PlainText);
        networkName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(networkName, 7, 1, 1, 2);

        label_7 = new QLabel(tab_info);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        numberOfConnections = new QLabel(tab_info);
        numberOfConnections->setObjectName(QString::fromUtf8("numberOfConnections"));
        numberOfConnections->setCursor(QCursor(Qt::IBeamCursor));
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfConnections, 8, 1, 1, 2);

        label_10 = new QLabel(tab_info);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        label_3 = new QLabel(tab_info);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 10, 0, 1, 1);

        numberOfBlocks = new QLabel(tab_info);
        numberOfBlocks->setObjectName(QString::fromUtf8("numberOfBlocks"));
        numberOfBlocks->setCursor(QCursor(Qt::IBeamCursor));
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfBlocks, 10, 1, 1, 2);

        labelLastBlockTime = new QLabel(tab_info);
        labelLastBlockTime->setObjectName(QString::fromUtf8("labelLastBlockTime"));

        gridLayout->addWidget(labelLastBlockTime, 11, 0, 1, 1);

        lastBlockTime = new QLabel(tab_info);
        lastBlockTime->setObjectName(QString::fromUtf8("lastBlockTime"));
        lastBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockTime, 11, 1, 1, 2);

        labelMempoolTitle = new QLabel(tab_info);
        labelMempoolTitle->setObjectName(QString::fromUtf8("labelMempoolTitle"));
        labelMempoolTitle->setFont(font);

        gridLayout->addWidget(labelMempoolTitle, 12, 0, 1, 1);

        labelNumberOfTransactions = new QLabel(tab_info);
        labelNumberOfTransactions->setObjectName(QString::fromUtf8("labelNumberOfTransactions"));

        gridLayout->addWidget(labelNumberOfTransactions, 13, 0, 1, 1);

        mempoolNumberTxs = new QLabel(tab_info);
        mempoolNumberTxs->setObjectName(QString::fromUtf8("mempoolNumberTxs"));
        mempoolNumberTxs->setCursor(QCursor(Qt::IBeamCursor));
        mempoolNumberTxs->setTextFormat(Qt::PlainText);
        mempoolNumberTxs->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mempoolNumberTxs, 13, 1, 1, 1);

        labelMemoryUsage = new QLabel(tab_info);
        labelMemoryUsage->setObjectName(QString::fromUtf8("labelMemoryUsage"));

        gridLayout->addWidget(labelMemoryUsage, 14, 0, 1, 1);

        mempoolSize = new QLabel(tab_info);
        mempoolSize->setObjectName(QString::fromUtf8("mempoolSize"));
        mempoolSize->setCursor(QCursor(Qt::IBeamCursor));
        mempoolSize->setTextFormat(Qt::PlainText);
        mempoolSize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mempoolSize, 14, 1, 1, 1);

        verticalLayoutDebugButton = new QVBoxLayout();
        verticalLayoutDebugButton->setSpacing(3);
        verticalLayoutDebugButton->setObjectName(QString::fromUtf8("verticalLayoutDebugButton"));
        verticalSpacer_2 = new QSpacerItem(10, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutDebugButton->addItem(verticalSpacer_2);

        labelDebugLogfile = new QLabel(tab_info);
        labelDebugLogfile->setObjectName(QString::fromUtf8("labelDebugLogfile"));

        verticalLayoutDebugButton->addWidget(labelDebugLogfile);

        openDebugLogfileButton = new QPushButton(tab_info);
        openDebugLogfileButton->setObjectName(QString::fromUtf8("openDebugLogfileButton"));
        openDebugLogfileButton->setAutoDefault(false);

        verticalLayoutDebugButton->addWidget(openDebugLogfileButton);


        gridLayout->addLayout(verticalLayoutDebugButton, 12, 2, 3, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 15, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        tabWidget->addTab(tab_info, QString());
        tab_console = new QWidget();
        tab_console->setObjectName(QString::fromUtf8("tab_console"));
        verticalLayout_3 = new QVBoxLayout(tab_console);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        WalletSelectorLabel = new QLabel(tab_console);
        WalletSelectorLabel->setObjectName(QString::fromUtf8("WalletSelectorLabel"));

        horizontalLayout->addWidget(WalletSelectorLabel);

        WalletSelector = new QComboBox(tab_console);
        WalletSelector->addItem(QString());
        WalletSelector->setObjectName(QString::fromUtf8("WalletSelector"));
        WalletSelector->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(WalletSelector);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        fontSmallerButton = new QToolButton(tab_console);
        fontSmallerButton->setObjectName(QString::fromUtf8("fontSmallerButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/fontsmaller"), QSize(), QIcon::Normal, QIcon::Off);
        fontSmallerButton->setIcon(icon);
        fontSmallerButton->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(fontSmallerButton);

        fontBiggerButton = new QToolButton(tab_console);
        fontBiggerButton->setObjectName(QString::fromUtf8("fontBiggerButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/fontbigger"), QSize(), QIcon::Normal, QIcon::Off);
        fontBiggerButton->setIcon(icon1);
        fontBiggerButton->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(fontBiggerButton);

        clearButton = new QToolButton(tab_console);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon2);
        clearButton->setIconSize(QSize(22, 22));
#if QT_CONFIG(shortcut)
        clearButton->setShortcut(QString::fromUtf8("Ctrl+L"));
#endif // QT_CONFIG(shortcut)

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        messagesWidget = new QTextEdit(tab_console);
        messagesWidget->setObjectName(QString::fromUtf8("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        horizontalLayoutPrompt = new QHBoxLayout();
        horizontalLayoutPrompt->setSpacing(3);
        horizontalLayoutPrompt->setObjectName(QString::fromUtf8("horizontalLayoutPrompt"));
        promptIcon = new QPushButton(tab_console);
        promptIcon->setObjectName(QString::fromUtf8("promptIcon"));
        promptIcon->setEnabled(false);
        promptIcon->setMaximumSize(QSize(16, 24));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/prompticon"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icons/prompticon"), QSize(), QIcon::Disabled, QIcon::Off);
        promptIcon->setIcon(icon3);
        promptIcon->setIconSize(QSize(14, 14));
        promptIcon->setAutoDefault(false);
        promptIcon->setFlat(true);

        horizontalLayoutPrompt->addWidget(promptIcon);

        lineEdit = new QLineEdit(tab_console);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);

        horizontalLayoutPrompt->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayoutPrompt);

        tabWidget->addTab(tab_console, QString());
        tab_nettraffic = new QWidget();
        tab_nettraffic->setObjectName(QString::fromUtf8("tab_nettraffic"));
        horizontalLayout_3 = new QHBoxLayout(tab_nettraffic);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        trafficGraph = new TrafficGraphWidget(tab_nettraffic);
        trafficGraph->setObjectName(QString::fromUtf8("trafficGraph"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trafficGraph->sizePolicy().hasHeightForWidth());
        trafficGraph->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(trafficGraph);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sldGraphRange = new QSlider(tab_nettraffic);
        sldGraphRange->setObjectName(QString::fromUtf8("sldGraphRange"));
        sldGraphRange->setMinimum(1);
        sldGraphRange->setMaximum(288);
        sldGraphRange->setPageStep(12);
        sldGraphRange->setValue(6);
        sldGraphRange->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sldGraphRange);

        lblGraphRange = new QLabel(tab_nettraffic);
        lblGraphRange->setObjectName(QString::fromUtf8("lblGraphRange"));
        lblGraphRange->setMinimumSize(QSize(100, 0));
        lblGraphRange->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblGraphRange);

        btnClearTrafficGraph = new QPushButton(tab_nettraffic);
        btnClearTrafficGraph->setObjectName(QString::fromUtf8("btnClearTrafficGraph"));
        btnClearTrafficGraph->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnClearTrafficGraph);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(tab_nettraffic);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setMinimumSize(QSize(10, 0));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        line->setPalette(palette);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_4->addWidget(label_16);

        lblBytesIn = new QLabel(groupBox);
        lblBytesIn->setObjectName(QString::fromUtf8("lblBytesIn"));
        lblBytesIn->setMinimumSize(QSize(50, 0));
        lblBytesIn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lblBytesIn);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setMinimumSize(QSize(10, 0));
        QPalette palette1;
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        line_2->setPalette(palette1);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_2);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_5->addWidget(label_17);

        lblBytesOut = new QLabel(groupBox);
        lblBytesOut->setObjectName(QString::fromUtf8("lblBytesOut"));
        lblBytesOut->setMinimumSize(QSize(50, 0));
        lblBytesOut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lblBytesOut);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 407, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        verticalLayout->addWidget(groupBox);


        horizontalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(tab_nettraffic, QString());
        tab_peers = new QWidget();
        tab_peers->setObjectName(QString::fromUtf8("tab_peers"));
        verticalLayout_6 = new QVBoxLayout(tab_peers);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        splitter = new QSplitter(tab_peers);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        widget_1 = new QWidget(splitter);
        widget_1->setObjectName(QString::fromUtf8("widget_1"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_1->sizePolicy().hasHeightForWidth());
        widget_1->setSizePolicy(sizePolicy2);
        widget_1->setMinimumSize(QSize(400, 0));
        verticalLayout_7 = new QVBoxLayout(widget_1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        peerWidget = new QTableView(widget_1);
        peerWidget->setObjectName(QString::fromUtf8("peerWidget"));
        peerWidget->setTabKeyNavigation(false);
        peerWidget->setAlternatingRowColors(true);
        peerWidget->setTextElideMode(Qt::ElideMiddle);
        peerWidget->setSortingEnabled(true);
        peerWidget->setWordWrap(false);
        peerWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_7->addWidget(peerWidget);

        banHeading = new QLabel(widget_1);
        banHeading->setObjectName(QString::fromUtf8("banHeading"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(banHeading->sizePolicy().hasHeightForWidth());
        banHeading->setSizePolicy(sizePolicy3);
        banHeading->setMinimumSize(QSize(0, 32));
        banHeading->setMaximumSize(QSize(16777215, 32));
        QFont font1;
        font1.setPointSize(12);
        banHeading->setFont(font1);
        banHeading->setCursor(QCursor(Qt::IBeamCursor));
        banHeading->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        banHeading->setWordWrap(true);
        banHeading->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_7->addWidget(banHeading);

        banlistWidget = new QTableView(widget_1);
        banlistWidget->setObjectName(QString::fromUtf8("banlistWidget"));
        banlistWidget->setTabKeyNavigation(false);
        banlistWidget->setAlternatingRowColors(true);
        banlistWidget->setSortingEnabled(true);
        banlistWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_7->addWidget(banlistWidget);

        splitter->addWidget(widget_1);
        peersTabRightPanel = new QWidget(splitter);
        peersTabRightPanel->setObjectName(QString::fromUtf8("peersTabRightPanel"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(peersTabRightPanel->sizePolicy().hasHeightForWidth());
        peersTabRightPanel->setSizePolicy(sizePolicy4);
        peersTabRightPanel->setMinimumSize(QSize(300, 0));
        verticalLayout_8 = new QVBoxLayout(peersTabRightPanel);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        peerHeading = new QLabel(peersTabRightPanel);
        peerHeading->setObjectName(QString::fromUtf8("peerHeading"));
        sizePolicy3.setHeightForWidth(peerHeading->sizePolicy().hasHeightForWidth());
        peerHeading->setSizePolicy(sizePolicy3);
        peerHeading->setMinimumSize(QSize(0, 32));
        QFont font2;
        font2.setPointSize(10);
        peerHeading->setFont(font2);
        peerHeading->setCursor(QCursor(Qt::IBeamCursor));
        peerHeading->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        peerHeading->setWordWrap(true);
        peerHeading->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_8->addWidget(peerHeading);

        scrollArea = new QScrollArea(peersTabRightPanel);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        detailWidget = new QWidget();
        detailWidget->setObjectName(QString::fromUtf8("detailWidget"));
        detailWidget->setGeometry(QRect(0, 0, 300, 426));
        gridLayout_2 = new QGridLayout(detailWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_30 = new QLabel(detailWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_2->addWidget(label_30, 0, 0, 1, 1);

        peerPermissions = new QLabel(detailWidget);
        peerPermissions->setObjectName(QString::fromUtf8("peerPermissions"));
        peerPermissions->setCursor(QCursor(Qt::IBeamCursor));
        peerPermissions->setTextFormat(Qt::PlainText);
        peerPermissions->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerPermissions, 0, 1, 1, 1);

        peerConnectionTypeLabel = new QLabel(detailWidget);
        peerConnectionTypeLabel->setObjectName(QString::fromUtf8("peerConnectionTypeLabel"));

        gridLayout_2->addWidget(peerConnectionTypeLabel, 1, 0, 1, 1);

        peerConnectionType = new QLabel(detailWidget);
        peerConnectionType->setObjectName(QString::fromUtf8("peerConnectionType"));
        peerConnectionType->setCursor(QCursor(Qt::IBeamCursor));
        peerConnectionType->setTextFormat(Qt::PlainText);
        peerConnectionType->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerConnectionType, 1, 1, 1, 1);

        peerNetworkLabel = new QLabel(detailWidget);
        peerNetworkLabel->setObjectName(QString::fromUtf8("peerNetworkLabel"));

        gridLayout_2->addWidget(peerNetworkLabel, 2, 0, 1, 1);

        peerNetwork = new QLabel(detailWidget);
        peerNetwork->setObjectName(QString::fromUtf8("peerNetwork"));
        peerNetwork->setCursor(QCursor(Qt::IBeamCursor));
        peerNetwork->setTextFormat(Qt::PlainText);
        peerNetwork->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerNetwork, 2, 1, 1, 1);

        label_21 = new QLabel(detailWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 3, 0, 1, 1);

        peerVersion = new QLabel(detailWidget);
        peerVersion->setObjectName(QString::fromUtf8("peerVersion"));
        peerVersion->setCursor(QCursor(Qt::IBeamCursor));
        peerVersion->setTextFormat(Qt::PlainText);
        peerVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerVersion, 3, 1, 1, 1);

        label_28 = new QLabel(detailWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_2->addWidget(label_28, 4, 0, 1, 1);

        peerSubversion = new QLabel(detailWidget);
        peerSubversion->setObjectName(QString::fromUtf8("peerSubversion"));
        peerSubversion->setCursor(QCursor(Qt::IBeamCursor));
        peerSubversion->setTextFormat(Qt::PlainText);
        peerSubversion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerSubversion, 4, 1, 1, 1);

        label_4 = new QLabel(detailWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 5, 0, 1, 1);

        peerServices = new QLabel(detailWidget);
        peerServices->setObjectName(QString::fromUtf8("peerServices"));
        peerServices->setCursor(QCursor(Qt::IBeamCursor));
        peerServices->setTextFormat(Qt::PlainText);
        peerServices->setWordWrap(true);
        peerServices->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerServices, 5, 1, 1, 1);

        peerRelayTxesLabel = new QLabel(detailWidget);
        peerRelayTxesLabel->setObjectName(QString::fromUtf8("peerRelayTxesLabel"));

        gridLayout_2->addWidget(peerRelayTxesLabel, 6, 0, 1, 1);

        peerRelayTxes = new QLabel(detailWidget);
        peerRelayTxes->setObjectName(QString::fromUtf8("peerRelayTxes"));
        peerRelayTxes->setCursor(QCursor(Qt::IBeamCursor));
        peerRelayTxes->setTextFormat(Qt::PlainText);
        peerRelayTxes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerRelayTxes, 6, 1, 1, 1);

        peerHighBandwidthLabel = new QLabel(detailWidget);
        peerHighBandwidthLabel->setObjectName(QString::fromUtf8("peerHighBandwidthLabel"));

        gridLayout_2->addWidget(peerHighBandwidthLabel, 7, 0, 1, 1);

        peerHighBandwidth = new QLabel(detailWidget);
        peerHighBandwidth->setObjectName(QString::fromUtf8("peerHighBandwidth"));
        peerHighBandwidth->setCursor(QCursor(Qt::IBeamCursor));
        peerHighBandwidth->setTextFormat(Qt::PlainText);
        peerHighBandwidth->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerHighBandwidth, 7, 1, 1, 1);

        label_29 = new QLabel(detailWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_2->addWidget(label_29, 8, 0, 1, 1);

        peerHeight = new QLabel(detailWidget);
        peerHeight->setObjectName(QString::fromUtf8("peerHeight"));
        peerHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerHeight->setTextFormat(Qt::PlainText);
        peerHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerHeight, 8, 1, 1, 1);

        label_27 = new QLabel(detailWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_2->addWidget(label_27, 9, 0, 1, 1);

        peerSyncHeight = new QLabel(detailWidget);
        peerSyncHeight->setObjectName(QString::fromUtf8("peerSyncHeight"));
        peerSyncHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerSyncHeight->setTextFormat(Qt::PlainText);
        peerSyncHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerSyncHeight, 9, 1, 1, 1);

        label_25 = new QLabel(detailWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 10, 0, 1, 1);

        peerCommonHeight = new QLabel(detailWidget);
        peerCommonHeight->setObjectName(QString::fromUtf8("peerCommonHeight"));
        peerCommonHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerCommonHeight->setTextFormat(Qt::PlainText);
        peerCommonHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerCommonHeight, 10, 1, 1, 1);

        label_22 = new QLabel(detailWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_2->addWidget(label_22, 11, 0, 1, 1);

        peerConnTime = new QLabel(detailWidget);
        peerConnTime->setObjectName(QString::fromUtf8("peerConnTime"));
        peerConnTime->setCursor(QCursor(Qt::IBeamCursor));
        peerConnTime->setTextFormat(Qt::PlainText);
        peerConnTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerConnTime, 11, 1, 1, 1);

        peerLastBlockLabel = new QLabel(detailWidget);
        peerLastBlockLabel->setObjectName(QString::fromUtf8("peerLastBlockLabel"));

        gridLayout_2->addWidget(peerLastBlockLabel, 12, 0, 1, 1);

        peerLastBlock = new QLabel(detailWidget);
        peerLastBlock->setObjectName(QString::fromUtf8("peerLastBlock"));
        peerLastBlock->setCursor(QCursor(Qt::IBeamCursor));
        peerLastBlock->setTextFormat(Qt::PlainText);
        peerLastBlock->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastBlock, 12, 1, 1, 1);

        peerLastTxLabel = new QLabel(detailWidget);
        peerLastTxLabel->setObjectName(QString::fromUtf8("peerLastTxLabel"));

        gridLayout_2->addWidget(peerLastTxLabel, 13, 0, 1, 1);

        peerLastTx = new QLabel(detailWidget);
        peerLastTx->setObjectName(QString::fromUtf8("peerLastTx"));
        peerLastTx->setCursor(QCursor(Qt::IBeamCursor));
        peerLastTx->setTextFormat(Qt::PlainText);
        peerLastTx->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastTx, 13, 1, 1, 1);

        label_15 = new QLabel(detailWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 14, 0, 1, 1);

        peerLastSend = new QLabel(detailWidget);
        peerLastSend->setObjectName(QString::fromUtf8("peerLastSend"));
        peerLastSend->setCursor(QCursor(Qt::IBeamCursor));
        peerLastSend->setTextFormat(Qt::PlainText);
        peerLastSend->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastSend, 14, 1, 1, 1);

        label_19 = new QLabel(detailWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 15, 0, 1, 1);

        peerLastRecv = new QLabel(detailWidget);
        peerLastRecv->setObjectName(QString::fromUtf8("peerLastRecv"));
        peerLastRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerLastRecv->setTextFormat(Qt::PlainText);
        peerLastRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastRecv, 15, 1, 1, 1);

        label_18 = new QLabel(detailWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 16, 0, 1, 1);

        peerBytesSent = new QLabel(detailWidget);
        peerBytesSent->setObjectName(QString::fromUtf8("peerBytesSent"));
        peerBytesSent->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesSent->setTextFormat(Qt::PlainText);
        peerBytesSent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerBytesSent, 16, 1, 1, 1);

        label_20 = new QLabel(detailWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 17, 0, 1, 1);

        peerBytesRecv = new QLabel(detailWidget);
        peerBytesRecv->setObjectName(QString::fromUtf8("peerBytesRecv"));
        peerBytesRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesRecv->setTextFormat(Qt::PlainText);
        peerBytesRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerBytesRecv, 17, 1, 1, 1);

        label_26 = new QLabel(detailWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_2->addWidget(label_26, 18, 0, 1, 1);

        peerPingTime = new QLabel(detailWidget);
        peerPingTime->setObjectName(QString::fromUtf8("peerPingTime"));
        peerPingTime->setCursor(QCursor(Qt::IBeamCursor));
        peerPingTime->setTextFormat(Qt::PlainText);
        peerPingTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerPingTime, 18, 1, 1, 1);

        peerPingWaitLabel = new QLabel(detailWidget);
        peerPingWaitLabel->setObjectName(QString::fromUtf8("peerPingWaitLabel"));

        gridLayout_2->addWidget(peerPingWaitLabel, 19, 0, 1, 1);

        peerPingWait = new QLabel(detailWidget);
        peerPingWait->setObjectName(QString::fromUtf8("peerPingWait"));
        peerPingWait->setCursor(QCursor(Qt::IBeamCursor));
        peerPingWait->setTextFormat(Qt::PlainText);
        peerPingWait->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerPingWait, 19, 1, 1, 1);

        peerMinPingLabel = new QLabel(detailWidget);
        peerMinPingLabel->setObjectName(QString::fromUtf8("peerMinPingLabel"));

        gridLayout_2->addWidget(peerMinPingLabel, 20, 0, 1, 1);

        peerMinPing = new QLabel(detailWidget);
        peerMinPing->setObjectName(QString::fromUtf8("peerMinPing"));
        peerMinPing->setCursor(QCursor(Qt::IBeamCursor));
        peerMinPing->setTextFormat(Qt::PlainText);
        peerMinPing->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerMinPing, 20, 1, 1, 1);

        label_timeoffset = new QLabel(detailWidget);
        label_timeoffset->setObjectName(QString::fromUtf8("label_timeoffset"));

        gridLayout_2->addWidget(label_timeoffset, 21, 0, 1, 1);

        timeoffset = new QLabel(detailWidget);
        timeoffset->setObjectName(QString::fromUtf8("timeoffset"));
        timeoffset->setCursor(QCursor(Qt::IBeamCursor));
        timeoffset->setTextFormat(Qt::PlainText);
        timeoffset->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(timeoffset, 21, 1, 1, 1);

        peerMappedASLabel = new QLabel(detailWidget);
        peerMappedASLabel->setObjectName(QString::fromUtf8("peerMappedASLabel"));

        gridLayout_2->addWidget(peerMappedASLabel, 22, 0, 1, 1);

        peerMappedAS = new QLabel(detailWidget);
        peerMappedAS->setObjectName(QString::fromUtf8("peerMappedAS"));
        peerMappedAS->setCursor(QCursor(Qt::IBeamCursor));
        peerMappedAS->setTextFormat(Qt::PlainText);
        peerMappedAS->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerMappedAS, 22, 1, 1, 1);

        peerAddrRelayEnabledLabel = new QLabel(detailWidget);
        peerAddrRelayEnabledLabel->setObjectName(QString::fromUtf8("peerAddrRelayEnabledLabel"));

        gridLayout_2->addWidget(peerAddrRelayEnabledLabel, 23, 0, 1, 1);

        peerAddrRelayEnabled = new QLabel(detailWidget);
        peerAddrRelayEnabled->setObjectName(QString::fromUtf8("peerAddrRelayEnabled"));
        peerAddrRelayEnabled->setCursor(QCursor(Qt::IBeamCursor));
        peerAddrRelayEnabled->setTextFormat(Qt::PlainText);
        peerAddrRelayEnabled->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerAddrRelayEnabled, 23, 1, 1, 1);

        peerAddrProcessedLabel = new QLabel(detailWidget);
        peerAddrProcessedLabel->setObjectName(QString::fromUtf8("peerAddrProcessedLabel"));

        gridLayout_2->addWidget(peerAddrProcessedLabel, 24, 0, 1, 1);

        peerAddrProcessed = new QLabel(detailWidget);
        peerAddrProcessed->setObjectName(QString::fromUtf8("peerAddrProcessed"));
        peerAddrProcessed->setCursor(QCursor(Qt::IBeamCursor));
        peerAddrProcessed->setTextFormat(Qt::PlainText);
        peerAddrProcessed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerAddrProcessed, 24, 1, 1, 1);

        peerAddrRateLimitedLabel = new QLabel(detailWidget);
        peerAddrRateLimitedLabel->setObjectName(QString::fromUtf8("peerAddrRateLimitedLabel"));

        gridLayout_2->addWidget(peerAddrRateLimitedLabel, 25, 0, 1, 1);

        peerAddrRateLimited = new QLabel(detailWidget);
        peerAddrRateLimited->setObjectName(QString::fromUtf8("peerAddrRateLimited"));
        peerAddrRateLimited->setCursor(QCursor(Qt::IBeamCursor));
        peerAddrRateLimited->setTextFormat(Qt::PlainText);
        peerAddrRateLimited->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerAddrRateLimited, 25, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 26, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);
        scrollArea->setWidget(detailWidget);

        verticalLayout_8->addWidget(scrollArea);

        splitter->addWidget(peersTabRightPanel);

        verticalLayout_6->addWidget(splitter);

        tabWidget->addTab(tab_peers, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(RPCConsole);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole);
    } // setupUi

    void retranslateUi(QWidget *RPCConsole)
    {
        RPCConsole->setWindowTitle(QCoreApplication::translate("RPCConsole", "Node window", nullptr));
        label_9->setText(QCoreApplication::translate("RPCConsole", "General", nullptr));
        label_6->setText(QCoreApplication::translate("RPCConsole", "Client version", nullptr));
        clientVersion->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelClientUserAgent->setText(QCoreApplication::translate("RPCConsole", "User Agent", nullptr));
        clientUserAgent->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_12->setText(QCoreApplication::translate("RPCConsole", "Datadir", nullptr));
#if QT_CONFIG(tooltip)
        dataDir->setToolTip(QCoreApplication::translate("RPCConsole", "To specify a non-default location of the data directory use the '%1' option.", nullptr));
#endif // QT_CONFIG(tooltip)
        dataDir->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_11->setText(QCoreApplication::translate("RPCConsole", "Blocksdir", nullptr));
#if QT_CONFIG(tooltip)
        blocksDir->setToolTip(QCoreApplication::translate("RPCConsole", "To specify a non-default location of the blocks directory use the '%1' option.", nullptr));
#endif // QT_CONFIG(tooltip)
        blocksDir->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_13->setText(QCoreApplication::translate("RPCConsole", "Startup time", nullptr));
        startupTime->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelNetwork->setText(QCoreApplication::translate("RPCConsole", "Network", nullptr));
        label_8->setText(QCoreApplication::translate("RPCConsole", "Name", nullptr));
        networkName->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_7->setText(QCoreApplication::translate("RPCConsole", "Number of connections", nullptr));
        numberOfConnections->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_10->setText(QCoreApplication::translate("RPCConsole", "Block chain", nullptr));
        label_3->setText(QCoreApplication::translate("RPCConsole", "Current block height", nullptr));
        numberOfBlocks->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelLastBlockTime->setText(QCoreApplication::translate("RPCConsole", "Last block time", nullptr));
        lastBlockTime->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelMempoolTitle->setText(QCoreApplication::translate("RPCConsole", "Memory Pool", nullptr));
        labelNumberOfTransactions->setText(QCoreApplication::translate("RPCConsole", "Current number of transactions", nullptr));
        mempoolNumberTxs->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelMemoryUsage->setText(QCoreApplication::translate("RPCConsole", "Memory usage", nullptr));
        mempoolSize->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelDebugLogfile->setText(QCoreApplication::translate("RPCConsole", "Debug log file", nullptr));
#if QT_CONFIG(tooltip)
        openDebugLogfileButton->setToolTip(QCoreApplication::translate("RPCConsole", "Open the %1 debug log file from the current data directory. This can take a few seconds for large log files.", nullptr));
#endif // QT_CONFIG(tooltip)
        openDebugLogfileButton->setText(QCoreApplication::translate("RPCConsole", "&Open", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_info), QCoreApplication::translate("RPCConsole", "&Information", nullptr));
        WalletSelectorLabel->setText(QCoreApplication::translate("RPCConsole", "Wallet: ", nullptr));
        WalletSelector->setItemText(0, QCoreApplication::translate("RPCConsole", "(none)", nullptr));

#if QT_CONFIG(tooltip)
        fontSmallerButton->setToolTip(QCoreApplication::translate("RPCConsole", "Decrease font size", nullptr));
#endif // QT_CONFIG(tooltip)
        fontSmallerButton->setText(QString());
#if QT_CONFIG(tooltip)
        fontBiggerButton->setToolTip(QCoreApplication::translate("RPCConsole", "Increase font size", nullptr));
#endif // QT_CONFIG(tooltip)
        fontBiggerButton->setText(QString());
#if QT_CONFIG(tooltip)
        clearButton->setToolTip(QCoreApplication::translate("RPCConsole", "Clear console", nullptr));
#endif // QT_CONFIG(tooltip)
        clearButton->setText(QString());
        promptIcon->setText(QString());
        lineEdit->setPlaceholderText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_console), QCoreApplication::translate("RPCConsole", "&Console", nullptr));
        btnClearTrafficGraph->setText(QCoreApplication::translate("RPCConsole", "&Reset", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RPCConsole", "Totals", nullptr));
        label_16->setText(QCoreApplication::translate("RPCConsole", "Received", nullptr));
        label_17->setText(QCoreApplication::translate("RPCConsole", "Sent", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_nettraffic), QCoreApplication::translate("RPCConsole", "&Network Traffic", nullptr));
        banHeading->setText(QCoreApplication::translate("RPCConsole", "Banned peers", nullptr));
        peerHeading->setText(QCoreApplication::translate("RPCConsole", "Select a peer to view detailed information.", nullptr));
        label_30->setText(QCoreApplication::translate("RPCConsole", "Permissions", nullptr));
        peerPermissions->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerConnectionTypeLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The direction and type of peer connection: %1", nullptr));
#endif // QT_CONFIG(tooltip)
        peerConnectionTypeLabel->setText(QCoreApplication::translate("RPCConsole", "Direction/Type", nullptr));
        peerConnectionType->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerNetworkLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The network protocol this peer is connected through: IPv4, IPv6, Onion, I2P, or CJDNS.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerNetworkLabel->setText(QCoreApplication::translate("RPCConsole", "Network", nullptr));
        peerNetwork->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_21->setText(QCoreApplication::translate("RPCConsole", "Version", nullptr));
        peerVersion->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_28->setText(QCoreApplication::translate("RPCConsole", "User Agent", nullptr));
        peerSubversion->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_4->setText(QCoreApplication::translate("RPCConsole", "Services", nullptr));
        peerServices->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerRelayTxesLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Whether we relay transactions to this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerRelayTxesLabel->setText(QCoreApplication::translate("RPCConsole", "Transaction Relay", nullptr));
        peerRelayTxes->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerHighBandwidthLabel->setToolTip(QCoreApplication::translate("RPCConsole", "High bandwidth BIP152 compact block relay: %1", nullptr));
#endif // QT_CONFIG(tooltip)
        peerHighBandwidthLabel->setText(QCoreApplication::translate("RPCConsole", "High Bandwidth", nullptr));
        peerHighBandwidth->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_29->setText(QCoreApplication::translate("RPCConsole", "Starting Block", nullptr));
        peerHeight->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_27->setText(QCoreApplication::translate("RPCConsole", "Synced Headers", nullptr));
        peerSyncHeight->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_25->setText(QCoreApplication::translate("RPCConsole", "Synced Blocks", nullptr));
        peerCommonHeight->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_22->setText(QCoreApplication::translate("RPCConsole", "Connection Time", nullptr));
        peerConnTime->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerLastBlockLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Elapsed time since a novel block passing initial validity checks was received from this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerLastBlockLabel->setText(QCoreApplication::translate("RPCConsole", "Last Block", nullptr));
        peerLastBlock->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerLastTxLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Elapsed time since a novel transaction accepted into our mempool was received from this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerLastTxLabel->setText(QCoreApplication::translate("RPCConsole", "Last Transaction", nullptr));
        peerLastTx->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_15->setText(QCoreApplication::translate("RPCConsole", "Last Send", nullptr));
        peerLastSend->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_19->setText(QCoreApplication::translate("RPCConsole", "Last Receive", nullptr));
        peerLastRecv->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_18->setText(QCoreApplication::translate("RPCConsole", "Sent", nullptr));
        peerBytesSent->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_20->setText(QCoreApplication::translate("RPCConsole", "Received", nullptr));
        peerBytesRecv->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_26->setText(QCoreApplication::translate("RPCConsole", "Ping Time", nullptr));
        peerPingTime->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerPingWaitLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The duration of a currently outstanding ping.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerPingWaitLabel->setText(QCoreApplication::translate("RPCConsole", "Ping Wait", nullptr));
        peerPingWait->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        peerMinPingLabel->setText(QCoreApplication::translate("RPCConsole", "Min Ping", nullptr));
        peerMinPing->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_timeoffset->setText(QCoreApplication::translate("RPCConsole", "Time Offset", nullptr));
        timeoffset->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerMappedASLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The mapped Autonomous System used for diversifying peer selection.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerMappedASLabel->setText(QCoreApplication::translate("RPCConsole", "Mapped AS", nullptr));
        peerMappedAS->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerAddrRelayEnabledLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Whether we relay addresses to this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerAddrRelayEnabledLabel->setText(QCoreApplication::translate("RPCConsole", "Address Relay", nullptr));
        peerAddrRelayEnabled->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerAddrProcessedLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The total number of addresses received from this peer that were processed (excludes addresses that were dropped due to rate-limiting).", nullptr));
#endif // QT_CONFIG(tooltip)
        peerAddrProcessedLabel->setText(QCoreApplication::translate("RPCConsole", "Addresses Processed", nullptr));
        peerAddrProcessed->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerAddrRateLimitedLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The total number of addresses received from this peer that were dropped (not processed) due to rate-limiting.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerAddrRateLimitedLabel->setText(QCoreApplication::translate("RPCConsole", "Addresses Rate-Limited", nullptr));
        peerAddrRateLimited->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_peers), QCoreApplication::translate("RPCConsole", "&Peers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole: public Ui_RPCConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGWINDOW_H
