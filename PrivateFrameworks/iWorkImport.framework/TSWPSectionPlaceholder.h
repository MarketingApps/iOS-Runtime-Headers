/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSKModel, TSWPSection> {
    TSWPStorage *_parentStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)needsObjectUUID;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)pageMasterOwningModel:(id)arg1;
- (id)parentStorage;
- (void)saveToArchiver:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end