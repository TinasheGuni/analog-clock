#ifndef ANALOGCLOCK_H
#define ANALOGCLOCK_H

#include <QWidget>

class QTextEdit;
class QPushButton;
class QPainter;
class QTimer;
class QTime;

class AnalogClock : public QWidget
{
    Q_OBJECT
public:
    explicit AnalogClock(QWidget *parent = nullptr);
    void setupGUI();

    void paintEvent(QPaintEvent *event);

public slots:
    void update();

private:
    QTimer *timer;
};

#endif // ANALOGCLOCK_H
