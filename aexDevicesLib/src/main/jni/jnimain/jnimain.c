//
// Created by 杨军 on 16/3/26.
//
#include <jni.h>
#include <stdio.h>      /*标准输入输出定义*/
#include <stdlib.h>
#include <android/log.h>
#include "../aexKMY350/com_androidex_devices_aexddKMY350.h"
#include "../aexMt318/com_androidex_devices_aexddMT318.h"
#include "../aexB58T/com_androidex_devices_aexddB58T.h"


jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    jint res;

    res = aexddKMY350_JNI_OnLoad(vm,reserved);
    res = aexddMT318_JNI_OnLoad(vm,reserved);
    res = aexddB58T_JNI_OnLoad(vm,reserved);
    return JNI_VERSION_1_4;
}

JNIEXPORT void JNICALL JNI_OnUnload(JavaVM* vm, void* reserved)
{
    aexddKMY350_JNI_OnUnload(vm,reserved);
    aexddMT318_JNI_OnUnload(vm,reserved);
    aexddB58T_JNI_OnUnload(vm,reserved);
}
