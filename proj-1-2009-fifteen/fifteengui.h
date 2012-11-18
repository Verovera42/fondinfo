/**
 * @author Michele Tomaiuolo - http://www.ce.unipr.it/people/tomamic
 * @license This software is free - http://www.gnu.org/licenses/gpl.html
 */

#ifndef FIFTEENGUI_H
#define FIFTEENGUI_H

#include "fifteenpuzzle.h"

#include <QWidget>
#include <QButtonGroup>

class FifteenGui : public QWidget
{
    Q_OBJECT

public:
    FifteenGui(FifteenPuzzle* game);

private slots:
    void controlButtons(int i);

private:
    void updateAllButtons();
    void checkFinished();

    QButtonGroup* buttons;
    FifteenPuzzle* game;
};

#endif // GAMEGUI_H
