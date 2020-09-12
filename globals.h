#include <QApplication>

#include "fig/Application.h"
#include "fig/SpdBackend.h"

using namespace fig;

Application<SpdBackend>* appInit(std::unique_ptr<QApplication> app);
Application<SpdBackend>* gApp();
