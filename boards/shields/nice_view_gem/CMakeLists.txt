if(CONFIG_ZMK_DISPLAY AND CONFIG_NICE_VIEW_WIDGET_STATUS)
  zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)
  zephyr_library_sources(custom_status_screen.c)
  zephyr_library_sources(assets/images.c)
  zephyr_library_sources(widgets/L/util.c)
  zephyr_library_sources(widgets/L/battery.c)
  zephyr_library_sources(widgets/L/output.c)
  zephyr_library_sources(widgets/R/batteryR.c)
  zephyr_library_sources(widgets/R/outputR.c)

  
  if(NOT CONFIG_ZMK_SPLIT OR CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
  
  	target_sources_ifdef(CONFIG_NICE_VIEW_WIDGET_HID_INDICATORS app PRIVATE widgets/L/hid_indicators.c)
  
  zephyr_library_sources(widgets/L/layer.c)
  zephyr_library_sources(widgets/L/profile.c)
  zephyr_library_sources(widgets/screen.c)
  zephyr_library_sources(widgets/L/wpm.c)
  else()
    zephyr_library_sources(assets/crystal.c)
    zephyr_library_sources(widgets/R/animation.c)
    zephyr_library_sources(widgets/screen_peripheral.c)
  endif()
endif()


    zephyr_library_sources(widgets/layer.c)
    zephyr_library_sources(widgets/profile.c)
    zephyr_library_sources(widgets/screen.c)
    zephyr_library_sources(widgets/wpm.c)