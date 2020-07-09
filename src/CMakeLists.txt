# TODO: adapt "org.kde.plasma" here & elsewhere if needed (see README)
add_definitions(-DTRANSLATION_DOMAIN=\"plasma_applet_org.kde.plasma.ddc_widget\")

set(ddc_widget_SRCS
    ddc_widget.cpp
)

add_library(plasma_applet_ddc_widget MODULE ${ddc_widget_SRCS})

kcoreaddons_desktop_to_json(plasma_applet_ddc_widget package/metadata.desktop SERVICE_TYPES plasma-applet.desktop)

target_link_libraries(plasma_applet_ddc_widget
                      Qt5::Gui
                      KF5::Plasma
                      KF5::I18n)


install(TARGETS plasma_applet_ddc_widget DESTINATION ${KDE_INSTALL_PLUGINDIR}/plasma/applets)

plasma_install_package(package org.kde.plasma.ddc_widget)
