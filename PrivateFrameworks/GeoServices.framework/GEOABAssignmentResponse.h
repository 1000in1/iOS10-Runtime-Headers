/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABAssignmentResponse : PBCodable <NSCopying> {
    NSMutableArray * _assignments;
    GEOABClientConfig * _clientConfig;
    struct { 
        unsigned int refreshIntervalSeconds : 1; 
        unsigned int timestamp : 1; 
        unsigned int invalidatePoiCache : 1; 
        unsigned int invalidateTileCache : 1; 
    }  _has;
    bool  _invalidatePoiCache;
    bool  _invalidateTileCache;
    GEOABSecondPartyPlaceRequestClientMetaData * _parsecClientMetaData;
    GEOABSecondPartyPlaceRequestClientMetaData * _rapClientMetaData;
    unsigned long long  _refreshIntervalSeconds;
    NSString * _requestGuid;
    GEOABSecondPartyPlaceRequestClientMetaData * _siriClientMetaData;
    NSString * _sourceURL;
    double  _timestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *assignments;
@property (nonatomic, retain) GEOABClientConfig *clientConfig;
@property (nonatomic, readonly) bool hasClientConfig;
@property (nonatomic) bool hasInvalidatePoiCache;
@property (nonatomic) bool hasInvalidateTileCache;
@property (nonatomic, readonly) bool hasParsecClientMetaData;
@property (nonatomic, readonly) bool hasRapClientMetaData;
@property (nonatomic) bool hasRefreshIntervalSeconds;
@property (nonatomic, readonly) bool hasRequestGuid;
@property (nonatomic, readonly) bool hasSiriClientMetaData;
@property (nonatomic, readonly) bool hasSourceURL;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool invalidatePoiCache;
@property (nonatomic) bool invalidateTileCache;
@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *parsecClientMetaData;
@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *rapClientMetaData;
@property (nonatomic) unsigned long long refreshIntervalSeconds;
@property (nonatomic, retain) NSString *requestGuid;
@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *siriClientMetaData;
@property (nonatomic, retain) NSString *sourceURL;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)assignmentType;

- (id)_clientConfigValueForKey:(id)arg1;
- (id)_experimentAssignmentForServiceType:(int)arg1 placeRequestType:(int)arg2;
- (id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2;
- (void)addAssignment:(id)arg1;
- (id)assignmentAtIndex:(unsigned long long)arg1;
- (id)assignments;
- (unsigned long long)assignmentsCount;
- (void)clearAssignments;
- (id)clientConfig;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientConfig;
- (bool)hasInvalidatePoiCache;
- (bool)hasInvalidateTileCache;
- (bool)hasParsecClientMetaData;
- (bool)hasRapClientMetaData;
- (bool)hasRefreshIntervalSeconds;
- (bool)hasRequestGuid;
- (bool)hasSiriClientMetaData;
- (bool)hasSourceURL;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)invalidatePoiCache;
- (bool)invalidateTileCache;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parsecClientMetaData;
- (id)rapClientMetaData;
- (bool)readFrom:(id)arg1;
- (unsigned long long)refreshIntervalSeconds;
- (id)requestGuid;
- (void)setAssignments:(id)arg1;
- (void)setClientConfig:(id)arg1;
- (void)setHasInvalidatePoiCache:(bool)arg1;
- (void)setHasInvalidateTileCache:(bool)arg1;
- (void)setHasRefreshIntervalSeconds:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInvalidatePoiCache:(bool)arg1;
- (void)setInvalidateTileCache:(bool)arg1;
- (void)setParsecClientMetaData:(id)arg1;
- (void)setRapClientMetaData:(id)arg1;
- (void)setRefreshIntervalSeconds:(unsigned long long)arg1;
- (void)setRequestGuid:(id)arg1;
- (void)setSiriClientMetaData:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)siriClientMetaData;
- (id)sourceURL;
- (double)timestamp;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end