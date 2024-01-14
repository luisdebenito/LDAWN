#ifndef PANEL_H
#define PANEL_H

#include <paintable.h>
#include <drumRack.h>
#include <bpmLabel.h>

class Panel : public Paintable
{
public:
  Panel();
  void paint() const override;

private:
  DrumRack drumRack;
  BpmLabel bpmLabel;
};

#endif
