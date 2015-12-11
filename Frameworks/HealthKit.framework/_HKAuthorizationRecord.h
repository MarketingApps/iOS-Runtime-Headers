/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding> {
    long long _objectAnchor;
    int _request;
    int _status;
}

@property (readonly) long long objectAnchor;
@property (readonly) int request;
@property (readonly) int status;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithAuthorizationStatus:(int)arg1 authorizationRequest:(int)arg2 objectAnchor:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCompatibleStatus:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)objectAnchor;
- (int)request;
- (BOOL)requestedReading;
- (BOOL)requestedSharing;
- (int)status;

@end