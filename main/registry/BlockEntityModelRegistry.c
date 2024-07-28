#include <stdio.h>
#include <stdint.h>

#include <jni.h>

#include <registry/BlockEntityModelRegistry.h>

typedef struct BEMRClass {
	JNIEnv env;
	jclass BlockEntityModelRegistry;
	jmethodID Register;
} BEMRClass;


BEMRClass BlockEntityModelRegistry(JNIEnv *env) {
	BEMRClass bemrclass;
	BEMRClass* class = &bemrclass;
	class->env = *env;
	class->BlockEntityModelRegistry = (*env)->FindClass(env, "BlockEntityModelRegistry");
	class->Register = (*env)->GetStaticMethodID(env, class->BlockEntityModelRegistry, "register", "(Lcom/ultreon/craft/block/entity/BlockEntityType;L/java/util/Function;)V"); /* This might not be the right object type, but we will have to wait and see, I guess... */
	return bemrclass;
}

void Register(BEMRClass bemrclass,  
