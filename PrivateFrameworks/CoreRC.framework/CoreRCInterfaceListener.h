/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCInterfaceListener : NSObject {
    <CoreRCInterfaceListenerDelegate> * _delegate;
    NSMutableArray * _interfaces;
}

@property (nonatomic) <CoreRCInterfaceListenerDelegate> *delegate;
@property (nonatomic, readonly) NSArray *interfaces;

- (void)addInterface:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)firstInterface;
- (id)init;
- (id)initWithInterfaceController:(id)arg1;
- (id)interfaces;
- (void)removeInterface:(id)arg1;
- (void)scheduleWithDispatchQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unscheduleFromDispatchQueue:(id)arg1;

@end
