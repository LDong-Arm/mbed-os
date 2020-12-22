# 1 "/data_sda/Workspace/mbed-os-tf-m-regression-tests/mbed-os/platform/FEATURE_EXPERIMENTAL_API/FEATURE_PSA/TARGET_TFM/TARGET_TFM_V1_2/TARGET_IGNORE/trusted-firmware-m/cmake_build/bl2/ext/mcuboot/signing_layout_ns.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/data_sda/Workspace/mbed-os-tf-m-regression-tests/mbed-os/platform/FEATURE_EXPERIMENTAL_API/FEATURE_PSA/TARGET_TFM/TARGET_TFM_V1_2/TARGET_IGNORE/trusted-firmware-m/cmake_build/bl2/ext/mcuboot/signing_layout_ns.c"






# 1 "/data_sda/Workspace/mbed-os-tf-m-regression-tests/mbed-os/platform/FEATURE_EXPERIMENTAL_API/FEATURE_PSA/TARGET_TFM/TARGET_TFM_V1_2/TARGET_IGNORE/trusted-firmware-m/platform/ext/target/musca_b1/partition/flash_layout.h" 1
# 8 "/data_sda/Workspace/mbed-os-tf-m-regression-tests/mbed-os/platform/FEATURE_EXPERIMENTAL_API/FEATURE_PSA/TARGET_TFM/TARGET_TFM_V1_2/TARGET_IGNORE/trusted-firmware-m/cmake_build/bl2/ext/mcuboot/signing_layout_ns.c" 2



enum image_attributes {
    RE_SECURE_IMAGE_OFFSET = (0x0),
    RE_SECURE_IMAGE_MAX_SIZE = (0x60000),
    RE_NON_SECURE_IMAGE_OFFSET = ((0x0) + (0x60000)),
    RE_NON_SECURE_IMAGE_MAX_SIZE = (0x80000),



    RE_SIGN_BIN_SIZE = ((0x80000)),
};
