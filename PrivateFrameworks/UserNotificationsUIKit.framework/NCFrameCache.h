/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCFrameCache : NSObject {
    NSObject<OS_dispatch_queue> * _cacheIsolationQueue;
    int  _cacheStrategy;
    NSMutableIndexSet * _cachedIndexes;
    NSMutableDictionary * _frameCache;
    unsigned int  _frameCacheSize;
    unsigned int  _frameCount;
    NSObject<OS_dispatch_queue> * _frameGenerationQueue;
    unsigned int  _fullCachingCost;
    struct CGImageSource { } * _gifSource;
    struct { 
        BOOL cacheSize; 
        BOOL frameCache; 
    }  _isValid;
    unsigned int  _lastRequestedIdx;
}

@property (nonatomic) int cacheStrategy;

- (void).cxx_destruct;
- (struct CGImage { }*)_createPredrawnImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)_frameAtIndex:(unsigned int)arg1 allowLazy:(BOOL)arg2;
- (void)_frameGenerationQueue_cacheFrameAtIndex:(unsigned int)arg1;
- (void)_frameGenerationQueue_updateFrameCache;
- (void)_invalidateCache;
- (void)_invalidateCacheSize;
- (void)_updateDesiredCacheSize;
- (void)_updateFrameCache;
- (void)_updateIfNeeded;
- (int)cacheStrategy;
- (void)dealloc;
- (struct CGImage { }*)frameAtIndex:(unsigned int)arg1;
- (struct CGImage { }*)frameAtIndexIfReady:(unsigned int)arg1;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 cachingStrategy:(int)arg2;
- (void)setCacheStrategy:(int)arg1;

@end
