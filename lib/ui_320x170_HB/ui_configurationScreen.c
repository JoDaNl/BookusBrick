// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.6
// Project name: ui_320x170_HB

#include "ui.h"

void ui_configurationScreen_screen_init(void)
{
    ui_configurationScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_configurationScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_configurationScreen, lv_color_hex(0x506679), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_configurationScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TitleContainer1 = lv_obj_create(ui_configurationScreen);
    lv_obj_remove_style_all(ui_TitleContainer1);
    lv_obj_set_width(ui_TitleContainer1, 320);
    lv_obj_set_height(ui_TitleContainer1, 18);
    lv_obj_set_x(ui_TitleContainer1, 0);
    lv_obj_set_y(ui_TitleContainer1, -111);
    lv_obj_set_align(ui_TitleContainer1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TitleContainer1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_TitleContainer1, lv_color_hex(0x0000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TitleContainer1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_titleLabel1 = lv_label_create(ui_TitleContainer1);
    lv_obj_set_align(ui_titleLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_titleLabel1, "CONFIGURATION");
    lv_obj_set_style_text_color(ui_titleLabel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_titleLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_titleLabel1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_statusContainer1 = lv_obj_create(ui_configurationScreen);
    lv_obj_remove_style_all(ui_statusContainer1);
    lv_obj_set_width(ui_statusContainer1, 320);
    lv_obj_set_height(ui_statusContainer1, 26);
    lv_obj_set_x(ui_statusContainer1, 0);
    lv_obj_set_y(ui_statusContainer1, 107);
    lv_obj_set_align(ui_statusContainer1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_statusContainer1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_statusContainer1, lv_color_hex(0xB1B1B1), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_statusContainer1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_confirmContainer1 = lv_obj_create(ui_configurationScreen);
    lv_obj_remove_style_all(ui_confirmContainer1);
    lv_obj_set_width(ui_confirmContainer1, 320);
    lv_obj_set_height(ui_confirmContainer1, 240);
    lv_obj_set_align(ui_confirmContainer1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_confirmContainer1, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_confirmContainer1,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_confirmContainer1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_confirmContainer1, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_confirmPanel1 = lv_obj_create(ui_confirmContainer1);
    lv_obj_set_width(ui_confirmPanel1, 260);
    lv_obj_set_height(ui_confirmPanel1, 131);
    lv_obj_set_align(ui_confirmPanel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_confirmPanel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_confirmPanel1, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_confirmPanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_confirmPanel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_confirmPanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_confirmPanel1, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_confirmTextLabel1 = lv_label_create(ui_confirmPanel1);
    lv_obj_set_width(ui_confirmTextLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_confirmTextLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_confirmTextLabel1, -4);
    lv_obj_set_y(ui_confirmTextLabel1, -42);
    lv_obj_set_align(ui_confirmTextLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_confirmTextLabel1, "SET WEIGHT TO ZERO ?");

    ui_CANCELButton1 = lv_btn_create(ui_confirmPanel1);
    lv_obj_set_width(ui_CANCELButton1, 100);
    lv_obj_set_height(ui_CANCELButton1, 50);
    lv_obj_set_x(ui_CANCELButton1, 56);
    lv_obj_set_y(ui_CANCELButton1, 15);
    lv_obj_set_align(ui_CANCELButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CANCELButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_CANCELButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_CANCELButton1, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_CANCELButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CANCELLabel1 = lv_label_create(ui_CANCELButton1);
    lv_obj_set_align(ui_CANCELLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CANCELLabel1, "CANCEL");

    ui_Switch2 = lv_switch_create(ui_configurationScreen);
    lv_obj_set_width(ui_Switch2, 50);
    lv_obj_set_height(ui_Switch2, 25);
    lv_obj_set_x(ui_Switch2, 771);
    lv_obj_set_y(ui_Switch2, 20);
    lv_obj_set_align(ui_Switch2, LV_ALIGN_CENTER);


    ui_TextArea2 = lv_textarea_create(ui_configurationScreen);
    lv_obj_set_width(ui_TextArea2, 312);
    lv_obj_set_height(ui_TextArea2, 185);
    lv_obj_set_x(ui_TextArea2, 0);
    lv_obj_set_y(ui_TextArea2, -4);
    lv_obj_set_align(ui_TextArea2, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_TextArea2, "Placeholder...");



}
