#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "app.h"
#include "modes/mode.h"
#include "send/send.h"

#include "aftertouch/aftertouch.h"

#define mode_programmer_r 63
#define mode_programmer_g 16
#define mode_programmer_b 0

void programmer_init();
void programmer_timer_event();
void programmer_surface_event(u8 p, u8 v, u8 x, u8 y);
void programmer_midi_event(u8 port, u8 t, u8 ch, u8 p, u8 v);
void programmer_aftertouch_event(u8 v);
void programmer_poly_event(u8 p, u8 v);

#endif