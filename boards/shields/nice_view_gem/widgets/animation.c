#include <stdlib.h>
#include <zephyr/kernel.h>
#include "animation.h"

LV_IMG_DECLARE(hammerbeam1);
LV_IMG_DECLARE(hammerbeam2);
LV_IMG_DECLARE(hammerbeam3);
LV_IMG_DECLARE(hammerbeam4);
LV_IMG_DECLARE(hammerbeam5);
LV_IMG_DECLARE(hammerbeam6);
LV_IMG_DECLARE(hammerbeam7);
LV_IMG_DECLARE(hammerbeam8);
LV_IMG_DECLARE(hammerbeam9);
LV_IMG_DECLARE(hammerbeam10);
LV_IMG_DECLARE(hammerbeam11);
LV_IMG_DECLARE(hammerbeam12);
LV_IMG_DECLARE(hammerbeam13);
LV_IMG_DECLARE(hammerbeam14);
LV_IMG_DECLARE(hammerbeam15);
LV_IMG_DECLARE(hammerbeam16);
LV_IMG_DECLARE(hammerbeam17);
LV_IMG_DECLARE(hammerbeam18);
LV_IMG_DECLARE(hammerbeam19);
LV_IMG_DECLARE(hammerbeam20);
LV_IMG_DECLARE(hammerbeam21);
LV_IMG_DECLARE(hammerbeam22);
LV_IMG_DECLARE(hammerbeam23);
LV_IMG_DECLARE(hammerbeam24);
LV_IMG_DECLARE(hammerbeam25);
LV_IMG_DECLARE(hammerbeam26);
LV_IMG_DECLARE(hammerbeam27);
LV_IMG_DECLARE(hammerbeam28);
LV_IMG_DECLARE(hammerbeam29);
LV_IMG_DECLARE(hammerbeam30);

const lv_img_dsc_t *anim_imgs[] = {
    &hammerbeam1,
    &hammerbeam2,
    &hammerbeam3,
    &hammerbeam4,
    &hammerbeam5,
    &hammerbeam6,
    &hammerbeam7,
    &hammerbeam8,
    &hammerbeam9,
    &hammerbeam10,
    &hammerbeam11,
    &hammerbeam12,
    &hammerbeam13,
    &hammerbeam14,
    &hammerbeam15,
    &hammerbeam16,
    &hammerbeam17,
    &hammerbeam18,
    &hammerbeam19,
    &hammerbeam20,
    &hammerbeam21,
    &hammerbeam22,
    &hammerbeam23,
    &hammerbeam24,
    &hammerbeam25,
    &hammerbeam26,
    &hammerbeam27,
    &hammerbeam28,
    &hammerbeam29,
    &hammerbeam30,
};
int zmk_widget_status_init(struct zmk_widget_status *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, 160, 68);
    lv_obj_t *top = lv_canvas_create(widget->obj);
    lv_obj_align(top, LV_ALIGN_TOP_RIGHT, 0, 0);
    lv_canvas_set_buffer(top, widget->cbuf, CANVAS_SIZE, CANVAS_SIZE, LV_IMG_CF_TRUE_COLOR);

    lv_obj_t * art = lv_animimg_create(widget->obj);
    lv_obj_center(art);
    lv_animimg_set_src(art, (const void **) anim_imgs, 30);
    lv_animimg_set_duration(art, CONFIG_CUSTOM_ANIMATION_SPEED);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);
    
    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 0, 0);
    sys_slist_append(&widgets, &widget->node);
    widget_battery_status_init();
    widget_peripheral_status_init();

    return 0;
}

lv_obj_t *zmk_widget_status_obj(struct zmk_widget_status *widget) { return widget->obj; }
