#ifndef GUARD_POINTS_H
#define GUARD_POINTS_H

void PrintPointsString(u32 PointAmount);
void ShowPointsWindow(u32 PointAmount, u8 x, u8 y);
void HidePointsWindow(void);
u16 GetPoints(void);
void SetPoints(u16 PointAmount);
bool8 AddPoints(u16 toAdd);
bool8 RemovePoints(u16 toSub);

#endif // GUARD_POINTS_H
