#include <hex/helpers/keys.hpp>

#include <GLFW/glfw3.h>

enum Keys scanCodeToKey(int scanCode) {
    switch (scanCode) {
        case GLFW_KEY_SPACE:            return Keys::Space;
        case GLFW_KEY_APOSTROPHE:       return Keys::Apostrophe;
        case GLFW_KEY_COMMA:            return Keys::Comma;
        case GLFW_KEY_MINUS:            return Keys::Minus;
        case GLFW_KEY_PERIOD:           return Keys::Period;
        case GLFW_KEY_SLASH:            return Keys::Slash;
        case GLFW_KEY_0:                return Keys::Num0;
        case GLFW_KEY_1:                return Keys::Num1;
        case GLFW_KEY_2:                return Keys::Num2;
        case GLFW_KEY_3:                return Keys::Num3;
        case GLFW_KEY_4:                return Keys::Num4;
        case GLFW_KEY_5:                return Keys::Num5;
        case GLFW_KEY_6:                return Keys::Num6;
        case GLFW_KEY_7:                return Keys::Num7;
        case GLFW_KEY_8:                return Keys::Num8;
        case GLFW_KEY_9:                return Keys::Num9;
        case GLFW_KEY_SEMICOLON:        return Keys::Semicolon;
        case GLFW_KEY_EQUAL:            return Keys::Equals;
        case GLFW_KEY_A:                return Keys::A;
        case GLFW_KEY_B:                return Keys::B;
        case GLFW_KEY_C:                return Keys::C;
        case GLFW_KEY_D:                return Keys::D;
        case GLFW_KEY_E:                return Keys::E;
        case GLFW_KEY_F:                return Keys::F;
        case GLFW_KEY_G:                return Keys::G;
        case GLFW_KEY_H:                return Keys::H;
        case GLFW_KEY_I:                return Keys::I;
        case GLFW_KEY_J:                return Keys::J;
        case GLFW_KEY_K:                return Keys::K;
        case GLFW_KEY_L:                return Keys::L;
        case GLFW_KEY_M:                return Keys::M;
        case GLFW_KEY_N:                return Keys::N;
        case GLFW_KEY_O:                return Keys::O;
        case GLFW_KEY_P:                return Keys::P;
        case GLFW_KEY_Q:                return Keys::Q;
        case GLFW_KEY_R:                return Keys::R;
        case GLFW_KEY_S:                return Keys::S;
        case GLFW_KEY_T:                return Keys::T;
        case GLFW_KEY_U:                return Keys::U;
        case GLFW_KEY_V:                return Keys::V;
        case GLFW_KEY_W:                return Keys::W;
        case GLFW_KEY_X:                return Keys::X;
        case GLFW_KEY_Y:                return Keys::Y;
        case GLFW_KEY_Z:                return Keys::Z;
        case GLFW_KEY_LEFT_BRACKET:     return Keys::LeftBracket;
        case GLFW_KEY_BACKSLASH:        return Keys::Backslash;
        case GLFW_KEY_RIGHT_BRACKET:    return Keys::RightBracket;
        case GLFW_KEY_GRAVE_ACCENT:     return Keys::GraveAccent;
        case GLFW_KEY_WORLD_1:          return Keys::World1;
        case GLFW_KEY_WORLD_2:          return Keys::World2;
        case GLFW_KEY_ESCAPE:           return Keys::Escape;
        case GLFW_KEY_ENTER:            return Keys::Enter;
        case GLFW_KEY_TAB:              return Keys::Tab;
        case GLFW_KEY_BACKSPACE:        return Keys::Backspace;
        case GLFW_KEY_INSERT:           return Keys::Insert;
        case GLFW_KEY_DELETE:           return Keys::Delete;
        case GLFW_KEY_RIGHT:            return Keys::Right;
        case GLFW_KEY_LEFT:             return Keys::Left;
        case GLFW_KEY_DOWN:             return Keys::Down;
        case GLFW_KEY_UP:               return Keys::Up;
        case GLFW_KEY_PAGE_UP:          return Keys::PageUp;
        case GLFW_KEY_PAGE_DOWN:        return Keys::PageDown;
        case GLFW_KEY_HOME:             return Keys::Home;
        case GLFW_KEY_END:              return Keys::End;
        case GLFW_KEY_CAPS_LOCK:        return Keys::CapsLock;
        case GLFW_KEY_SCROLL_LOCK:      return Keys::ScrollLock;
        case GLFW_KEY_NUM_LOCK:         return Keys::NumLock;
        case GLFW_KEY_PRINT_SCREEN:     return Keys::PrintScreen;
        case GLFW_KEY_PAUSE:            return Keys::Pause;
        case GLFW_KEY_F1:               return Keys::F1;
        case GLFW_KEY_F2:               return Keys::F2;
        case GLFW_KEY_F3:               return Keys::F3;
        case GLFW_KEY_F4:               return Keys::F4;
        case GLFW_KEY_F5:               return Keys::F5;
        case GLFW_KEY_F6:               return Keys::F6;
        case GLFW_KEY_F7:               return Keys::F7;
        case GLFW_KEY_F8:               return Keys::F8;
        case GLFW_KEY_F9:               return Keys::F9;
        case GLFW_KEY_F10:              return Keys::F10;
        case GLFW_KEY_F11:              return Keys::F11;
        case GLFW_KEY_F12:              return Keys::F12;
        case GLFW_KEY_F13:              return Keys::F13;
        case GLFW_KEY_F14:              return Keys::F14;
        case GLFW_KEY_F15:              return Keys::F15;
        case GLFW_KEY_F16:              return Keys::F16;
        case GLFW_KEY_F17:              return Keys::F17;
        case GLFW_KEY_F18:              return Keys::F18;
        case GLFW_KEY_F19:              return Keys::F19;
        case GLFW_KEY_F20:              return Keys::F20;
        case GLFW_KEY_F21:              return Keys::F21;
        case GLFW_KEY_F22:              return Keys::F22;
        case GLFW_KEY_F23:              return Keys::F23;
        case GLFW_KEY_F24:              return Keys::F24;
        case GLFW_KEY_F25:              return Keys::F25;
        case GLFW_KEY_KP_0:             return Keys::KeyPad0;
        case GLFW_KEY_KP_1:             return Keys::KeyPad1;
        case GLFW_KEY_KP_2:             return Keys::KeyPad2;
        case GLFW_KEY_KP_3:             return Keys::KeyPad3;
        case GLFW_KEY_KP_4:             return Keys::KeyPad4;
        case GLFW_KEY_KP_5:             return Keys::KeyPad5;
        case GLFW_KEY_KP_6:             return Keys::KeyPad6;
        case GLFW_KEY_KP_7:             return Keys::KeyPad7;
        case GLFW_KEY_KP_8:             return Keys::KeyPad8;
        case GLFW_KEY_KP_9:             return Keys::KeyPad9;
        case GLFW_KEY_KP_DECIMAL:       return Keys::KeyPadDecimal;
        case GLFW_KEY_KP_DIVIDE:        return Keys::KeyPadDivide;
        case GLFW_KEY_KP_MULTIPLY:      return Keys::KeyPadMultiply;
        case GLFW_KEY_KP_SUBTRACT:      return Keys::KeyPadSubtract;
        case GLFW_KEY_KP_ADD:           return Keys::KeyPadAdd;
        case GLFW_KEY_KP_ENTER:         return Keys::KeyPadEnter;
        case GLFW_KEY_KP_EQUAL:         return Keys::KeyPadEqual;
        case GLFW_KEY_MENU:             return Keys::Menu;
        default:                        return Keys(scanCode);
    }
}

int keyToScanCode(enum Keys key) {
    switch (key) {
        case Keys::Space:               return GLFW_KEY_SPACE;
        case Keys::Apostrophe:          return GLFW_KEY_APOSTROPHE;
        case Keys::Comma:               return GLFW_KEY_COMMA;
        case Keys::Minus:               return GLFW_KEY_MINUS;
        case Keys::Period:              return GLFW_KEY_PERIOD;
        case Keys::Slash:               return GLFW_KEY_SLASH;
        case Keys::Num0:                return GLFW_KEY_0;
        case Keys::Num1:                return GLFW_KEY_1;
        case Keys::Num2:                return GLFW_KEY_2;
        case Keys::Num3:                return GLFW_KEY_3;
        case Keys::Num4:                return GLFW_KEY_4;
        case Keys::Num5:                return GLFW_KEY_5;
        case Keys::Num6:                return GLFW_KEY_6;
        case Keys::Num7:                return GLFW_KEY_7;
        case Keys::Num8:                return GLFW_KEY_8;
        case Keys::Num9:                return GLFW_KEY_9;
        case Keys::Semicolon:           return GLFW_KEY_SEMICOLON;
        case Keys::Equals:              return GLFW_KEY_EQUAL;
        case Keys::A:                   return GLFW_KEY_A;
        case Keys::B:                   return GLFW_KEY_B;
        case Keys::C:                   return GLFW_KEY_C;
        case Keys::D:                   return GLFW_KEY_D;
        case Keys::E:                   return GLFW_KEY_E;
        case Keys::F:                   return GLFW_KEY_F;
        case Keys::G:                   return GLFW_KEY_G;
        case Keys::H:                   return GLFW_KEY_H;
        case Keys::I:                   return GLFW_KEY_I;
        case Keys::J:                   return GLFW_KEY_J;
        case Keys::K:                   return GLFW_KEY_K;
        case Keys::L:                   return GLFW_KEY_L;
        case Keys::M:                   return GLFW_KEY_M;
        case Keys::N:                   return GLFW_KEY_N;
        case Keys::O:                   return GLFW_KEY_O;
        case Keys::P:                   return GLFW_KEY_P;
        case Keys::Q:                   return GLFW_KEY_Q;
        case Keys::R:                   return GLFW_KEY_R;
        case Keys::S:                   return GLFW_KEY_S;
        case Keys::T:                   return GLFW_KEY_T;
        case Keys::U:                   return GLFW_KEY_U;
        case Keys::V:                   return GLFW_KEY_V;
        case Keys::W:                   return GLFW_KEY_W;
        case Keys::X:                   return GLFW_KEY_X;
        case Keys::Y:                   return GLFW_KEY_Y;
        case Keys::Z:                   return GLFW_KEY_Z;
        case Keys::LeftBracket:         return GLFW_KEY_LEFT_BRACKET;
        case Keys::Backslash:           return GLFW_KEY_BACKSLASH;
        case Keys::RightBracket:        return GLFW_KEY_RIGHT_BRACKET;
        case Keys::GraveAccent:         return GLFW_KEY_GRAVE_ACCENT;
        case Keys::World1:              return GLFW_KEY_WORLD_1;
        case Keys::World2:              return GLFW_KEY_WORLD_2;
        case Keys::Escape:              return GLFW_KEY_ESCAPE;
        case Keys::Enter:               return GLFW_KEY_ENTER;
        case Keys::Tab:                 return GLFW_KEY_TAB;
        case Keys::Backspace:           return GLFW_KEY_BACKSPACE;
        case Keys::Insert:              return GLFW_KEY_INSERT;
        case Keys::Delete:              return GLFW_KEY_DELETE;
        case Keys::Right:               return GLFW_KEY_RIGHT;
        case Keys::Left:                return GLFW_KEY_LEFT;
        case Keys::Down:                return GLFW_KEY_DOWN;
        case Keys::Up:                  return GLFW_KEY_UP;
        case Keys::PageUp:              return GLFW_KEY_PAGE_UP;
        case Keys::PageDown:            return GLFW_KEY_PAGE_DOWN;
        case Keys::Home:                return GLFW_KEY_HOME;
        case Keys::End:                 return GLFW_KEY_END;
        case Keys::CapsLock:            return GLFW_KEY_CAPS_LOCK;
        case Keys::ScrollLock:          return GLFW_KEY_SCROLL_LOCK;
        case Keys::NumLock:             return GLFW_KEY_NUM_LOCK;
        case Keys::PrintScreen:         return GLFW_KEY_PRINT_SCREEN;
        case Keys::Pause:               return GLFW_KEY_PAUSE;
        case Keys::F1:                  return GLFW_KEY_F1;
        case Keys::F2:                  return GLFW_KEY_F2;
        case Keys::F3:                  return GLFW_KEY_F3;
        case Keys::F4:                  return GLFW_KEY_F4;
        case Keys::F5:                  return GLFW_KEY_F5;
        case Keys::F6:                  return GLFW_KEY_F6;
        case Keys::F7:                  return GLFW_KEY_F7;
        case Keys::F8:                  return GLFW_KEY_F8;
        case Keys::F9:                  return GLFW_KEY_F9;
        case Keys::F10:                 return GLFW_KEY_F10;
        case Keys::F11:                 return GLFW_KEY_F11;
        case Keys::F12:                 return GLFW_KEY_F12;
        case Keys::F13:                 return GLFW_KEY_F13;
        case Keys::F14:                 return GLFW_KEY_F14;
        case Keys::F15:                 return GLFW_KEY_F15;
        case Keys::F16:                 return GLFW_KEY_F16;
        case Keys::F17:                 return GLFW_KEY_F17;
        case Keys::F18:                 return GLFW_KEY_F18;
        case Keys::F19:                 return GLFW_KEY_F19;
        case Keys::F20:                 return GLFW_KEY_F20;
        case Keys::F21:                 return GLFW_KEY_F21;
        case Keys::F22:                 return GLFW_KEY_F22;
        case Keys::F23:                 return GLFW_KEY_F23;
        case Keys::F24:                 return GLFW_KEY_F24;
        case Keys::F25:                 return GLFW_KEY_F25;
        case Keys::KeyPad0:             return GLFW_KEY_KP_0;
        case Keys::KeyPad1:             return GLFW_KEY_KP_1;
        case Keys::KeyPad2:             return GLFW_KEY_KP_2;
        case Keys::KeyPad3:             return GLFW_KEY_KP_3;
        case Keys::KeyPad4:             return GLFW_KEY_KP_4;
        case Keys::KeyPad5:             return GLFW_KEY_KP_5;
        case Keys::KeyPad6:             return GLFW_KEY_KP_6;
        case Keys::KeyPad7:             return GLFW_KEY_KP_7;
        case Keys::KeyPad8:             return GLFW_KEY_KP_8;
        case Keys::KeyPad9:             return GLFW_KEY_KP_9;
        case Keys::KeyPadDecimal:       return GLFW_KEY_KP_DECIMAL;
        case Keys::KeyPadDivide:        return GLFW_KEY_KP_DIVIDE;
        case Keys::KeyPadMultiply:      return GLFW_KEY_KP_MULTIPLY;
        case Keys::KeyPadSubtract:      return GLFW_KEY_KP_SUBTRACT;
        case Keys::KeyPadAdd:           return GLFW_KEY_KP_ADD;
        case Keys::KeyPadEnter:         return GLFW_KEY_KP_ENTER;
        case Keys::KeyPadEqual:         return GLFW_KEY_KP_EQUAL;
        case Keys::Menu:                return GLFW_KEY_MENU;
        default:                        return int(key);
    }
}