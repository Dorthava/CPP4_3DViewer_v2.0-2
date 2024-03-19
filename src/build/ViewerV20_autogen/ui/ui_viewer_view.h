/********************************************************************************
** Form generated from reading UI file 'viewer_view.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWER_VIEW_H
#define UI_VIEWER_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewerView
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_17;
    QPushButton *button_update;
    QPushButton *button_Screenshot;
    QFrame *frame;
    QSlider *slider_PointSize;
    QLabel *label_15;
    QFrame *frame_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLabel *label_Filename;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QLabel *label_Verts;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QLabel *label_Ribs;
    QSlider *slider_ChangeSize;
    QSlider *slider_LineSize;
    QLabel *label_13;
    QPushButton *button_save;
    QPushButton *Button_File;
    QLabel *label_16;
    QPushButton *button_Gif;
    QLabel *label_9;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QSlider *slider_RotateZ;
    QSlider *slider_RotateX;
    QLabel *label_6;
    QSlider *slider_RotateY;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_RotateZ;
    QLabel *label_RotateY;
    QLabel *label_RotateX;
    QGridLayout *gridLayout_3;
    QLabel *label_TranslateX;
    QLabel *label_TranslateY;
    QLabel *label_3;
    QLabel *label;
    QSlider *slider_TranslateY;
    QLabel *label_TranslateZ;
    QLabel *label_2;
    QSlider *slider_TranslateZ;
    QSlider *slider_TranslateX;
    QComboBox *comboBox_Proj;
    QComboBox *comboBox_Ribs;
    QComboBox *comboBox_Points;
    QLabel *label_18;
    QLabel *label_Scale;
    QPushButton *button_ColorVerts;
    QPushButton *button_ColorRibs;
    QPushButton *button_ColorPhone;

    void setupUi(QWidget *ViewerView)
    {
        if (ViewerView->objectName().isEmpty())
            ViewerView->setObjectName("ViewerView");
        ViewerView->resize(1290, 752);
        gridLayout = new QGridLayout(ViewerView);
        gridLayout->setObjectName("gridLayout");
        scrollArea = new QScrollArea(ViewerView);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1270, 732));
        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 550, 151, 31));
        QFont font;
        font.setPointSize(15);
        label_17->setFont(font);
        label_17->setLayoutDirection(Qt::LeftToRight);
        label_17->setStyleSheet(QString::fromUtf8("border: 2px solid red;\n"
"border-radius: 10px; \n"
""));
        label_17->setAlignment(Qt::AlignCenter);
        button_update = new QPushButton(scrollAreaWidgetContents);
        button_update->setObjectName("button_update");
        button_update->setGeometry(QRect(390, 640, 101, 31));
        button_update->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid red; \n"
"	border-radius: 10px;  \n"
"}\n"
"QPushButton: pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        button_Screenshot = new QPushButton(scrollAreaWidgetContents);
        button_Screenshot->setObjectName("button_Screenshot");
        button_Screenshot->setGeometry(QRect(390, 480, 101, 31));
        button_Screenshot->setFont(font);
        button_Screenshot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid red; \n"
"	border-radius: 10px;  \n"
"}\n"
"QPushButton: pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(180, 450, 16, 271));
        frame->setFrameShape(QFrame::VLine);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(2);
        slider_PointSize = new QSlider(scrollAreaWidgetContents);
        slider_PointSize->setObjectName("slider_PointSize");
        slider_PointSize->setEnabled(true);
        slider_PointSize->setGeometry(QRect(10, 590, 161, 25));
        slider_PointSize->setLayoutDirection(Qt::LeftToRight);
        slider_PointSize->setMaximum(100);
        slider_PointSize->setSliderPosition(0);
        slider_PointSize->setTracking(true);
        slider_PointSize->setOrientation(Qt::Horizontal);
        slider_PointSize->setInvertedAppearance(false);
        slider_PointSize->setInvertedControls(false);
        slider_PointSize->setTickPosition(QSlider::NoTicks);
        slider_PointSize->setTickInterval(10);
        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 460, 131, 31));
        label_15->setFont(font);
        label_15->setLayoutDirection(Qt::LeftToRight);
        label_15->setStyleSheet(QString::fromUtf8("border: 2px solid red; /* \320\232\321\200\320\260\321\201\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"border-radius: 10px;   /* \320\232\321\200\321\203\320\263\320\273\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
""));
        label_15->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(370, 450, 16, 271));
        frame_2->setFrameShape(QFrame::VLine);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(2);
        layoutWidget = new QWidget(scrollAreaWidgetContents);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 360, 381, 82));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("border: 1px solid red; /* \320\232\321\200\320\260\321\201\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 10px;   /* \320\232\321\200\321\203\320\263\320\273\321\213\320\265 \321\203\320\263\320\273\321\213 */"));

        horizontalLayout_3->addWidget(label_10);

        label_Filename = new QLabel(layoutWidget);
        label_Filename->setObjectName("label_Filename");
        label_Filename->setStyleSheet(QString::fromUtf8("border: 1px solid red; /* \320\232\321\200\320\260\321\201\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 10px;   /* \320\232\321\200\321\203\320\263\320\273\321\213\320\265 \321\203\320\263\320\273\321\213 */"));

        horizontalLayout_3->addWidget(label_Filename);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("border: 1px solid red; /* \320\232\321\200\320\260\321\201\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 10px;   /* \320\232\321\200\321\203\320\263\320\273\321\213\320\265 \321\203\320\263\320\273\321\213 */"));

        horizontalLayout_4->addWidget(label_11);

        label_Verts = new QLabel(layoutWidget);
        label_Verts->setObjectName("label_Verts");
        label_Verts->setStyleSheet(QString::fromUtf8("border: 1px solid red; /* \320\232\321\200\320\260\321\201\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 10px;   /* \320\232\321\200\321\203\320\263\320\273\321\213\320\265 \321\203\320\263\320\273\321\213 */"));

        horizontalLayout_4->addWidget(label_Verts);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("border: 1px solid red; /* \320\232\321\200\320\260\321\201\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 10px;   /* \320\232\321\200\321\203\320\263\320\273\321\213\320\265 \321\203\320\263\320\273\321\213 */"));

        horizontalLayout_5->addWidget(label_12);

        label_Ribs = new QLabel(layoutWidget);
        label_Ribs->setObjectName("label_Ribs");
        label_Ribs->setStyleSheet(QString::fromUtf8("border: 1px solid red; /* \320\232\321\200\320\260\321\201\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 10px;   /* \320\232\321\200\321\203\320\263\320\273\321\213\320\265 \321\203\320\263\320\273\321\213 */"));

        horizontalLayout_5->addWidget(label_Ribs);


        verticalLayout_3->addLayout(horizontalLayout_5);

        slider_ChangeSize = new QSlider(scrollAreaWidgetContents);
        slider_ChangeSize->setObjectName("slider_ChangeSize");
        slider_ChangeSize->setGeometry(QRect(160, 100, 241, 25));
        slider_ChangeSize->setMinimum(1);
        slider_ChangeSize->setMaximum(300);
        slider_ChangeSize->setValue(100);
        slider_ChangeSize->setOrientation(Qt::Horizontal);
        slider_LineSize = new QSlider(scrollAreaWidgetContents);
        slider_LineSize->setObjectName("slider_LineSize");
        slider_LineSize->setEnabled(true);
        slider_LineSize->setGeometry(QRect(210, 590, 161, 25));
        slider_LineSize->setLayoutDirection(Qt::LeftToRight);
        slider_LineSize->setMaximum(100);
        slider_LineSize->setSliderPosition(0);
        slider_LineSize->setTracking(true);
        slider_LineSize->setOrientation(Qt::Horizontal);
        slider_LineSize->setInvertedAppearance(false);
        slider_LineSize->setInvertedControls(false);
        slider_LineSize->setTickPosition(QSlider::NoTicks);
        slider_LineSize->setTickInterval(10);
        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 10, 131, 31));
        label_13->setFont(font);
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setStyleSheet(QString::fromUtf8("border: 2px solid red; /* \320\232\321\200\320\260\321\201\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"border-radius: 10px;   /* \320\232\321\200\321\203\320\263\320\273\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
""));
        label_13->setAlignment(Qt::AlignCenter);
        button_save = new QPushButton(scrollAreaWidgetContents);
        button_save->setObjectName("button_save");
        button_save->setGeometry(QRect(390, 600, 101, 31));
        button_save->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid red; \n"
"	border-radius: 10px;  \n"
"}\n"
"QPushButton: pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Button_File = new QPushButton(scrollAreaWidgetContents);
        Button_File->setObjectName("Button_File");
        Button_File->setGeometry(QRect(400, 360, 91, 81));
        Button_File->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid red; \n"
"	border-radius: 10px;  \n"
"}\n"
"QPushButton: pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(210, 460, 131, 31));
        label_16->setFont(font);
        label_16->setLayoutDirection(Qt::LeftToRight);
        label_16->setStyleSheet(QString::fromUtf8("border: 2px solid red; /* \320\232\321\200\320\260\321\201\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"border-radius: 10px;   /* \320\232\321\200\321\203\320\263\320\273\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
""));
        label_16->setAlignment(Qt::AlignCenter);
        button_Gif = new QPushButton(scrollAreaWidgetContents);
        button_Gif->setObjectName("button_Gif");
        button_Gif->setGeometry(QRect(390, 520, 101, 31));
        button_Gif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid red; \n"
"	border-radius: 10px;  \n"
"}\n"
"QPushButton: pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 100, 39, 23));
        layoutWidget_2 = new QWidget(scrollAreaWidgetContents);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 140, 471, 211));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        slider_RotateZ = new QSlider(layoutWidget_2);
        slider_RotateZ->setObjectName("slider_RotateZ");
        slider_RotateZ->setMaximum(360);
        slider_RotateZ->setSliderPosition(0);
        slider_RotateZ->setTracking(true);
        slider_RotateZ->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(slider_RotateZ, 2, 1, 1, 1);

        slider_RotateX = new QSlider(layoutWidget_2);
        slider_RotateX->setObjectName("slider_RotateX");
        slider_RotateX->setEnabled(true);
        slider_RotateX->setLayoutDirection(Qt::LeftToRight);
        slider_RotateX->setMaximum(360);
        slider_RotateX->setSliderPosition(0);
        slider_RotateX->setTracking(true);
        slider_RotateX->setOrientation(Qt::Horizontal);
        slider_RotateX->setInvertedAppearance(false);
        slider_RotateX->setInvertedControls(false);
        slider_RotateX->setTickPosition(QSlider::NoTicks);
        slider_RotateX->setTickInterval(10);

        gridLayout_2->addWidget(slider_RotateX, 0, 1, 1, 1);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        slider_RotateY = new QSlider(layoutWidget_2);
        slider_RotateY->setObjectName("slider_RotateY");
        slider_RotateY->setMaximum(360);
        slider_RotateY->setSliderPosition(0);
        slider_RotateY->setTracking(true);
        slider_RotateY->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(slider_RotateY, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(67, 17));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_RotateZ = new QLabel(layoutWidget_2);
        label_RotateZ->setObjectName("label_RotateZ");
        label_RotateZ->setMinimumSize(QSize(67, 17));
        label_RotateZ->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_RotateZ, 2, 2, 1, 1);

        label_RotateY = new QLabel(layoutWidget_2);
        label_RotateY->setObjectName("label_RotateY");
        label_RotateY->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_RotateY, 1, 2, 1, 1);

        label_RotateX = new QLabel(layoutWidget_2);
        label_RotateX->setObjectName("label_RotateX");
        label_RotateX->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_RotateX, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label_TranslateX = new QLabel(layoutWidget_2);
        label_TranslateX->setObjectName("label_TranslateX");
        label_TranslateX->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_TranslateX, 0, 2, 1, 1);

        label_TranslateY = new QLabel(layoutWidget_2);
        label_TranslateY->setObjectName("label_TranslateY");
        label_TranslateY->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_TranslateY, 1, 2, 1, 1);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(67, 17));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        slider_TranslateY = new QSlider(layoutWidget_2);
        slider_TranslateY->setObjectName("slider_TranslateY");
        slider_TranslateY->setMinimum(-100);
        slider_TranslateY->setMaximum(100);
        slider_TranslateY->setSliderPosition(0);
        slider_TranslateY->setTracking(true);
        slider_TranslateY->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(slider_TranslateY, 1, 1, 1, 1);

        label_TranslateZ = new QLabel(layoutWidget_2);
        label_TranslateZ->setObjectName("label_TranslateZ");
        label_TranslateZ->setMinimumSize(QSize(67, 17));
        label_TranslateZ->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_TranslateZ, 2, 2, 1, 1);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        slider_TranslateZ = new QSlider(layoutWidget_2);
        slider_TranslateZ->setObjectName("slider_TranslateZ");
        slider_TranslateZ->setMinimum(-100);
        slider_TranslateZ->setMaximum(100);
        slider_TranslateZ->setSliderPosition(0);
        slider_TranslateZ->setTracking(true);
        slider_TranslateZ->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(slider_TranslateZ, 2, 1, 1, 1);

        slider_TranslateX = new QSlider(layoutWidget_2);
        slider_TranslateX->setObjectName("slider_TranslateX");
        slider_TranslateX->setMinimum(-100);
        slider_TranslateX->setMaximum(100);
        slider_TranslateX->setSliderPosition(0);
        slider_TranslateX->setTracking(true);
        slider_TranslateX->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(slider_TranslateX, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        horizontalLayout->addLayout(verticalLayout);

        comboBox_Proj = new QComboBox(scrollAreaWidgetContents);
        comboBox_Proj->addItem(QString());
        comboBox_Proj->addItem(QString());
        comboBox_Proj->setObjectName("comboBox_Proj");
        comboBox_Proj->setGeometry(QRect(200, 10, 161, 31));
        comboBox_Proj->setFont(font);
        comboBox_Ribs = new QComboBox(scrollAreaWidgetContents);
        comboBox_Ribs->addItem(QString());
        comboBox_Ribs->addItem(QString());
        comboBox_Ribs->setObjectName("comboBox_Ribs");
        comboBox_Ribs->setGeometry(QRect(210, 500, 151, 31));
        comboBox_Ribs->setFont(font);
        comboBox_Points = new QComboBox(scrollAreaWidgetContents);
        comboBox_Points->addItem(QString());
        comboBox_Points->addItem(QString());
        comboBox_Points->addItem(QString());
        comboBox_Points->setObjectName("comboBox_Points");
        comboBox_Points->setGeometry(QRect(10, 500, 151, 31));
        comboBox_Points->setFont(font);
        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(210, 550, 151, 31));
        label_18->setFont(font);
        label_18->setLayoutDirection(Qt::LeftToRight);
        label_18->setStyleSheet(QString::fromUtf8("border: 2px solid red; /* \320\232\321\200\320\260\321\201\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"border-radius: 10px;   /* \320\232\321\200\321\203\320\263\320\273\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
""));
        label_18->setAlignment(Qt::AlignCenter);
        label_Scale = new QLabel(scrollAreaWidgetContents);
        label_Scale->setObjectName("label_Scale");
        label_Scale->setGeometry(QRect(410, 100, 67, 17));
        label_Scale->setAlignment(Qt::AlignCenter);
        button_ColorVerts = new QPushButton(scrollAreaWidgetContents);
        button_ColorVerts->setObjectName("button_ColorVerts");
        button_ColorVerts->setGeometry(QRect(20, 630, 131, 41));
        button_ColorRibs = new QPushButton(scrollAreaWidgetContents);
        button_ColorRibs->setObjectName("button_ColorRibs");
        button_ColorRibs->setGeometry(QRect(220, 630, 131, 41));
        button_ColorPhone = new QPushButton(scrollAreaWidgetContents);
        button_ColorPhone->setObjectName("button_ColorPhone");
        button_ColorPhone->setGeometry(QRect(100, 50, 131, 41));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(ViewerView);

        QMetaObject::connectSlotsByName(ViewerView);
    } // setupUi

    void retranslateUi(QWidget *ViewerView)
    {
        ViewerView->setWindowTitle(QCoreApplication::translate("ViewerView", "Form", nullptr));
        label_17->setText(QCoreApplication::translate("ViewerView", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        button_update->setText(QCoreApplication::translate("ViewerView", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        button_Screenshot->setText(QCoreApplication::translate("ViewerView", "\320\241\320\272\321\200\320\270\320\275\321\210\320\276\321\202", nullptr));
        label_15->setText(QCoreApplication::translate("ViewerView", "\320\222\320\265\321\200\321\210\320\270\320\275\321\213", nullptr));
        label_10->setText(QCoreApplication::translate("ViewerView", "Filename:", nullptr));
        label_Filename->setText(QCoreApplication::translate("ViewerView", "\320\242\321\203\321\202 \320\274\320\276\320\263\320\273\320\260 \320\261\321\213\321\202\321\214 \320\262\320\260\321\210\320\260 \321\200\320\265\320\272\320\273\320\260\320\274\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("ViewerView", "Verticles:", nullptr));
        label_Verts->setText(QCoreApplication::translate("ViewerView", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        label_12->setText(QCoreApplication::translate("ViewerView", "Edges:", nullptr));
        label_Ribs->setText(QCoreApplication::translate("ViewerView", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\200\320\265\320\261\320\265\321\200", nullptr));
        label_13->setText(QCoreApplication::translate("ViewerView", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\242\320\270\320\277 \320\277\321\200\320\276\320\265\320\272\321\206\320\270\320\270</span></p></body></html>", nullptr));
        button_save->setText(QCoreApplication::translate("ViewerView", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        Button_File->setText(QCoreApplication::translate("ViewerView", "\320\244\320\260\320\271\320\273", nullptr));
        label_16->setText(QCoreApplication::translate("ViewerView", "\320\240\320\265\320\261\321\200\320\260", nullptr));
        button_Gif->setText(QCoreApplication::translate("ViewerView", "GIF", nullptr));
        label_9->setText(QCoreApplication::translate("ViewerView", "Scale:", nullptr));
        label_7->setText(QCoreApplication::translate("ViewerView", "Rotate:", nullptr));
        label_8->setText(QCoreApplication::translate("ViewerView", "Translate:", nullptr));
        label_6->setText(QCoreApplication::translate("ViewerView", "Z", nullptr));
        label_5->setText(QCoreApplication::translate("ViewerView", "X", nullptr));
        label_4->setText(QCoreApplication::translate("ViewerView", "Y", nullptr));
        label_RotateZ->setText(QCoreApplication::translate("ViewerView", "0", nullptr));
        label_RotateY->setText(QCoreApplication::translate("ViewerView", "0", nullptr));
        label_RotateX->setText(QCoreApplication::translate("ViewerView", "0", nullptr));
        label_TranslateX->setText(QCoreApplication::translate("ViewerView", "0", nullptr));
        label_TranslateY->setText(QCoreApplication::translate("ViewerView", "0", nullptr));
        label_3->setText(QCoreApplication::translate("ViewerView", "X", nullptr));
        label->setText(QCoreApplication::translate("ViewerView", "Y", nullptr));
        label_TranslateZ->setText(QCoreApplication::translate("ViewerView", "0", nullptr));
        label_2->setText(QCoreApplication::translate("ViewerView", "Z", nullptr));
        comboBox_Proj->setItemText(0, QCoreApplication::translate("ViewerView", "\320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\260\321\217", nullptr));
        comboBox_Proj->setItemText(1, QCoreApplication::translate("ViewerView", "\321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217", nullptr));

        comboBox_Ribs->setItemText(0, QCoreApplication::translate("ViewerView", "\321\201\320\277\320\273\320\276\321\210\320\275\320\260\321\217", nullptr));
        comboBox_Ribs->setItemText(1, QCoreApplication::translate("ViewerView", "\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", nullptr));

        comboBox_Points->setItemText(0, QCoreApplication::translate("ViewerView", "\320\272\321\200\321\203\320\263", nullptr));
        comboBox_Points->setItemText(1, QCoreApplication::translate("ViewerView", "\320\272\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));
        comboBox_Points->setItemText(2, QCoreApplication::translate("ViewerView", "\320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\320\265\321\202", nullptr));

        label_18->setText(QCoreApplication::translate("ViewerView", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \321\200\320\265\320\261\320\265\321\200", nullptr));
        label_Scale->setText(QCoreApplication::translate("ViewerView", "100", nullptr));
        button_ColorVerts->setText(QCoreApplication::translate("ViewerView", "\320\246\320\262\320\265\321\202 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        button_ColorRibs->setText(QCoreApplication::translate("ViewerView", "\320\246\320\262\320\265\321\202 \321\200\320\265\320\261\320\265\321\200", nullptr));
        button_ColorPhone->setText(QCoreApplication::translate("ViewerView", "\320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewerView: public Ui_ViewerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWER_VIEW_H
