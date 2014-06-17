/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject  {
    NSMutableDictionary *_flowControlledOperationClasses;
    NSMutableDictionary *_flowControlOperationIDs;
}

@property(readonly) NSMutableDictionary * flowControlledOperationClasses;
@property(readonly) NSMutableDictionary * flowControlOperationIDs;


- (void)limitOperation:(id)arg1;
- (bool)isOperationLimited:(id)arg1;
- (id)flowControlOperationIDs;
- (id)flowControlledOperationClasses;
- (void)unlimitOperationWithID:(id)arg1;
- (void)unlimitAllOperations;
- (id)init;
- (void).cxx_destruct;

@end