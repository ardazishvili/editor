#ifndef EDITOR_APPLICATION_H
#define EDITOR_APPLICATION_H

#include <QApplication>
#include <memory>

#include "QtOpenGLWindow.h"
#include "QtWindow.h"
#include "fig/Application.h"
#include "fig/Camera.h"
#include "fig/Light.h"
#include "fig/Timer.h"
#include "fig/events/EventFabric.h"
#include "mainwindow.h"

namespace fig {
template <typename T>
class EditorApplication : public Application<T> {
 public:
  EditorApplication(std::unique_ptr<QApplication> app);
  void run() override;
  void tick() override;

 private:
  Camera _camera;
  std::function<void(std::unique_ptr<Event> event)> _onEvent;
  std::unique_ptr<EventFabric> _eventFabric;
  std::unique_ptr<Light> _light;
  glm::mat4 _view;
  glm::mat4 _projection;

  std::unique_ptr<QApplication> _qapp;
};
}  // namespace fig

#endif
