/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSDictionary, NSArray;

@interface PLPhotoEditMutableModel : PLPhotoEditModel  {
    long long _transactionDepth;
}

@property(copy) NSString * effectFilterName;
@property(getter=isSmartToneEnabled) bool smartToneEnabled;
@property double smartToneLevel;
@property double brightnessLevelOffset;
@property double contrastLevelOffset;
@property double exposureLevelOffset;
@property double highlightsLevelOffset;
@property double shadowsLevelOffset;
@property double blackPointLevelOffset;
@property(copy) NSDictionary * smartToneStatistics;
@property(getter=isSmartColorEnabled) bool smartColorEnabled;
@property double smartColorLevel;
@property double colorContrastLevelOffset;
@property double colorVibrancyLevelOffset;
@property double colorCastLevelOffset;
@property(copy) NSDictionary * smartColorStatistics;
@property unsigned long long rotation;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property double straightenAngle;
@property(copy) NSArray * redEyeCorrections;
@property(copy) NSArray * autoRedEyeCorrections;
@property(copy) NSArray * autoEnhanceFilters;
@property bool autoEnhanceIsOn;


- (void)removeRedEyeCorrections:(id)arg1;
- (void)addRedEyeCorrections:(id)arg1;
- (void)setCropConstraintWidth:(long long)arg1 height:(long long)arg2;
- (void)setColorCastLevelOffset:(double)arg1;
- (void)setBlackPointLevelOffset:(double)arg1;
- (void)computeSmartColorStatisticsFromImage:(id)arg1;
- (void)computeSmartToneStatisticsFromImage:(id)arg1;
- (void)loadDataFromModel:(id)arg1;
- (void)performChangesWithBlock:(id)arg1;
- (void)setSmartColorEnabled:(bool)arg1;
- (void)setColorVibrancyLevelOffset:(double)arg1;
- (void)setColorContrastLevelOffset:(double)arg1;
- (void)setSmartColorLevel:(double)arg1;
- (void)setSmartToneEnabled:(bool)arg1;
- (void)setShadowsLevelOffset:(double)arg1;
- (void)setHighlightsLevelOffset:(double)arg1;
- (void)setExposureLevelOffset:(double)arg1;
- (void)setContrastLevelOffset:(double)arg1;
- (void)setBrightnessLevelOffset:(double)arg1;
- (void)setSmartToneLevel:(double)arg1;
- (void)setAutoRedEyeCorrections:(id)arg1;
- (void)setSmartColorStatistics:(id)arg1;
- (void)setSmartToneStatistics:(id)arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStraightenAngle:(double)arg1;
- (void)setAutoEnhanceIsOn:(bool)arg1;
- (void)setAutoEnhanceFilters:(id)arg1;
- (void)setRedEyeCorrections:(id)arg1;
- (void)setEffectFilterName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setRotation:(unsigned long long)arg1;

@end