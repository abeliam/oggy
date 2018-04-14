#ifndef OGGY_COLUMN_LAYOUT_HPP
#define OGGY_COLUMN_LAYOUT_HPP

#include "../Core/Node.hpp"
#include "../Core/Event.hpp"
#include "../Core/Color.hpp"

namespace oggy {

  class ColumnLayout : public Node {
  public:
    ColumnLayout();
    ColumnLayout(int width);
    void render();
    void updateState(Event * event);
    void setBackground(Color color);
  private:
    Color background;
  };
}

#endif
