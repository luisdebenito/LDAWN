#ifndef PANEL_H
#define PANEL_H

#include <paintable.h>
#include <drumRack.h>
#include <bpmLabel.h>
#include <audioRack.h>
#include <midiRack.h>
#include <playPointer.h>
#include <recordPointer.h>
#include <recordSign.h>
#include <GLFW/glfw3.h>
#include <chrono>

class Panel : public Paintable
{
public:
  Panel();
  void paint() const override;
  void handleEvents(GLFWwindow *window) const;

private:
  DrumRack drumRack;
  mutable BpmLabel bpmLabel;
  MidiRack midiRack;
  AudioRack audioRack;
  RecordPointer recordPointer;
  mutable RecordSign recordSign;
  const int humanReleaseIterationRetard = 25;
  mutable std::chrono::high_resolution_clock::time_point lastExecutionTime;
};

#endif
