/* trap.h - trap interface */

#ifndef TRAP_H
#define TRAP_H

extern void hit_trap(int y, int x);
extern void pick_trap(int y, int x);
extern void place_trap(int y, int x);
extern void py_steal(int y, int x);
extern bool py_set_trap(int y, int x);
extern bool py_modify_trap(int y, int x);

#endif /* !TRAP_H */
