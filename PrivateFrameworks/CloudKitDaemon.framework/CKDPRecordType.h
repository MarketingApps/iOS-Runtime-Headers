/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordType : PBCodable <NSCopying> {
    NSString *_name;
}

@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end