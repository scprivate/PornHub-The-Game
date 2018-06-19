/* Public Domain Curses */

#include "pdcos2.h"

/*man-start**************************************************************

pdcsetsc
--------

### Synopsis

    int PDC_set_blink(bool blinkon);
    int PDC_set_bold(bool boldon);
    void PDC_set_title(const char *title);

### Description

   PDC_set_blink() toggles whether the A_BLINK attribute sets an
   actual blink mode (TRUE), or sets the background color to high
   intensity (FALSE). The default is platform-dependent (FALSE in
   most cases). It returns OK if it could set the state to match
   the given parameter, ERR otherwise.

   PDC_set_bold() toggles whether the A_BOLD attribute selects an actual
   bold font (TRUE), or sets the foreground color to high intensity
   (FALSE). It returns OK if it could set the state to match the given
   parameter, ERR otherwise.

   PDC_set_title() sets the title of the window in which the curses
   program is running. This function may not do anything on some
   platforms.

### Portability
                             X/Open    BSD    SYS V
    PDC_set_blink               -       -       -
    PDC_set_title               -       -       -

**man-end****************************************************************/

int PDC_curs_set(int visibility)
{
    VIOCURSORINFO pvioCursorInfo;
    int ret_vis, hidden = 0, start = 0, end = 0;

    PDC_LOG(("PDC_curs_set() - called: visibility=%d\n", visibility));

    ret_vis = SP->visibility;
    SP->visibility = visibility;

    switch(visibility)
    {
    case 0:     /* invisible */
        start = pdc_font / 4;
        end = pdc_font;
        hidden = -1;
        break;

    case 2:     /* highly visible */
        start = 2;      /* almost full-height block */
        end = pdc_font - 1;
        break;

    default:    /* normal visibility */
        start = (SP->orig_cursor >> 8) & 0xff;
        end = SP->orig_cursor & 0xff;
    }

    pvioCursorInfo.yStart = (USHORT)start;
    pvioCursorInfo.cEnd = (USHORT)end;
    pvioCursorInfo.cx = (USHORT)1;
    pvioCursorInfo.attr = hidden;
    VioSetCurType((PVIOCURSORINFO)&pvioCursorInfo, 0);

    return ret_vis;
}

void PDC_set_title(const char *title)
{
    PDC_LOG(("PDC_set_title() - called:<%s>\n", title));
}

int PDC_set_blink(bool blinkon)
{
    if (pdc_color_started)
        COLORS = 16;

    if (blinkon)
    {
        if (!(SP->termattrs & A_BLINK))
        {
            SP->termattrs |= A_BLINK;
            pdc_last_blink = PDC_ms_count();
        }
    }
    else
    {
        if (SP->termattrs & A_BLINK)
        {
            SP->termattrs &= ~A_BLINK;
            PDC_blink_text();
        }
    }

    return OK;
}

int PDC_set_bold(bool boldon)
{
    return boldon ? ERR : OK;
}
