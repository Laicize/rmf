/********************************************************************************
** Form generated from reading UI file 'transform_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFORM_DIALOG_H
#define UI_TRANSFORM_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_TransformDialog
{
public:
    QFormLayout *formLayout;
    QLabel *rotate_all_models_label;
    QLineEdit *rotate_all_models_line_edit;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *TransformDialog)
    {
        if (TransformDialog->objectName().isEmpty())
            TransformDialog->setObjectName(QString::fromUtf8("TransformDialog"));
        TransformDialog->resize(379, 152);
        formLayout = new QFormLayout(TransformDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        rotate_all_models_label = new QLabel(TransformDialog);
        rotate_all_models_label->setObjectName(QString::fromUtf8("rotate_all_models_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, rotate_all_models_label);

        rotate_all_models_line_edit = new QLineEdit(TransformDialog);
        rotate_all_models_line_edit->setObjectName(QString::fromUtf8("rotate_all_models_line_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, rotate_all_models_line_edit);

        buttonBox = new QDialogButtonBox(TransformDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer);


        retranslateUi(TransformDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TransformDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TransformDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TransformDialog);
    } // setupUi

    void retranslateUi(QDialog *TransformDialog)
    {
        TransformDialog->setWindowTitle(QCoreApplication::translate("TransformDialog", "Dialog", nullptr));
        rotate_all_models_label->setText(QCoreApplication::translate("TransformDialog", "Rotate all models:", nullptr));
        rotate_all_models_line_edit->setText(QCoreApplication::translate("TransformDialog", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransformDialog: public Ui_TransformDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFORM_DIALOG_H
