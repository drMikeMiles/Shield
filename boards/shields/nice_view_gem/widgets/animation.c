#include <stdlib.h>
#include <zephyr/kernel.h>
#include "animation.h"

LV_IMG_DECLARE(crystal_01);

const lv_img_dsc_t *anim_imgs[] = {
    &crystal_01,
};


#if IS_ENABLED(CONFIG_NICE_VIEW_GEM_ANIMATION)
int draw_animation(struct zmk_widget_status *widget, lv_obj_t *canvas) {
    widget->obj = lv_obj_create(canvas);
    lv_obj_set_size(widget->obj, 160, 68);
    lv_obj_t *top = lv_canvas_create(widget->obj);
    lv_obj_align(top, LV_ALIGN_TOP_RIGHT, 0, 0);
    lv_canvas_set_buffer(top, widget->cbuf, CANVAS_SIZE, CANVAS_SIZE, LV_IMG_CF_TRUE_COLOR);

    lv_animimg_set_src(art, (const void **)anim_imgs, 1);
    lv_animimg_set_duration(art, CONFIG_NICE_VIEW_GEM_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);
#else
    lv_obj_t *art = lv_img_create(canvas);

    int length = sizeof(anim_imgs) / sizeof(anim_imgs[0]);
    srand(k_uptime_get_32());
    int random_index = rand() % length;

    lv_img_set_src(art, anim_imgs[random_index]);
#endif
}
