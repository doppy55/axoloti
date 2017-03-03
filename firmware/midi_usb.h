/**
 * Copyright (C) 2017 Johannes Taelman
 *
 * This file is part of Axoloti.
 *
 * Axoloti is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * Axoloti is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * Axoloti. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file    midi_usb.h
 * @brief   MIDI USB device driver
 *
 * @addtogroup MIDI_USB
 * @{
 */

#ifndef MIDI_USB_H
#define MIDI_USB_H

void midi_usb_init(void);
void midi_usb_MidiSend1(uint8_t port, uint8_t b0);
void midi_usb_MidiSend2(uint8_t port, uint8_t b0, uint8_t b1);
void midi_usb_MidiSend3(uint8_t port, uint8_t b0, uint8_t b1, uint8_t b2);

#endif /* MIDI_USB_H */

/** @} */
