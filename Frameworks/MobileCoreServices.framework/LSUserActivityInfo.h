/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSUUID, NSDictionary, NSString, NSDate, NSURL, NSData;

@interface LSUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {
    NSUUID *_uuid;
    unsigned long long _type;
    NSDictionary *_options;
    unsigned long long _changeCount;
    NSDate *_activityDate;
    NSString *_title;
    NSString *_typeIdentifier;
    NSURL *_webpageURL;
    NSData *_streamsData;
    NSData *_activityPayload;
    NSData *_frameworkPayload;
}

@property(copy) NSUUID * uuid;
@property unsigned long long type;
@property(copy) NSDictionary * options;
@property unsigned long long changeCount;
@property(copy) NSDate * activityDate;
@property(copy) NSString * title;
@property(copy) NSString * typeIdentifier;
@property(copy) NSURL * webpageURL;
@property(copy) NSData * streamsData;
@property(copy) NSData * activityPayload;
@property(copy) NSData * frameworkPayload;

+ (bool)supportsSecureCoding;

- (id)uuid;
- (void)setUuid:(id)arg1;
- (id)activityDate;
- (void)setActivityPayload:(id)arg1;
- (id)activityPayload;
- (void)setFrameworkPayload:(id)arg1;
- (id)frameworkPayload;
- (void)setStreamsData:(id)arg1;
- (id)streamsData;
- (void)setTypeIdentifier:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)webpageURL;
- (void)setActivityDate:(id)arg1;
- (bool)shouldAdvertiseAsDomainContinuation;
- (id)statusString;
- (unsigned long long)changeCount;
- (id)typeIdentifier;
- (void)setType:(unsigned long long)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (unsigned long long)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setChangeCount:(unsigned long long)arg1;

@end