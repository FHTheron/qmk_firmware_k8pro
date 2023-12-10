#!/bin/bash

while (true); do
    dfu-util -a 0 -d 0483:df11 -s 0x8000000:mass-erase:force:leave -D keychron_k8_pro_ansi_rgb_via.bin
    if [[ $? == 0 ]]; then
        break
    fi
    sleep 1
done

