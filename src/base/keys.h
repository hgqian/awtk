/**
 * File:   keys.h
 * Author: AWTK Develop Team
 * Brief:  key code constants
 *
 * Copyright (c) 2018 - 2018  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-04-05 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef TK_KEYS_H
#define TK_KEYS_H

#ifdef SDL2
#include <SDL2/SDL_keycode.h>
#endif
#include "base/types_def.h"

BEGIN_C_DECLS

typedef enum _key_code_t {
  FKEY_UNKNOWN = 0,

  FKEY_RETURN = '\r',
  FKEY_ESCAPE = '\033',
  FKEY_BACKSPACE = '\b',
  FKEY_TAB = '\t',
  FKEY_SPACE = ' ',
  FKEY_EXCLAIM = '!',
  FKEY_QUOTEDBL = '"',
  FKEY_HASH = '#',
  FKEY_PERCENT = '%',
  FKEY_DOLLAR = '$',
  FKEY_AMPERSAND = '&',
  FKEY_QUOTE = '\'',
  FKEY_LEFTPAREN = '(',
  FKEY_RIGHTPAREN = ')',
  FKEY_ASTERISK = '*',
  FKEY_PLUS = '+',
  FKEY_COMMA = ',',
  FKEY_MINUS = '-',
  FKEY_PERIOD = '.',
  FKEY_SLASH = '/',
  FKEY_0 = '0',
  FKEY_1 = '1',
  FKEY_2 = '2',
  FKEY_3 = '3',
  FKEY_4 = '4',
  FKEY_5 = '5',
  FKEY_6 = '6',
  FKEY_7 = '7',
  FKEY_8 = '8',
  FKEY_9 = '9',
  FKEY_COLON = ':',
  FKEY_SEMICOLON = ';',
  FKEY_LESS = '<',
  FKEY_EQUALS = '=',
  FKEY_GREATER = '>',
  FKEY_QUESTION = '?',
  FKEY_AT = '@',
  /*
     Skip uppercase letters
   */
  FKEY_LEFTBRACKET = '[',
  FKEY_BACKSLASH = '\\',
  FKEY_RIGHTBRACKET = ']',
  FKEY_CARET = '^',
  FKEY_UNDERSCORE = '_',
  FKEY_BACKQUOTE = '`',
  FKEY_a = 'a',
  FKEY_b = 'b',
  FKEY_c = 'c',
  FKEY_d = 'd',
  FKEY_e = 'e',
  FKEY_f = 'f',
  FKEY_g = 'g',
  FKEY_h = 'h',
  FKEY_i = 'i',
  FKEY_j = 'j',
  FKEY_k = 'k',
  FKEY_l = 'l',
  FKEY_m = 'm',
  FKEY_n = 'n',
  FKEY_o = 'o',
  FKEY_p = 'p',
  FKEY_q = 'q',
  FKEY_r = 'r',
  FKEY_s = 's',
  FKEY_t = 't',
  FKEY_u = 'u',
  FKEY_v = 'v',
  FKEY_w = 'w',
  FKEY_x = 'x',
  FKEY_y = 'y',
  FKEY_z = 'z',
  FKEY_A = 'A',
  FKEY_B = 'B',
  FKEY_C = 'C',
  FKEY_D = 'D',
  FKEY_E = 'E',
  FKEY_F = 'F',
  FKEY_G = 'G',
  FKEY_H = 'H',
  FKEY_I = 'I',
  FKEY_J = 'J',
  FKEY_K = 'K',
  FKEY_L = 'L',
  FKEY_M = 'M',
  FKEY_N = 'N',
  FKEY_O = 'O',
  FKEY_P = 'P',
  FKEY_Q = 'Q',
  FKEY_R = 'R',
  FKEY_S = 'S',
  FKEY_T = 'T',
  FKEY_U = 'U',
  FKEY_V = 'V',
  FKEY_W = 'W',
  FKEY_X = 'X',
  FKEY_Y = 'Y',
  FKEY_Z = 'Z',
  FKEY_DELETE = '\177',	
#ifdef SDL2
  FKEY_CAPSLOCK = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CAPSLOCK),

  FKEY_F1 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F1),
  FKEY_F2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F2),
  FKEY_F3 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F3),
  FKEY_F4 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F4),
  FKEY_F5 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F5),
  FKEY_F6 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F6),
  FKEY_F7 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F7),
  FKEY_F8 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F8),
  FKEY_F9 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F9),
  FKEY_F10 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F10),
  FKEY_F11 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F11),
  FKEY_F12 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F12),

  FKEY_PRINTSCREEN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PRINTSCREEN),
  FKEY_SCROLLLOCK = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SCROLLLOCK),
  FKEY_PAUSE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAUSE),
  FKEY_INSERT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_INSERT),
  FKEY_HOME = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_HOME),
  FKEY_PAGEUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAGEUP),
  FKEY_END = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_END),
  FKEY_PAGEDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAGEDOWN),
  FKEY_RIGHT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RIGHT),
  FKEY_LEFT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LEFT),
  FKEY_DOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DOWN),
  FKEY_UP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_UP),

  FKEY_NUMLOCKCLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_NUMLOCKCLEAR),
  FKEY_KP_DIVIDE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DIVIDE),
  FKEY_KP_MULTIPLY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MULTIPLY),
  FKEY_KP_MINUS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MINUS),
  FKEY_KP_PLUS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PLUS),
  FKEY_KP_ENTER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_ENTER),
  FKEY_KP_1 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_1),
  FKEY_KP_2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_2),
  FKEY_KP_3 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_3),
  FKEY_KP_4 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_4),
  FKEY_KP_5 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_5),
  FKEY_KP_6 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_6),
  FKEY_KP_7 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_7),
  FKEY_KP_8 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_8),
  FKEY_KP_9 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_9),
  FKEY_KP_0 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_0),
  FKEY_KP_PERIOD = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PERIOD),

  FKEY_APPLICATION = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_APPLICATION),
  FKEY_POWER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_POWER),
  FKEY_KP_EQUALS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EQUALS),
  FKEY_F13 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F13),
  FKEY_F14 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F14),
  FKEY_F15 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F15),
  FKEY_F16 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F16),
  FKEY_F17 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F17),
  FKEY_F18 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F18),
  FKEY_F19 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F19),
  FKEY_F20 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F20),
  FKEY_F21 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F21),
  FKEY_F22 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F22),
  FKEY_F23 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F23),
  FKEY_F24 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F24),
  FKEY_EXECUTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EXECUTE),
  FKEY_HELP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_HELP),
  FKEY_MENU = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MENU),
  FKEY_SELECT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SELECT),
  FKEY_STOP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_STOP),
  FKEY_AGAIN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AGAIN),
  FKEY_UNDO = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_UNDO),
  FKEY_CUT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CUT),
  FKEY_COPY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_COPY),
  FKEY_PASTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PASTE),
  FKEY_FIND = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_FIND),
  FKEY_MUTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MUTE),
  FKEY_VOLUMEUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_VOLUMEUP),
  FKEY_VOLUMEDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_VOLUMEDOWN),
  FKEY_KP_COMMA = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_COMMA),
  FKEY_KP_EQUALSAS400 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EQUALSAS400),

  FKEY_ALTERASE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_ALTERASE),
  FKEY_SYSREQ = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SYSREQ),
  FKEY_CANCEL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CANCEL),
  FKEY_CLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CLEAR),
  FKEY_PRIOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PRIOR),
  FKEY_RETURN2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RETURN2),
  FKEY_SEPARATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SEPARATOR),
  FKEY_OUT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_OUT),
  FKEY_OPER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_OPER),
  FKEY_CLEARAGAIN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CLEARAGAIN),
  FKEY_CRSEL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CRSEL),
  FKEY_EXSEL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EXSEL),

  FKEY_KP_00 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_00),
  FKEY_KP_000 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_000),
  FKEY_THOUSANDSSEPARATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_THOUSANDSSEPARATOR),
  FKEY_DECIMALSEPARATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DECIMALSEPARATOR),
  FKEY_CURRENCYUNIT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CURRENCYUNIT),
  FKEY_CURRENCYSUBUNIT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CURRENCYSUBUNIT),
  FKEY_KP_LEFTPAREN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LEFTPAREN),
  FKEY_KP_RIGHTPAREN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_RIGHTPAREN),
  FKEY_KP_LEFTBRACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LEFTBRACE),
  FKEY_KP_RIGHTBRACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_RIGHTBRACE),
  FKEY_KP_TAB = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_TAB),
  FKEY_KP_BACKSPACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_BACKSPACE),
  FKEY_KP_A = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_A),
  FKEY_KP_B = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_B),
  FKEY_KP_C = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_C),
  FKEY_KP_D = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_D),
  FKEY_KP_E = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_E),
  FKEY_KP_F = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_F),
  FKEY_KP_XOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_XOR),
  FKEY_KP_POWER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_POWER),
  FKEY_KP_PERCENT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PERCENT),
  FKEY_KP_LESS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LESS),
  FKEY_KP_GREATER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_GREATER),
  FKEY_KP_AMPERSAND = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_AMPERSAND),
  FKEY_KP_DBLAMPERSAND = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DBLAMPERSAND),
  FKEY_KP_VERTICALBAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_VERTICALBAR),
  FKEY_KP_DBLVERTICALBAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DBLVERTICALBAR),
  FKEY_KP_COLON = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_COLON),
  FKEY_KP_HASH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_HASH),
  FKEY_KP_SPACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_SPACE),
  FKEY_KP_AT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_AT),
  FKEY_KP_EXCLAM = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EXCLAM),
  FKEY_KP_MEMSTORE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMSTORE),
  FKEY_KP_MEMRECALL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMRECALL),
  FKEY_KP_MEMCLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMCLEAR),
  FKEY_KP_MEMADD = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMADD),
  FKEY_KP_MEMSUBTRACT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMSUBTRACT),
  FKEY_KP_MEMMULTIPLY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMMULTIPLY),
  FKEY_KP_MEMDIVIDE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMDIVIDE),
  FKEY_KP_PLUSMINUS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PLUSMINUS),
  FKEY_KP_CLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_CLEAR),
  FKEY_KP_CLEARENTRY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_CLEARENTRY),
  FKEY_KP_BINARY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_BINARY),
  FKEY_KP_OCTAL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_OCTAL),
  FKEY_KP_DECIMAL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DECIMAL),
  FKEY_KP_HEXADECIMAL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_HEXADECIMAL),

  FKEY_LCTRL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LCTRL),
  FKEY_LSHIFT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LSHIFT),
  FKEY_LALT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LALT),
  FKEY_LGUI = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LGUI),
  FKEY_RCTRL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RCTRL),
  FKEY_RSHIFT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RSHIFT),
  FKEY_RALT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RALT),
  FKEY_RGUI = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RGUI),

  FKEY_MODE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MODE),

  FKEY_AUDIONEXT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIONEXT),
  FKEY_AUDIOPREV = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOPREV),
  FKEY_AUDIOSTOP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOSTOP),
  FKEY_AUDIOPLAY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOPLAY),
  FKEY_AUDIOMUTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOMUTE),
  FKEY_MEDIASELECT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MEDIASELECT),
  FKEY_WWW = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_WWW),
  FKEY_MAIL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MAIL),
  FKEY_CALCULATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CALCULATOR),
  FKEY_COMPUTER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_COMPUTER),
  FKEY_AC_SEARCH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_SEARCH),
  FKEY_AC_HOME = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_HOME),
  FKEY_AC_BACK = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_BACK),
  FKEY_AC_FORWARD = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_FORWARD),
  FKEY_AC_STOP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_STOP),
  FKEY_AC_REFRESH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_REFRESH),
  FKEY_AC_BOOKMARKS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_BOOKMARKS),

  FKEY_BRIGHTNESSDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_BRIGHTNESSDOWN),
  FKEY_BRIGHTNESSUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_BRIGHTNESSUP),
  FKEY_DISPLAYSWITCH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DISPLAYSWITCH),
  FKEY_KBDILLUMTOGGLE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMTOGGLE),
  FKEY_KBDILLUMDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMDOWN),
  FKEY_KBDILLUMUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMUP),
  FKEY_EJECT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EJECT),
  FKEY_SLEEP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SLEEP),
  FKEY_APP1 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_APP1),
  FKEY_APP2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_APP2),

#else
  FKEY_LSHIFT = 0,
  FKEY_RSHIFT = 0,
  FKEY_LCTRL = 0,
  FKEY_RCTRL = 0,
  FKEY_LALT = 0,
  FKEY_RALT = 0,
  FKEY_CAPSLOCK = 0,
#endif

} key_code_t;

END_C_DECLS

#endif /*TK_KEYS_H*/
