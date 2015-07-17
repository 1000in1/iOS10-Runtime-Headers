/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFormattingManager : NSObject {
    BOOL  _supportsVerticalText;
    BOOL  _wantsCustomKerning;
}

@property (nonatomic, readonly) BOOL supportsVerticalText;
@property (nonatomic, readonly) BOOL wantsCustomKerning;

+ (id)sharedManager;

- (void)_commonCAMFormattingManagerInitialization;
- (id)init;
- (BOOL)supportsVerticalText;
- (BOOL)wantsCustomKerning;

@end