// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.6
// Project name: ui_480x320_HB

#ifndef _UI_480X320_HB_UI_H
#define _UI_480X320_HB_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_mainScreen
void ui_mainScreen_screen_init(void);
extern lv_obj_t * ui_mainScreen;
extern lv_obj_t * ui_TitleContainer;
extern lv_obj_t * ui_titleLabel;
extern lv_obj_t * ui_setpointPanel;
extern lv_obj_t * ui_setPointLabel;
extern lv_obj_t * ui_weightLabelDot11;
extern lv_obj_t * ui_setPointSmallLabel;
extern lv_obj_t * ui_SETLabel;
extern lv_obj_t * ui_coolHeatPanel;
extern lv_obj_t * ui_offLabel;
extern lv_obj_t * ui_coolLabel;
extern lv_obj_t * ui_heatLabel;
extern lv_obj_t * ui_coolBar;
extern lv_obj_t * ui_heatBar;
void ui_event_tempGraphPanel(lv_event_t * e);
extern lv_obj_t * ui_tempGraphPanel;
extern lv_obj_t * ui_temperatureChart;
extern lv_obj_t * ui_statusContainer;
extern lv_obj_t * ui_networkContainer;
extern lv_obj_t * ui_rssiContainer;
extern lv_obj_t * ui_rssiBar0Panel;
extern lv_obj_t * ui_rssiBar1Panel;
extern lv_obj_t * ui_rssiBar2Panel;
extern lv_obj_t * ui_rssiBar3Panel;
extern lv_obj_t * ui_rssiLine0Panel;
extern lv_obj_t * ui_rssiLine1Panel;
extern lv_obj_t * ui_rssiLine2Panel;
extern lv_obj_t * ui_rssiLine3Panel;
extern lv_obj_t * ui_internetLabel;
extern lv_obj_t * ui_backendContainer;
extern lv_obj_t * ui_backendBar;
extern lv_obj_t * ui_hydrobrickContainer;
extern lv_obj_t * ui_hydrobrickBar;
extern lv_obj_t * ui_messageContainer;
extern lv_obj_t * ui_messageLabel;
extern lv_obj_t * ui_timeContainer;
extern lv_obj_t * ui_timeLabel;
extern lv_obj_t * ui_gravityPanel;
extern lv_obj_t * ui_gravityLabel;
extern lv_obj_t * ui_gravityLabelDot;
extern lv_obj_t * ui_gravityUnitLabel;
extern lv_obj_t * ui_voltPanel;
extern lv_obj_t * ui_voltLabel;
extern lv_obj_t * ui_voltLabelDot;
extern lv_obj_t * ui_unitLabel1;
extern lv_obj_t * ui_vhargeLabel;
extern lv_obj_t * ui_hbTempPanel;
extern lv_obj_t * ui_hbTempLabel;
extern lv_obj_t * ui_hbTempLabelDot;
extern lv_obj_t * ui_hbTempLabelSmall;
extern lv_obj_t * ui_unitLabel2;
extern lv_obj_t * ui_tempPanel;
extern lv_obj_t * ui_tempLabel;
extern lv_obj_t * ui_tempLabelDot;
extern lv_obj_t * ui_tempLabelSmall;
extern lv_obj_t * ui_unitLabel;
// SCREEN: ui_configurationScreen
void ui_configurationScreen_screen_init(void);
extern lv_obj_t * ui_configurationScreen;
extern lv_obj_t * ui_TitleContainer1;
extern lv_obj_t * ui_titleLabel1;
extern lv_obj_t * ui_statusContainer1;
extern lv_obj_t * ui_confirmContainer1;
extern lv_obj_t * ui_confirmPanel1;
extern lv_obj_t * ui_confirmTextLabel1;
extern lv_obj_t * ui_CANCELButton1;
extern lv_obj_t * ui_CANCELLabel1;
extern lv_obj_t * ui_Switch2;
extern lv_obj_t * ui_TextArea2;
extern lv_obj_t * ui____initial_actions0;





LV_FONT_DECLARE(ui_font_weight100Font);
LV_FONT_DECLARE(ui_font_weight25Font);
LV_FONT_DECLARE(ui_font_weight50Font);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
