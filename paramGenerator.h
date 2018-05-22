/********************************************************************************
** Form generated from reading UI file 'paramGeneratory29487.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PARAMGENERATORY29487_H
#define PARAMGENERATORY29487_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *outfilename_box;
    QLabel *bump_height;
    QLabel *title;
    QLabel *gaus_height;
    QLabel *gauss_std;
    QLabel *N_steps;
    QLabel *current_step;
    QLabel *update_step;
    QLabel *save_step;
    QPushButton *generateFile;
    QLabel *time;
    QLabel *flat_depth;
    QLabel *out_file_name;
    QLabel *bathy_file;
    QTextEdit *bathyfile_box;
    QLabel *deformation_file;
    QTextEdit *deformationfile_box;
    QLabel *initialstate_file_name;
    QTextEdit *initialstatefilename_box;
    QLabel *finalstate_file_name;
    QTextEdit *finalstatefilename_box;
    QLabel *filenameHeader;
    QLabel *move_bool;
    QLabel *accel_bool;
    QLabel *diffuse_bool;
    QLabel *flatten_bool;
    QLabel *boolHeader;
    QLabel *check_sim_health;
    QLabel *doPlaneFite;
    QLabel *write_sim_state;
    QLabel *inputHeader;
    QLabel *initial_conditions;
    QTextEdit *initialconditions_box;
    QTextEdit *bumpheight_box;
    QTextEdit *gaussheight_box;
    QTextEdit *gaussstd_box;
    QLabel *ndiffusions;
    QLabel *dt;
    QSpinBox *dt_spinBox;
    QSpinBox *Nsteps_spinBox;
    QSpinBox *ndiffusions_spinBox;
    QSpinBox *currentstep_spinBox;
    QLabel *num_threads;
    QSpinBox *numthreads_spinBox;
    QTextEdit *flatdepth_box;
    QTimeEdit *time_timeEdit;
    QLabel *output_num_digits_for_percent;
    QDoubleSpinBox *floatprecision_spinBox;
    QSpinBox *updatestep_spinBox;
    QSpinBox *savestep_spinBox;
    QCheckBox *movebool_yes;
    QCheckBox *flattenbool_yes;
    QCheckBox *diffusebool_yes;
    QCheckBox *accelbool_yes;
    QCheckBox *checksimhealth_yes;
    QCheckBox *doplanefit_yes;
    QCheckBox *writesimstate_yes;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(702, 779);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        outfilename_box = new QTextEdit(centralwidget);
        outfilename_box->setObjectName(QStringLiteral("outfilename_box"));
        outfilename_box->setGeometry(QRect(40, 120, 161, 21));
        bump_height = new QLabel(centralwidget);
        bump_height->setObjectName(QStringLiteral("bump_height"));
        bump_height->setGeometry(QRect(490, 150, 81, 16));
        title = new QLabel(centralwidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(220, -10, 251, 61));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        title->setFont(font1);
        gaus_height = new QLabel(centralwidget);
        gaus_height->setObjectName(QStringLiteral("gaus_height"));
        gaus_height->setGeometry(QRect(490, 200, 91, 16));
        gauss_std = new QLabel(centralwidget);
        gauss_std->setObjectName(QStringLiteral("gauss_std"));
        gauss_std->setGeometry(QRect(490, 250, 81, 16));
        N_steps = new QLabel(centralwidget);
        N_steps->setObjectName(QStringLiteral("N_steps"));
        N_steps->setGeometry(QRect(490, 410, 60, 16));
        current_step = new QLabel(centralwidget);
        current_step->setObjectName(QStringLiteral("current_step"));
        current_step->setGeometry(QRect(490, 440, 91, 16));
        update_step = new QLabel(centralwidget);
        update_step->setObjectName(QStringLiteral("update_step"));
        update_step->setGeometry(QRect(490, 500, 81, 16));
        save_step = new QLabel(centralwidget);
        save_step->setObjectName(QStringLiteral("save_step"));
        save_step->setGeometry(QRect(490, 530, 101, 16));
        generateFile = new QPushButton(centralwidget);
        generateFile->setObjectName(QStringLiteral("generateFile"));
        generateFile->setGeometry(QRect(510, 10, 113, 32));
        time = new QLabel(centralwidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(490, 560, 71, 16));
        flat_depth = new QLabel(centralwidget);
        flat_depth->setObjectName(QStringLiteral("flat_depth"));
        flat_depth->setGeometry(QRect(490, 300, 81, 16));
        out_file_name = new QLabel(centralwidget);
        out_file_name->setObjectName(QStringLiteral("out_file_name"));
        out_file_name->setGeometry(QRect(40, 100, 91, 16));
        bathy_file = new QLabel(centralwidget);
        bathy_file->setObjectName(QStringLiteral("bathy_file"));
        bathy_file->setGeometry(QRect(40, 150, 81, 16));
        bathyfile_box = new QTextEdit(centralwidget);
        bathyfile_box->setObjectName(QStringLiteral("bathyfile_box"));
        bathyfile_box->setGeometry(QRect(40, 170, 161, 21));
        deformation_file = new QLabel(centralwidget);
        deformation_file->setObjectName(QStringLiteral("deformation_file"));
        deformation_file->setGeometry(QRect(40, 200, 101, 16));
        deformationfile_box = new QTextEdit(centralwidget);
        deformationfile_box->setObjectName(QStringLiteral("deformationfile_box"));
        deformationfile_box->setGeometry(QRect(40, 220, 161, 21));
        initialstate_file_name = new QLabel(centralwidget);
        initialstate_file_name->setObjectName(QStringLiteral("initialstate_file_name"));
        initialstate_file_name->setGeometry(QRect(40, 250, 151, 16));
        initialstatefilename_box = new QTextEdit(centralwidget);
        initialstatefilename_box->setObjectName(QStringLiteral("initialstatefilename_box"));
        initialstatefilename_box->setGeometry(QRect(40, 270, 161, 21));
        finalstate_file_name = new QLabel(centralwidget);
        finalstate_file_name->setObjectName(QStringLiteral("finalstate_file_name"));
        finalstate_file_name->setGeometry(QRect(40, 300, 171, 16));
        finalstatefilename_box = new QTextEdit(centralwidget);
        finalstatefilename_box->setObjectName(QStringLiteral("finalstatefilename_box"));
        finalstatefilename_box->setGeometry(QRect(40, 320, 161, 21));
        filenameHeader = new QLabel(centralwidget);
        filenameHeader->setObjectName(QStringLiteral("filenameHeader"));
        filenameHeader->setGeometry(QRect(70, 70, 111, 16));
        QFont font2;
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        filenameHeader->setFont(font2);
        move_bool = new QLabel(centralwidget);
        move_bool->setObjectName(QStringLiteral("move_bool"));
        move_bool->setGeometry(QRect(250, 100, 91, 16));
        accel_bool = new QLabel(centralwidget);
        accel_bool->setObjectName(QStringLiteral("accel_bool"));
        accel_bool->setGeometry(QRect(250, 190, 81, 16));
        diffuse_bool = new QLabel(centralwidget);
        diffuse_bool->setObjectName(QStringLiteral("diffuse_bool"));
        diffuse_bool->setGeometry(QRect(250, 160, 101, 16));
        flatten_bool = new QLabel(centralwidget);
        flatten_bool->setObjectName(QStringLiteral("flatten_bool"));
        flatten_bool->setGeometry(QRect(250, 130, 81, 16));
        boolHeader = new QLabel(centralwidget);
        boolHeader->setObjectName(QStringLiteral("boolHeader"));
        boolHeader->setGeometry(QRect(320, 70, 60, 16));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(true);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        boolHeader->setFont(font3);
        check_sim_health = new QLabel(centralwidget);
        check_sim_health->setObjectName(QStringLiteral("check_sim_health"));
        check_sim_health->setGeometry(QRect(250, 220, 161, 16));
        doPlaneFite = new QLabel(centralwidget);
        doPlaneFite->setObjectName(QStringLiteral("doPlaneFite"));
        doPlaneFite->setGeometry(QRect(250, 250, 151, 16));
        write_sim_state = new QLabel(centralwidget);
        write_sim_state->setObjectName(QStringLiteral("write_sim_state"));
        write_sim_state->setGeometry(QRect(250, 280, 111, 16));
        inputHeader = new QLabel(centralwidget);
        inputHeader->setObjectName(QStringLiteral("inputHeader"));
        inputHeader->setGeometry(QRect(550, 70, 60, 16));
        inputHeader->setFont(font2);
        initial_conditions = new QLabel(centralwidget);
        initial_conditions->setObjectName(QStringLiteral("initial_conditions"));
        initial_conditions->setGeometry(QRect(490, 100, 111, 16));
        initialconditions_box = new QTextEdit(centralwidget);
        initialconditions_box->setObjectName(QStringLiteral("initialconditions_box"));
        initialconditions_box->setGeometry(QRect(490, 120, 161, 21));
        bumpheight_box = new QTextEdit(centralwidget);
        bumpheight_box->setObjectName(QStringLiteral("bumpheight_box"));
        bumpheight_box->setGeometry(QRect(490, 170, 161, 21));
        gaussheight_box = new QTextEdit(centralwidget);
        gaussheight_box->setObjectName(QStringLiteral("gaussheight_box"));
        gaussheight_box->setGeometry(QRect(490, 220, 161, 21));
        gaussstd_box = new QTextEdit(centralwidget);
        gaussstd_box->setObjectName(QStringLiteral("gaussstd_box"));
        gaussstd_box->setGeometry(QRect(490, 270, 161, 21));
        ndiffusions = new QLabel(centralwidget);
        ndiffusions->setObjectName(QStringLiteral("ndiffusions"));
        ndiffusions->setGeometry(QRect(490, 350, 81, 16));
        dt = new QLabel(centralwidget);
        dt->setObjectName(QStringLiteral("dt"));
        dt->setGeometry(QRect(490, 380, 60, 16));
        dt_spinBox = new QSpinBox(centralwidget);
        dt_spinBox->setObjectName(QStringLiteral("dt_spinBox"));
        dt_spinBox->setGeometry(QRect(600, 380, 48, 24));
        Nsteps_spinBox = new QSpinBox(centralwidget);
        Nsteps_spinBox->setObjectName(QStringLiteral("Nsteps_spinBox"));
        Nsteps_spinBox->setGeometry(QRect(600, 410, 48, 24));
        ndiffusions_spinBox = new QSpinBox(centralwidget);
        ndiffusions_spinBox->setObjectName(QStringLiteral("ndiffusions_spinBox"));
        ndiffusions_spinBox->setGeometry(QRect(600, 350, 48, 24));
        currentstep_spinBox = new QSpinBox(centralwidget);
        currentstep_spinBox->setObjectName(QStringLiteral("currentstep_spinBox"));
        currentstep_spinBox->setGeometry(QRect(600, 440, 48, 24));
        num_threads = new QLabel(centralwidget);
        num_threads->setObjectName(QStringLiteral("num_threads"));
        num_threads->setGeometry(QRect(490, 470, 91, 16));
        numthreads_spinBox = new QSpinBox(centralwidget);
        numthreads_spinBox->setObjectName(QStringLiteral("numthreads_spinBox"));
        numthreads_spinBox->setGeometry(QRect(600, 470, 48, 24));
        flatdepth_box = new QTextEdit(centralwidget);
        flatdepth_box->setObjectName(QStringLiteral("flatdepth_box"));
        flatdepth_box->setGeometry(QRect(490, 320, 161, 21));
        time_timeEdit = new QTimeEdit(centralwidget);
        time_timeEdit->setObjectName(QStringLiteral("time_timeEdit"));
        time_timeEdit->setGeometry(QRect(530, 560, 118, 24));
        output_num_digits_for_percent = new QLabel(centralwidget);
        output_num_digits_for_percent->setObjectName(QStringLiteral("output_num_digits_for_percent"));
        output_num_digits_for_percent->setGeometry(QRect(490, 590, 191, 20));
        floatprecision_spinBox = new QDoubleSpinBox(centralwidget);
        floatprecision_spinBox->setObjectName(QStringLiteral("floatprecision_spinBox"));
        floatprecision_spinBox->setGeometry(QRect(580, 610, 68, 24));
        updatestep_spinBox = new QSpinBox(centralwidget);
        updatestep_spinBox->setObjectName(QStringLiteral("updatestep_spinBox"));
        updatestep_spinBox->setGeometry(QRect(600, 500, 48, 24));
        savestep_spinBox = new QSpinBox(centralwidget);
        savestep_spinBox->setObjectName(QStringLiteral("savestep_spinBox"));
        savestep_spinBox->setGeometry(QRect(600, 530, 48, 24));
        movebool_yes = new QCheckBox(centralwidget);
        movebool_yes->setObjectName(QStringLiteral("movebool_yes"));
        movebool_yes->setGeometry(QRect(390, 100, 51, 20));
        flattenbool_yes = new QCheckBox(centralwidget);
        flattenbool_yes->setObjectName(QStringLiteral("flattenbool_yes"));
        flattenbool_yes->setGeometry(QRect(390, 130, 51, 20));
        diffusebool_yes = new QCheckBox(centralwidget);
        diffusebool_yes->setObjectName(QStringLiteral("diffusebool_yes"));
        diffusebool_yes->setGeometry(QRect(390, 160, 51, 20));
        accelbool_yes = new QCheckBox(centralwidget);
        accelbool_yes->setObjectName(QStringLiteral("accelbool_yes"));
        accelbool_yes->setGeometry(QRect(390, 190, 51, 20));
        checksimhealth_yes = new QCheckBox(centralwidget);
        checksimhealth_yes->setObjectName(QStringLiteral("checksimhealth_yes"));
        checksimhealth_yes->setGeometry(QRect(390, 220, 51, 20));
        doplanefit_yes = new QCheckBox(centralwidget);
        doplanefit_yes->setObjectName(QStringLiteral("doplanefit_yes"));
        doplanefit_yes->setGeometry(QRect(390, 250, 51, 20));
        writesimstate_yes = new QCheckBox(centralwidget);
        writesimstate_yes->setObjectName(QStringLiteral("writesimstate_yes"));
        writesimstate_yes->setGeometry(QRect(390, 280, 51, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 702, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        outfilename_box->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", Q_NULLPTR));
        bump_height->setText(QApplication::translate("MainWindow", "bump_height", Q_NULLPTR));
        title->setText(QApplication::translate("MainWindow", "Parameter Input", Q_NULLPTR));
        gaus_height->setText(QApplication::translate("MainWindow", "gauss_height", Q_NULLPTR));
        gauss_std->setText(QApplication::translate("MainWindow", "gauss_std", Q_NULLPTR));
        N_steps->setText(QApplication::translate("MainWindow", "N_steps", Q_NULLPTR));
        current_step->setText(QApplication::translate("MainWindow", "current_step", Q_NULLPTR));
        update_step->setText(QApplication::translate("MainWindow", "update_step", Q_NULLPTR));
        save_step->setText(QApplication::translate("MainWindow", "save_step", Q_NULLPTR));
        generateFile->setText(QApplication::translate("MainWindow", "Generate File ", Q_NULLPTR));
        time->setText(QApplication::translate("MainWindow", "time", Q_NULLPTR));
        flat_depth->setText(QApplication::translate("MainWindow", "flat_depth", Q_NULLPTR));
        out_file_name->setText(QApplication::translate("MainWindow", "out_file_name", Q_NULLPTR));
        bathy_file->setText(QApplication::translate("MainWindow", "bathy_file", Q_NULLPTR));
        bathyfile_box->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", Q_NULLPTR));
        deformation_file->setText(QApplication::translate("MainWindow", "deformation_file", Q_NULLPTR));
        deformationfile_box->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", Q_NULLPTR));
        initialstate_file_name->setText(QApplication::translate("MainWindow", "initialstate_file_name", Q_NULLPTR));
        initialstatefilename_box->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", Q_NULLPTR));
        finalstate_file_name->setText(QApplication::translate("MainWindow", "finalstate_file_name", Q_NULLPTR));
        finalstatefilename_box->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", Q_NULLPTR));
        filenameHeader->setText(QApplication::translate("MainWindow", "File Names", Q_NULLPTR));
        move_bool->setText(QApplication::translate("MainWindow", "move_bool", Q_NULLPTR));
        accel_bool->setText(QApplication::translate("MainWindow", "accel_bool", Q_NULLPTR));
        diffuse_bool->setText(QApplication::translate("MainWindow", "diffuse_bool", Q_NULLPTR));
        flatten_bool->setText(QApplication::translate("MainWindow", "flatten_bool", Q_NULLPTR));
        boolHeader->setText(QApplication::translate("MainWindow", "Booleanss", Q_NULLPTR));
        check_sim_health->setText(QApplication::translate("MainWindow", "check_sim_health", Q_NULLPTR));
        doPlaneFite->setText(QApplication::translate("MainWindow", "doPlaneFit", Q_NULLPTR));
        write_sim_state->setText(QApplication::translate("MainWindow", "write_sim_state", Q_NULLPTR));
        inputHeader->setText(QApplication::translate("MainWindow", "Input", Q_NULLPTR));
        initial_conditions->setText(QApplication::translate("MainWindow", "initial_conditions", Q_NULLPTR));
        initialconditions_box->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", Q_NULLPTR));
        bumpheight_box->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", Q_NULLPTR));
        gaussheight_box->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", Q_NULLPTR));
        gaussstd_box->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", Q_NULLPTR));
        ndiffusions->setText(QApplication::translate("MainWindow", "ndiffusions", Q_NULLPTR));
        dt->setText(QApplication::translate("MainWindow", "dt", Q_NULLPTR));
        num_threads->setText(QApplication::translate("MainWindow", "num_threads", Q_NULLPTR));
        flatdepth_box->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", Q_NULLPTR));
        output_num_digits_for_percent->setText(QApplication::translate("MainWindow", "output_num_digits_for_%", Q_NULLPTR));
        movebool_yes->setText(QApplication::translate("MainWindow", "Yes", Q_NULLPTR));
        flattenbool_yes->setText(QApplication::translate("MainWindow", "Yes", Q_NULLPTR));
        diffusebool_yes->setText(QApplication::translate("MainWindow", "Yes", Q_NULLPTR));
        accelbool_yes->setText(QApplication::translate("MainWindow", "Yes", Q_NULLPTR));
        checksimhealth_yes->setText(QApplication::translate("MainWindow", "Yes", Q_NULLPTR));
        doplanefit_yes->setText(QApplication::translate("MainWindow", "Yes", Q_NULLPTR));
        writesimstate_yes->setText(QApplication::translate("MainWindow", "Yes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PARAMGENERATORY29487_H
