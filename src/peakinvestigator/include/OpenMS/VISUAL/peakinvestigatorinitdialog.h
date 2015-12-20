#ifndef PEAKINVESTIGATORINITDIALOG_H
#define PEAKINVESTIGATORINITDIALOG_H

#include <QDialog>
#include <QString>
#include <QStringList>

namespace Ui {
class PeakInvestigatorInitDialog;
}

class PeakInvestigatorInitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PeakInvestigatorInitDialog(QWidget *parent = 0, QStringList &PI_versions, QStringList &RTOs);
    ~PeakInvestigatorInitDialog();

    // Getter methods

    QString getRTO(void) { return ui->RTOList->currentText(); }
    QString getVersion(void)  { return ui->VersionList->currentText(); }

private:
    Ui::PeakInvestigatorInitDialog *ui;
};

#endif // PEAKINVESTIGATORINITDIALOG_H
