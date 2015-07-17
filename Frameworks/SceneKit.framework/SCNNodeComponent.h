/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNNodeComponent : NSObject {
    id  component;
    SCNNodeComponent * next;
    int  type;
}

@property (nonatomic, retain) id component;
@property (nonatomic, retain) SCNNodeComponent *next;
@property (nonatomic) int type;

- (id)component;
- (void)dealloc;
- (id)initWithType:(int)arg1 component:(id)arg2;
- (id)next;
- (void)setComponent:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end