/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICAPackageView : UIView {
    CAPackage * _package;
    NSArray * _rootViews;
}

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_newViewHierarchyFrom:(id)arg1 publishedObjectViewClassMap:(id)arg2 into:(id)arg3;
+ (bool)_shouldCatchDecodingExceptions;
+ (void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id /* block */)arg3;
+ (void)loadPackageViewWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id /* block */)arg3;
+ (void)loadPackageViewWithObject:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)publishedObjectWithName:(id)arg1;
- (id)publishedViewWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

- (id)sb_debugLabel;
- (void)wg_setShowsDebugLabel:(bool)arg1;
- (bool)wg_showsDebugLabel;

@end
