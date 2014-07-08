/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_queue>, NSDateFormatter, NSString;

@interface PLSearchIndexDateFormatter : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSDateFormatter *_dateFormatter;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_displayFormat;
    NSString *_parseFormat;
    bool_localeDidChange;
}


- (id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2;
- (id)newLocalizedStringFromDate:(id)arg1;
- (id)_inqNewLocalizedStringFromDate:(id)arg1;
- (void)_inqSetupDateFormatter;
- (void)_inqUpdateDateFormat:(id)arg1;
- (id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(bool)arg2;
- (void)_localeDidChange:(id)arg1;
- (id)init;
- (void)dealloc;

@end