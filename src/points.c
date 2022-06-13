#include "global.h"
#include "points.h"
#include "text.h"
#include "window.h"
#include "strings.h"
#include "string_util.h"
#include "menu.h"
#include "international_string_util.h"
#include "constants/points.h"

EWRAM_DATA u8 sPointsWindowId = 0;

void PrintPointsString(u32 PointAmount)
{
    u32 xAlign;

    ConvertIntToDecimalStringN(gStringVar1, PointAmount, STR_CONV_MODE_RIGHT_ALIGN, MAX_POINT_DIGITS);
    StringExpandPlaceholders(gStringVar4, gText_Points);

    xAlign = GetStringRightAlignXOffset(FONT_NORMAL, gStringVar4, 0x40);
    AddTextPrinterParameterized(sPointsWindowId, FONT_NORMAL, gStringVar4, xAlign, 1, 0, NULL);
}

void ShowPointsWindow(u32 PointAmount, u8 x, u8 y)
{
    struct WindowTemplate template;
    SetWindowTemplateFields(&template, 0, x, y, 8, 2, 0xF, 0x141);
    sPointsWindowId = AddWindow(&template);
    FillWindowPixelBuffer(sPointsWindowId, PIXEL_FILL(0));
    PutWindowTilemap(sPointsWindowId);
    DrawStdFrameWithCustomTileAndPalette(sPointsWindowId, FALSE, 0x214, 0xE);
    PrintPointsString(PointAmount);
}

void HidePointsWindow(void)
{
    ClearStdWindowAndFrame(sPointsWindowId, TRUE);
    RemoveWindow(sPointsWindowId);
}

u16 GetPoints(void)
{
    return gSaveBlock1Ptr->points ^ gSaveBlock2Ptr->encryptionKey;
}

void SetPoints(u16 pointAmount)
{
    gSaveBlock1Ptr->points = pointAmount ^ gSaveBlock2Ptr->encryptionKey;
}

bool8 AddPoints(u16 toAdd)
{
    u16 newAmount;
    u16 ownedPoints = GetPoints();
    if (ownedPoints >= MAX_POINTS)
        return FALSE;
    // check overflow, can't have less points than previously
    if (ownedPoints > ownedPoints + toAdd)
    {
        newAmount = MAX_POINTS;
    }
    else
    {
        ownedPoints += toAdd;
        if (ownedPoints > MAX_POINTS)
            ownedPoints = MAX_POINTS;
        newAmount = ownedPoints;
    }
    SetPoints(newAmount);
    return TRUE;
}

bool8 RemovePoints(u16 toSub)
{
    u16 ownedPoints = GetPoints();
    if (ownedPoints >= toSub)
    {
        SetPoints(ownedPoints - toSub);
        return TRUE;
    }
    return FALSE;
}
