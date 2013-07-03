/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUArrayCellConfiguration : SUCellConfiguration  {
    unsigned int _numberOfStrings;
    struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } *_stringFrames;
    id *_strings;
    unsigned int _numberOfImages;
    struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } *_imageFrames;
    id *_images;
    id *_selectedImages;
}


- (id)_accessibilityStringsArrayPointer;
- (id)initWithStringCount:(unsigned int)arg1 imageCount:(unsigned int)arg2;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)reloadImages;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForImageAtIndex:(unsigned int)arg1;
- (id)imageAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (unsigned int)numberOfImages;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelAtIndex:(unsigned int)arg1;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLabels;
- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;
- (void)reloadData;

@end