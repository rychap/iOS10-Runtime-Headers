/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TILanguageModelMaintainer : NSObject <TIKeyboardActivityObserving> {
    NSTimer * _dynamicLearningCacheTimer;
    NSDate * _nextEligibleMaintenanceDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSTimer *dynamicLearningCacheTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *nextEligibleMaintenanceDate;
@property (readonly) Class superclass;

+ (id)sharedLanguageModelMaintainer;

- (void)dealloc;
- (id)dynamicLearningCacheTimer;
- (void)dynamicLearningCacheTimerFired:(id)arg1;
- (id)init;
- (bool)isMaintenanceDue;
- (void)keyboardActivityDidTransition:(id)arg1;
- (id)nextEligibleMaintenanceDate;
- (void)performMaintenanceIfNecessary;
- (void)setDynamicLearningCacheTimer:(id)arg1;
- (void)setNextEligibleMaintenanceDate:(id)arg1;
- (void)touchDynamicLearningCacheTimer;

@end