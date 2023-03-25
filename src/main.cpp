#include <memory>
#include <QApplication>
#include "BoardController.h"
#include "MainWindow.h"
#include "Board.h"


int main(int argc, char **argv){
    QApplication app (argc, argv);
    std::shared_ptr<Board> ptr(new Board);
    std::shared_ptr<BoardController> controllerPtr(new BoardController(ptr) );
    MainWindow newWindow(ptr, controllerPtr);
    newWindow.show();

    return app.exec();
}
