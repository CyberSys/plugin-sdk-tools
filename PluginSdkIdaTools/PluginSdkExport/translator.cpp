#include "translator.h"
#include "translators\gtavc11en_translator.h"

unsigned int translateAddr(Games::IDs game, unsigned int version, unsigned int address) {
    switch (game) {
    case Games::GTASA:
        switch (version) {
        case 0: // 10us
            return address;
        case 1: // 10eu
            return 0;
        case 2: // 11us
            return 0;
        case 3: // 11eu
            return 0;
        case 4: // sr2
            return 0;
        case 5: // sr2lv
            return 0;
        }
        break;
    case Games::GTAVC:
        switch (version) {
        case 0: // 10en
            return address;
        case 1: // 11en
            return translate_gtavc_11en(address);
        case 2: // steam
            return 0;
        }
        break;
    case Games::GTA3:
        switch (version) {
        case 0: // 10en
            return address;
        case 1: // 11en
            return 0;
        case 2: // steam
            return 0;
        }
        break;
    }
    return 0;
}
