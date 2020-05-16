#ifndef PSTATEMAINWIDGET_H
#define PSTATEMAINWIDGET_H

#include <QWidget>
#include <QButtonGroup>

namespace Ui {
class PstateMainWidget;
}

class PstateMainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PstateMainWidget(QWidget *parent = nullptr);
    ~PstateMainWidget();
    void refresh();

private slots:
    void setMinPerfLabel(int cpuPerf);
    void setMaxPerfLabel(int cpuPerf);
    void setCpuGov(int buttonId);
    void setEnergy(int buttonId);

    // CPU Performance
    void setMinPerf();
    void setMaxPerf();
    void setTurbo(bool flag);

    // GPU Frequencies
    void setGpuMinFreq();
    void setGpuMaxFreq();
    void setGpuBoostFreq();
    void setGpuMinFreqLabel(int gpuFreq);
    void setGpuMaxFreqLabel(int gpuFreq);
    void setGpuBoostFreqLabel(int gpuFreq);

private:
    Ui::PstateMainWidget *ui;
    QButtonGroup *m_cpuGovGroup;
    QButtonGroup *m_energyGroup;
};

#endif // PSTATEMAINWIDGET_H
