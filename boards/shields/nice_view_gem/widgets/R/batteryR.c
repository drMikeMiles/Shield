#include <zephyr/kernel.h>
#include "batteryR.h"
#include "../../assets/custom_fonts.h"

LV_IMG_DECLARE(bolt);

static void draw_level_right(lv_obj_t *canvas, const struct status_state *state) {
    lv_draw_label_dsc_t label_left_dsc;
    init_label_dsc(&label_left_dsc, LVGL_FOREGROUND, &pixel_operator_mono, LV_TEXT_ALIGN_RIGHT);

    char text[10] = {};

    sprintf(text, "%i%%", state->battery);
    lv_canvas_draw_text(canvas, 25, 1, 42, &label_left_dsc, text);
}

static void draw_charging_level_right(lv_obj_t *canvas, const struct status_state *state) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);
    lv_draw_label_dsc_t label_left_dsc;
    init_label_dsc(&label_left_dsc, LVGL_FOREGROUND, &pixel_operator_mono, LV_TEXT_ALIGN_RIGHT);

    char text[10] = {};

    sprintf(text, "%i%%", state->battery);
    lv_canvas_draw_text(canvas, 25, 1, 35, &label_left_dsc, text);
    lv_canvas_draw_img(canvas, 65, 2, &bolt, &img_dsc);
}

void draw_battery_status_right(lv_obj_t *canvas, const struct status_state *state) {
    if (state->charging) {
        draw_charging_level_right(canvas, state);
    } else {
        draw_level_right(canvas, state);
    }
}
