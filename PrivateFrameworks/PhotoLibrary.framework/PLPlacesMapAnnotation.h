/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;

@interface PLPlacesMapAnnotation : NSObject <MKAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    NSString *_title;
    NSString *_subtitle;
    id _context;
    struct NSObject { Class x1; } *_photoAlbum;
    struct { 
        double latitude; 
        double longitude; 
    } _animationOrigin;
    struct { 
        double latitude; 
        double longitude; 
    } _animationDestination;
    unsigned int _animationOriginSet : 1;
    unsigned int _animationDestinationSet : 1;
    unsigned int _isAnimationOnlyAnnotation : 1;
}

@property struct { double x1; double x2; } coordinate;
@property(retain) id context;
@property(readonly) NSString * title;
@property(readonly) NSString * subtitle;


- (void)clearAnimationInformation;
- (void)setAnimationDestination:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })animationDestination;
- (BOOL)hasAnimationDestination;
- (void)setAnimationOrigin:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })animationOrigin;
- (BOOL)hasAnimationOrigin;
- (BOOL)isAnimationOnlyAnnotation;
- (void)resetAfterMapChangeWhenVisible;
- (void)resetAfterMapChange;
- (void)updateCoordinate:(struct { double x1; double x2; })arg1;
- (void)updateToTitle:(id)arg1 subtitle:(id)arg2 album:(struct NSObject { Class x1; }*)arg3;
- (struct NSObject { Class x1; }*)photoAlbum;
- (id)initAnimationOnlyAnnotationWithLongitude:(double)arg1 latitude:(double)arg2;
- (id)initWithLongitude:(double)arg1 latitude:(double)arg2 title:(id)arg3 subtitle:(id)arg4 photoAlbum:(struct NSObject { Class x1; }*)arg5;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (struct { double x1; double x2; })coordinate;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;

@end