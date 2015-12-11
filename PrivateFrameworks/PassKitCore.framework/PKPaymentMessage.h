/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentMessage : NSObject <NSSecureCoding> {
    BOOL _allowDeepLink;
    NSString *_content;
    NSDate *_expirationDate;
    BOOL _expiresOnNextTransaction;
    BOOL _hasAssociatedPaymentApplication;
    NSString *_identifier;
    NSDate *_messageDate;
    NSString *_serviceIdentifier;
}

@property (nonatomic) BOOL allowDeepLink;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic) BOOL expiresOnNextTransaction;
@property (nonatomic) BOOL hasAssociatedPaymentApplication;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *messageDate;
@property (nonatomic, copy) NSString *serviceIdentifier;

+ (id)paymentMessageWithDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)allowDeepLink;
- (id)content;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (BOOL)expiresOnNextTransaction;
- (BOOL)hasAssociatedPaymentApplication;
- (unsigned int)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPaymentMessage:(id)arg1;
- (id)messageDate;
- (id)serviceIdentifier;
- (void)setAllowDeepLink:(BOOL)arg1;
- (void)setContent:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExpiresOnNextTransaction:(BOOL)arg1;
- (void)setHasAssociatedPaymentApplication:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageDate:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;

@end