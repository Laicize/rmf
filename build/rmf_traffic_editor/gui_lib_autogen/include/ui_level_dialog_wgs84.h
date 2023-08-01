/********************************************************************************
** Form generated from reading UI file 'level_dialog_wgs84.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVEL_DIALOG_WGS84_H
#define UI_LEVEL_DIALOG_WGS84_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LevelDialogWGS84
{
public:
    QFormLayout *formLayout;
    QLineEdit *name_line_edit;
    QLabel *elevation_label;
    QLineEdit *elevation_line_edit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QLabel *name_label;

    void setupUi(QDialog *LevelDialogWGS84)
    {
        if (LevelDialogWGS84->objectName().isEmpty())
            LevelDialogWGS84->setObjectName(QString::fromUtf8("LevelDialogWGS84"));
        LevelDialogWGS84->resize(280, 133);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LevelDialogWGS84->sizePolicy().hasHeightForWidth());
        LevelDialogWGS84->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(LevelDialogWGS84);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        name_line_edit = new QLineEdit(LevelDialogWGS84);
        name_line_edit->setObjectName(QString::fromUtf8("name_line_edit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name_line_edit->sizePolicy().hasHeightForWidth());
        name_line_edit->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, name_line_edit);

        elevation_label = new QLabel(LevelDialogWGS84);
        elevation_label->setObjectName(QString::fromUtf8("elevation_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, elevation_label);

        elevation_line_edit = new QLineEdit(LevelDialogWGS84);
        elevation_line_edit->setObjectName(QString::fromUtf8("elevation_line_edit"));
        elevation_line_edit->setInputMethodHints(Qt::ImhNone);

        formLayout->setWidget(1, QFormLayout::FieldRole, elevation_line_edit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);

        buttonBox = new QDialogButtonBox(LevelDialogWGS84);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, buttonBox);

        name_label = new QLabel(LevelDialogWGS84);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, name_label);

        QWidget::setTabOrder(name_line_edit, elevation_line_edit);

        retranslateUi(LevelDialogWGS84);
        QObject::connect(buttonBox, SIGNAL(accepted()), LevelDialogWGS84, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LevelDialogWGS84, SLOT(reject()));

        QMetaObject::connectSlotsByName(LevelDialogWGS84);
    } // setupUi

    void retranslateUi(QDialog *LevelDialogWGS84)
    {
        LevelDialogWGS84->setWindowTitle(QCoreApplication::translate("LevelDialogWGS84", "Dialog", nullptr));
        elevation_label->setText(QCoreApplication::translate("LevelDialogWGS84", "Elevation (meters):", nullptr));
        elevation_line_edit->setInputMask(QString());
        elevation_line_edit->setText(QString());
        name_label->setText(QCoreApplication::translate("LevelDialogWGS84", "Level name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LevelDialogWGS84: public Ui_LevelDialogWGS84 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVEL_DIALOG_WGS84_H
