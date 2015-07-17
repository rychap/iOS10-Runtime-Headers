/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicEvent : HMEvent <NSSecureCoding> {
    HMCharacteristic * _characteristic;
    <NSCopying> * _triggerValue;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, copy) <NSCopying> *triggerValue;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_serializeForAdd;
- (void)_updateTriggerValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)characteristic;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setTriggerValue:(id)arg1;
- (id)triggerValue;
- (void)updateTriggerValue:(id)arg1 completionHandler:(id /* block */)arg2;

@end