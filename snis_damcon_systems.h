#ifndef SNIS_DAMCON_SYSTEMS_H
#define SNIS_DAMCON_SYSTEMS_H

#ifdef DEFINE_SNIS_DAMCON_SYSTEMS_GLOBALS
#define GLOBAL extern
#else
#define GLOBAL
#endif

#define PARTS_PER_DAMCON_SYSTEM 5

GLOBAL char *damcon_part_name(uint8_t system, uint8_t part);
GLOBAL char *damcon_system_name(uint8_t system);
GLOBAL char *damcon_tool_name(uint8_t tool);
GLOBAL char *damcon_damage_name(uint8_t damage);

#endif

