/*
Copyright 2015 Ralf Schmitt <ralf@bunkertor.net>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <avr/io.h>
#include "backlight.h"

void backlight_init_ports()
{
    DDRB |= 0b00011111;  // PB0 (caps), PB1 (alpha), PB2 (extra), PB3 (modnum), PB4 (caps)
    DDRD |= 0b11010000;  // PD4, (rgb blue), PD6 (rgb red), PD7 (rgb green)
    DDRE |= 0b01000000;  // PE6 (frow)
}

void backlight_set(uint8_t level)
{
    level & BACKLIGHT_ALPHA ? backlight_alpha_enable() : backlight_alpha_disable();
    level & BACKLIGHT_EXTRA ? backlight_extra_enable() : backlight_extra_disable();
    level & BACKLIGHT_MODNUM ? backlight_modnum_enable() : backlight_modnum_disable();
    level & BACKLIGHT_FROW ? backlight_frow_enable() : backlight_frow_disable();
    level & BACKLIGHT_RGBRED ? backlight_rgbred_enable() : backlight_rgbred_disable();
    level & BACKLIGHT_RGBGREEN ? backlight_rgbgreen_enable() : backlight_rgbgreen_disable();
    level & BACKLIGHT_RGBBLUE ? backlight_rgbblue_enable() : backlight_rgbblue_disable();
}

void backlight_alpha_invert()
{
    PORTB ^= 0b00000010;
}

void backlight_alpha_enable()
{
    PORTB |= 0b00000010;
}

void backlight_alpha_disable()
{
    PORTB &= ~0b00000010;
}

void backlight_extra_invert()
{
    PORTB ^= 0b00000100;
}

void backlight_extra_enable()
{
    PORTB |= 0b00000100;
}

void backlight_extra_disable()
{
    PORTB &= ~0b00000100;
}

void backlight_modnum_invert()
{
    PORTB ^= 0b00001000;
}

void backlight_modnum_enable()
{
    PORTB |= 0b00001000;
}

void backlight_modnum_disable()
{
    PORTB &= ~0b00001000;
}

void backlight_frow_invert()
{
    PORTE ^= 0b01000000;
}

void backlight_frow_enable()
{
    PORTE |= 0b01000000;
}

void backlight_frow_disable()
{
    PORTE &= ~0b01000000;
}

void backlight_rgbred_invert()
{
    PORTD ^= 0b01000000;
}

void backlight_rgbred_enable()
{
    PORTD |= 0b01000000;
}

void backlight_rgbred_disable()
{
    PORTD &= ~0b01000000;
}

void backlight_rgbgreen_invert()
{
    PORTD ^= 0b10000000;
}

void backlight_rgbgreen_enable()
{
    PORTD |= 0b10000000;
}

void backlight_rgbgreen_disable()
{
    PORTD &= ~0b10000000;
}

void backlight_rgbblue_invert()
{
    PORTD ^= 0b00010000;
}

void backlight_rgbblue_enable()
{
    PORTD |= 0b00010000;
}

void backlight_rgbblue_disable()
{
    PORTD &= ~0b00010000;
}

void backlight_caps_invert()
{
    PORTB ^= 0b00000001;
}

void backlight_caps_enable()
{
    PORTB &= ~0b00000001;
}

void backlight_caps_disable()
{
    PORTB |= 0b00000001;
}

void backlight_scroll_invert()
{
    PORTB ^= 0b00010000;
}

void backlight_scroll_enable()
{
    PORTB &= ~0b00010000;
}

void backlight_scroll_disable()
{
    PORTB |= 0b00010000;
}
