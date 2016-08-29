/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreFairPlayCoordinator : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMapTable * _cacheKeyToSAPSession;
}

+ (id)_newCacheKeyForVersion:(long long)arg1 URLBagDictionary:(id)arg2;
+ (bool)requiresSAPSessionReloadFromEnvironment:(id)arg1 toEnvironment:(id)arg2 forSAPVersion:(long long)arg3;
+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (id)init;
- (void)loadSAPSessionWithVersion:(long long)arg1 environment:(id)arg2 completionHandler:(id /* block */)arg3;

@end