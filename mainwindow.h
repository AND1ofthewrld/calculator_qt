#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_but_0_clicked();
    void on_but_1_clicked();
    void on_but_2_clicked();
    void on_but_3_clicked();
    void on_but_4_clicked();
    void on_but_5_clicked();
    void on_but_6_clicked();
    void on_but_7_clicked();
    void on_but_8_clicked();
    void on_but_9_clicked();

    void on_but_c_clicked();

    void on_but_p_clicked();

    void on_but_m_clicked();

    void on_but_mp_clicked();

    void on_but_div_clicked();

    void on_but_e_clicked();

    void on_division_by_1_clicked();

    void on_square_clicked();

    void on_radical_clicked();

    void on_showing_browser_anchorClicked(const QUrl &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
