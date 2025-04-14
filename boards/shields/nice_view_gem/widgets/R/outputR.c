#include <zephyr/kernel.h>
#include "outputR.h"
#include "../../assets/custom_fonts.h"

LV_IMG_DECLARE(bt_no_signal);
LV_IMG_DECLARE(bt_unbonded);
LV_IMG_DECLARE(bt);
LV_IMG_DECLARE(usb);

#if !IS_ENABLED(CONFIG_ZMK_SPLIT) || IS_ENABLED(CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
static void draw_usb_connected_right(lv_obj_t *canvas) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    lv_canvas_draw_img(canvas, 0, 2, &usb, &img_dsc);
}

static void draw_ble_unbonded_right(lv_obj_t *canvas) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    lv_canvas_draw_img(canvas, 0, 0, &bt_unbonded, &img_dsc);
}
#endif

static void draw_ble_disconnected_right(lv_obj_t *canvas) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    lv_canvas_draw_img(canvas, 0, 0, &bt_no_signal, &img_dsc);
}

static void draw_ble_connected_right(lv_obj_t *canvas) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    lv_canvas_draw_img(canvas, 0, 0, &bt, &img_dsc);
}

void draw_output_status_right(lv_obj_t *canvas, const struct status_state *state) {
    
    lv_draw_rect_dsc_t rect_white_dsc;
    init_rect_dsc(&rect_white_dsc, LVGL_FOREGROUND);
    lv_canvas_draw_rect(canvas, 0, 0, 24, 15, &rect_white_dsc);

#if !IS_ENABLED(CONFIG_ZMK_SPLIT) || IS_ENABLED(CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
    switch (state->selected_endpoint.transport) {
    case ZMK_TRANSPORT_USB:
        draw_usb_connected_right(canvas);
        break;

    case ZMK_TRANSPORT_BLE:
        if (state->active_profile_bonded) {
            if (state->active_profile_connected) {
                draw_ble_connected_right(canvas);
            } else {
                draw_ble_disconnected_right(canvas);
            }
        } else {
            draw_ble_unbonded_right(canvas);
        }
        break;
    }
#else
    if (state->connected) {
        draw_ble_connected_right(canvas);
    } else {
        draw_ble_disconnected_right(canvas);
    }
#endif
}
