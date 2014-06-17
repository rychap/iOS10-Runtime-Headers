/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSMutableArray, NSError, NSLock, GKUpdateGroup;

@interface GKUpdateGroupNotifier : NSObject  {
    GKUpdateGroup *_group;
    NSLock *_lock;
    NSMutableArray *_updateQueue;
    NSError *_error;
}

@property(retain) GKUpdateGroup * group;
@property(retain) NSLock * lock;
@property(retain) NSMutableArray * updateQueue;
@property(retain) NSError * error;


- (void)setUpdateQueue:(id)arg1;
- (id)updateQueue;
- (void)addUpdatesFromGroup:(id)arg1;
- (void)addUpdate:(id)arg1 error:(id)arg2;
- (void)updateError:(id)arg1;
- (void)setLock:(id)arg1;
- (id)group;
- (id)init;
- (void)setGroup:(id)arg1;
- (id)lock;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (oneway void)release;
- (id)retain;

@end