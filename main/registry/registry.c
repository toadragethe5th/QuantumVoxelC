/*
 *
 * registry.c
 *
 * Registry API for Ultreon
 *
 */

#include <stdint.h>
#include <jni.h>

#include <registry.h>

typedef struct registry_t {
	JNIEnv env;
	jclass Registry;
	jmethodID Register;
} registry_t;

registry_t registry(JNIEnv *env)
{
	registry_t registry;
	registry_t *class = &registry;

	class->env = env;
	class->Registry = class->env->FindClass(class->env, "Registry");
}