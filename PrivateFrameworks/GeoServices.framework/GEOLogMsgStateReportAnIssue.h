/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateReportAnIssue : PBCodable <NSCopying> {
    struct { 
        unsigned int personalizedAddressIndex : 1; 
    }  _has;
    unsigned int  _personalizedAddressIndex;
}

@property (nonatomic) BOOL hasPersonalizedAddressIndex;
@property (nonatomic) unsigned int personalizedAddressIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPersonalizedAddressIndex;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)personalizedAddressIndex;
- (BOOL)readFrom:(id)arg1;
- (void)setHasPersonalizedAddressIndex:(BOOL)arg1;
- (void)setPersonalizedAddressIndex:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end