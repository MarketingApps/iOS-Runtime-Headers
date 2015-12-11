/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest {
    NSString *_APIToken;
    id /* block */ _tokenFetchedBlock;
}

@property (nonatomic, copy) NSString *APIToken;
@property (nonatomic, copy) id /* block */ tokenFetchedBlock;

- (void).cxx_destruct;
- (id)APIToken;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setAPIToken:(id)arg1;
- (void)setTokenFetchedBlock:(id /* block */)arg1;
- (id /* block */)tokenFetchedBlock;

@end