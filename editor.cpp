#include <memory>

#include "EditorApplication.h"
#include "QtWindow.h"
#include "fig/Core.h"
#include "globals.h"

int main(int argc, char** argv) {
  Application<SpdBackend>* app =
      appInit(std::make_unique<QApplication>(argc, argv));

  app->run();
  return 0;
}
