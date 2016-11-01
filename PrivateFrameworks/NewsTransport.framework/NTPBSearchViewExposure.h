/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSearchViewExposure : PBCodable <NSCopying> {
    int  _areaPresentationReason;
    struct { 
        unsigned int areaPresentationReason : 1; 
    }  _has;
}

@property (nonatomic) int areaPresentationReason;
@property (nonatomic) bool hasAreaPresentationReason;

- (int)StringAsAreaPresentationReason:(id)arg1;
- (int)areaPresentationReason;
- (id)areaPresentationReasonAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAreaPresentationReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAreaPresentationReason:(int)arg1;
- (void)setHasAreaPresentationReason:(bool)arg1;
- (void)writeTo:(id)arg1;

@end