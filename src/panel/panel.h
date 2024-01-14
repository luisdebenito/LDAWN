#ifndef PANEL_H
#define PANEL_H

#include <paintable.h>
#include <drumRack.h>

class Panel : public Paintable
{
public:
  Panel();
  void paint() const override;

private:
  DrumRack drumRack;
};

#endif
