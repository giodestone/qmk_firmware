#ifndef HONK_H
#define HONK_H

#include QMK_KEYBOARD_H

/*
    In your make file you must add a new line with:
    honk/*.c
*/

/*
    This function should be called in keyboard_post_init_user(void).

    e.g.

    void keyboard_post_init_user(void)
    {
        honk_InitHonk();
    }
*/
void honk_InitHonk(void);

/*
    This function should be called inside of oled_task_user(void), after oled_clear(void) or any thing that should render below it.

    e.g.

    bool oled_task_user(void)
    {
        oled_clear();
        honk_DrawHonk(0,0);
    }
*/
void honk_DrawHonk(int HONK_X, int HONK_Y);

/*
    This function should be called inside of process_record_user(uint16_t, keyrecord_t*).

    e.g.

    bool process_record_user(uint16_t keycode, keyrecord_t *record)
    {
        honk_ProcessUserInput(keycode, record);
    }
*/
void honk_ProcessUserInput(uint16_t keycode, keyrecord_t *record);





void honkInternal_RenderLine(const char *fullPicture, int imgTotalSize, int colWidth);



#endif /* HONK_H */
