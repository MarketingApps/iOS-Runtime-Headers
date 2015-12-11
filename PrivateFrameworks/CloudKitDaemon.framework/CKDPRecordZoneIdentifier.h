/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordZoneIdentifier : PBCodable <NSCopying> {
    CKDPIdentifier *_ownerIdentifier;
    CKDPIdentifier *_value;
}

@property (nonatomic, readonly) BOOL hasOwnerIdentifier;
@property (nonatomic, readonly) BOOL hasValue;
@property (nonatomic, retain) CKDPIdentifier *ownerIdentifier;
@property (nonatomic, retain) CKDPIdentifier *value;

- (void).cxx_destruct;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasOwnerIdentifier;
- (BOOL)hasValue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)ownerIdentifier;
- (BOOL)readFrom:(id)arg1;
- (void)setOwnerIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end