/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSRecursiveLock, NSString, NSMutableDictionary;

@interface PFUbiquityGlobalObjectIDCache : NSObject  {
    NSString *_storeName;
    NSString *_localPeerID;
    NSMutableDictionary *_peerIDToEntityNameToPrimaryKey;
    NSRecursiveLock *_peerIDToEntityNameToPrimaryKeyLock;
}

@property(retain) NSString * storeName;
@property(retain) NSString * localPeerID;

+ (id)stringValueFromArray:(id)arg1 atIndexDescribedByStringNumber:(id)arg2;

- (id)createGlobalIDForPrimarKey:(unsigned int)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3;
- (id)createGlobalIDForPrimaryKeyString:(id)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3;
- (id)createGlobalIDForGlobalIDString:(id)arg1;
- (void)purgeCache;
- (id)createGlobalIDForCompressedString:(id)arg1 withEntityNames:(id)arg2 primaryKeys:(id)arg3 peerIDs:(id)arg4;
- (id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2;
- (void)setLocalPeerID:(id)arg1;
- (void)setStoreName:(id)arg1;
- (id)localPeerID;
- (id)storeName;
- (id)init;
- (void)dealloc;

@end