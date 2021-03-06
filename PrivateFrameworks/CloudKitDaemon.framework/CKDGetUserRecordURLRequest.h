/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetUserRecordURLRequest : CKDURLRequest {
    id /* block */  _recordFetchedBlock;
    CKRecord * _userRecord;
}

@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, retain) CKRecord *userRecord;

- (void).cxx_destruct;
- (int)operationType;
- (id /* block */)recordFetchedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setUserRecord:(id)arg1;
- (id)userRecord;

@end
