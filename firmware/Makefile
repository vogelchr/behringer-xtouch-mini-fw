PROJECT = behringer-xtouch-mini-fw
BUILD_DIR = bin

# SHARED_DIR = ../my-common-code
# CFILES = my-project.c
# CFILES += api.c
# AFILES += api-asm.S

CFILES += fw-main.c

# TODO - you will need to edit these two lines!
DEVICE=stm32f103rb
OOCD_FILE = board/stm32f4discovery.cfg

# You shouldn't have to edit anything below here.
VPATH += $(SHARED_DIR)
INCLUDES += $(patsubst %,-I%, . $(SHARED_DIR))
OPENCM3_DIR=../libopencm3

include $(OPENCM3_DIR)/mk/genlink-config.mk
include ./rules.mk
include $(OPENCM3_DIR)/mk/genlink-rules.mk
