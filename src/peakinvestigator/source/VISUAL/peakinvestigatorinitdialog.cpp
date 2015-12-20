#include "peakinvestigatorinitdialog.h"
#include "ui_peakinvestigatorinitdialog.h"

PeakInvestigatorInitDialog::PeakInvestigatorInitDialog(QWidget *parent, , QStringList &PI_versions, QStringList &RTOs) :
    QDialog(parent),
    ui(new Ui::PeakInvestigatorInitDialog)
{
    ui->setupUi(this);

    ui->RTOList->addItems(PI_Versions);
    ui->RTOList->setCurrentIndex(0);
    ui->VersionList->addItems(PI_Versions);
    ui->VersionList->setCurrentIndex(0);
}

PeakInvestigatorInitDialog::~PeakInvestigatorInitDialog()
{
    delete ui;
}
