/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLProcessNetworkAgent : PLAgent {
    PLEntryNotificationOperatorComposition * _batteryLevelChanged;
    NSDate * _lastEntryDate;
    NSDictionary * _lastProcessNameToNetworkUsageEntry;
    PLMonotonicTimer * _logUsageTimer;
    NSMutableSet * _processes;
    struct __NStatManager { } * _statManagerRef;
    UsageFeed * _usageFeed;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) NSDate *lastEntryDate;
@property (retain) NSDictionary *lastProcessNameToNetworkUsageEntry;
@property (retain) PLMonotonicTimer *logUsageTimer;
@property (retain) NSMutableSet *processes;
@property struct __NStatManager { }*statManagerRef;
@property (retain) UsageFeed *usageFeed;

+ (id)entryEventBackwardDefinitionUsage;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionUsage;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionConnection;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (void)accountWithNetworkUsageDiffEntries:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;
- (void)addSource:(id)arg1 toPID:(id)arg2;
- (id)batteryLevelChanged;
- (void)didAddNewSource:(struct __NStatSource { }*)arg1;
- (void)didRemoveSource:(id)arg1;
- (void)didSetCountsBlock:(id)arg1 withCounts:(id)arg2;
- (void)didSetDescriptionBlock:(id)arg1 withDescription:(id)arg2;
- (id)init;
- (void)initOperatorDependancies;
- (id)lastEntryDate;
- (id)lastProcessNameToNetworkUsageEntry;
- (void)log;
- (void)logEventBackwardUsage;
- (void)logEventBackwardUsageWithOutcome:(id)arg1;
- (void)logEventPointConnectionEvent:(id)arg1 forSource:(id)arg2;
- (id)logUsageTimer;
- (bool)outcomeHasDataUsage:(id)arg1;
- (id)processes;
- (void)processesOfInterest:(id)arg1;
- (void)setBatteryLevelChanged:(id)arg1;
- (void)setLastEntryDate:(id)arg1;
- (void)setLastProcessNameToNetworkUsageEntry:(id)arg1;
- (void)setLogUsageTimer:(id)arg1;
- (void)setProcesses:(id)arg1;
- (void)setStatManagerRef:(struct __NStatManager { }*)arg1;
- (void)setUsageFeed:(id)arg1;
- (struct __NStatManager { }*)statManagerRef;
- (void)transferSource:(id)arg1 fromPID:(id)arg2 toPID:(id)arg3;
- (id)usageFeed;

@end