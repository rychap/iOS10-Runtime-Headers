/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject <CHLoggerProtocol, CHSynchronizableProtocol> {
    CHLogger *_logger;
    CHSynchronizable *_synchronizable;
}


- (void)logWarn:(id)arg1;
- (void)logNotice:(id)arg1;
- (void)logInfo:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (void)logError:(id)arg1;
- (void)logDebug:(id)arg1;
- (bool)executeSyncWithBOOL:(id)arg1;
- (id)executeSyncWithResult:(id)arg1;
- (void)executeSync:(id)arg1;
- (void)execute:(id)arg1;
- (id)queue;
- (id)initWithName:(id)arg1;
- (void).cxx_destruct;

@end