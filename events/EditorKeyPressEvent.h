#ifndef EDITOR_KEY_PRESS_EVENT_H
#define EDITOR_KEY_PRESS_EVENT_H

#include <QKeyEvent>

#include "../fig/events/Event.h"

class EditorKeyPressEvent : public fig::KeyboardPressEvent {
 public:
  EditorKeyPressEvent(QKeyEvent* event);
  void process(fig::Camera* camera, fig::EventManager* eventManager) override;

 private:
  QKeyEvent* _event;
};

#endif
