#ifndef INIT_H
#define INIT_H

#include <jni.h>

JNIEnv* create_vm(JavaVM **vm);

void init(JNIEnv* env);
