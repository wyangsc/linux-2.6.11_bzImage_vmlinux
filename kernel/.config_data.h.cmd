cmd_kernel/config_data.h := (echo "const char kernel_config_data[] = MAGIC_START"; cat kernel/config_data.gz | scripts/bin2c; echo "MAGIC_END;") > kernel/config_data.h
