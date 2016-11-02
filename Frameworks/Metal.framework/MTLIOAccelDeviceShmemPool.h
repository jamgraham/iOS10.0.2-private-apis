/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelDeviceShmemPool : NSObject {
    /* Warning: unhandled struct encoding: '{_MTLIOAccelDeviceShmemPoolPrivate="queue"{shmemPoolQueue="tqh_first"@"MTLIOAccelDeviceShmem""tqh_last"^@}"lock"i"count"i"shmemClass"#"device"@"MTLIOAccelDevice""shmemSize"I}' */ struct _MTLIOAccelDeviceShmemPoolPrivate { 
        struct shmemPoolQueue { 
            MTLIOAccelDeviceShmem *tqh_first; 
            id *tqh_last; 
            int lock; 
            int count; 
            Class shmemClass; 
            MTLIOAccelDevice *device; 
            unsigned int shmemSize; 
        } queue; 
    }  _priv;
}

- (int)availableCount;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 shmemSize:(unsigned int)arg3 options:(id)arg4;
- (void)prune;
- (void)purge;
- (void)setShmemSize:(unsigned int)arg1;
- (unsigned int)shmemSize;

@end
