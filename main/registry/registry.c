/*
 *
 * registry.c
 *
 * Registry API for ultreon
 *
 */

#include <stdint.h>
#include <jni.h>

#include <registry/registry.h>

#define CLASS class->Registry
#define ENV class->env

typedef struct RegistryClass {
	JNIEnv env;
	jclass Registry;
	// jmethodID getRegistries;
	jmethodID freeze;
	jmethodID getDumpLogger;
	jmethodID setDumpLogger;
	jmethodID id;
	jmethodID key;
	jmethodID create;
	jmethodID builder;
	jmethodID getId;
	jmethodID getElement;
	// jmethodID contains;
	jmethodID dumpRegistry;
	/*
	 * I am considering writing a whole
	 * new function for `register`, as
	 * it would add better user convenience.
	 * Might be a bit slower though.
	 * I will add it here for the time being.
	 *
	 */
	jmethodID Register; /* Main function for registration */
	jmethodID isOverrideAllowed;
	jmethodID isSyncDisabled;
	jmethodID values;
	jmethodID ids;
	jmethodID keys;
	// jmethodID entries
	jmethodID getType;
	jmethodID isFrozen;
	jmethodID getRawId;
	jmethodID byID;
	jmethodID getRegistry;
	jmethodID get;
	jmethodID subscribe;
	jmethodID unsubscribe;
	jmethodID publish;
} RegistryClass;

RegistryClass registry(RegistryClass registryclass) {
	RegistryClass registryclass;
	RegistryClass* class = &registryclass;
	class->env = *env;
	class->Registry = ENV->FindClass(ENV, "Registry");
	// class->getRegistries = ENV->GetStaticMethodID(ENV, CLASS, "getRegistries", "(
	class->freeze = ENV->GetStaticMethodID
