#ifndef ESCHER_POINTER_TEXT_VIEW_H
#define ESCHER_POINTER_TEXT_VIEW_H

#include <escher/text_view.h>

class PointerTextView : public TextView {
public:
  PointerTextView(const char * text = nullptr, float horizontalAlignment = 0.0f, float verticalAlignment = 0.0f,
    KDColor textColor = KDColorBlack, KDColor backgroundColor = KDColorWhite);
  void setText(const char * text);
protected:
  const char * text() const override;
private:
  const char * m_textPointer;
};

#endif