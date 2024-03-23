export ARCHS = arm64 arm64e
export TARGET = iphone:clang:13.3.1

INSTALL_TARGET_PROCESSES = SpringBoard
SUBPROJECTS += Tweak Preferences

include $(THEOS)/makefiles/common.mk
include $(THEOS_MAKE_PATH)/aggregate.mk
