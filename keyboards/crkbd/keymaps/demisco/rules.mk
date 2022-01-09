OLED_DRIVER_ENABLE  = yes # enable the OLED feature
MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control

COMBO_ENABLE = yes # Enable combos
VPATH  +=  keyboards/gboards/

# COMPILE OPTIONS
LTO_ENABLE = yes

STENO_ENABLE = yes # enable Stenography
NKRO_ENABLE = yes # enable N-Key RollOver
KEYBOARD_SHARED_EP = yes # “shared endpoints” for mouse & steno