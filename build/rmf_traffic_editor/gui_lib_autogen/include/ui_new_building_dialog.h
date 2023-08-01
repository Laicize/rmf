/********************************************************************************
** Form generated from reading UI file 'new_building_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_BUILDING_DIALOG_H
#define UI_NEW_BUILDING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewBuildingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *name_label;
    QLineEdit *name_line_edit;
    QLabel *label;
    QRadioButton *geolocated_radio;
    QRadioButton *reference_image_radio;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewBuildingDialog)
    {
        if (NewBuildingDialog->objectName().isEmpty())
            NewBuildingDialog->setObjectName(QString::fromUtf8("NewBuildingDialog"));
        NewBuildingDialog->resize(419, 308);
        verticalLayout = new QVBoxLayout(NewBuildingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        name_label = new QLabel(NewBuildingDialog);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        horizontalLayout->addWidget(name_label);

        name_line_edit = new QLineEdit(NewBuildingDialog);
        name_line_edit->setObjectName(QString::fromUtf8("name_line_edit"));

        horizontalLayout->addWidget(name_line_edit);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(NewBuildingDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        geolocated_radio = new QRadioButton(NewBuildingDialog);
        geolocated_radio->setObjectName(QString::fromUtf8("geolocated_radio"));
        geolocated_radio->setChecked(true);

        verticalLayout->addWidget(geolocated_radio);

        reference_image_radio = new QRadioButton(NewBuildingDialog);
        reference_image_radio->setObjectName(QString::fromUtf8("reference_image_radio"));

        verticalLayout->addWidget(reference_image_radio);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(NewBuildingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NewBuildingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewBuildingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewBuildingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewBuildingDialog);
    } // setupUi

    void retranslateUi(QDialog *NewBuildingDialog)
    {
        NewBuildingDialog->setWindowTitle(QCoreApplication::translate("NewBuildingDialog", "New Building", nullptr));
        name_label->setText(QCoreApplication::translate("NewBuildingDialog", "Map Name:", nullptr));
        label->setText(QCoreApplication::translate("NewBuildingDialog", "<html><head/><body><p>RMF supports two coordinate systems: geographic and image-based.</p><p>Geographic-coordinate maps are defined in WGS 84 latitude/longitude, and RMF traffic management will run in a standard geographic tangent plane, such as a UTM Zone or a country-specific plane.</p><p>Image-coordinate maps use a reference image, such as an architectural drawing, as the basis for their coordinate system. This is simpler to get started, but less powerful in the long run, since they cannot be combined with indoor/outdoor navigation systems or interoperate with other GIS tools.</p><p>Which would you like to use for this map?</p></body></html>", nullptr));
        geolocated_radio->setText(QCoreApplication::translate("NewBuildingDialog", "Geographic coordinates", nullptr));
        reference_image_radio->setText(QCoreApplication::translate("NewBuildingDialog", "Reference-image coordinates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewBuildingDialog: public Ui_NewBuildingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_BUILDING_DIALOG_H
