#ifndef EDITOR_KEY_REPEAT_EVENT_H
#define EDITOR_KEY_REPEAT_EVENT_H

#include <QKeyEvent>

#include "../fig/events/Event.h"

class EditorKeyRepeatEvent : public fig::KeyboardRepeatEvent {
 public:
  EditorKeyRepeatEvent(QKeyEvent* event);
  void process(fig::Camera* camera, fig::EventManager* eventManager) override;

 private:
  QKeyEvent* _event;
};

#endif
