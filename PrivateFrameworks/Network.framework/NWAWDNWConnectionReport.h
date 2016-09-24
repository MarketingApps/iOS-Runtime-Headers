/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDNWConnectionReport : PBCodable <NSCopying> {
    int  _connectedAddressFamily;
    unsigned int  _connectedAddressIndex;
    int  _connectedInterfaceType;
    int  _connectionMode;
    unsigned int  _connectionReuseCount;
    BOOL  _customProxyConfigured;
    unsigned int  _dataStallCount;
    int  _failureReason;
    BOOL  _fallbackEligible;
    int  _firstAddressFamily;
    unsigned int  _flowConnectMilliseconds;
    unsigned int  _flowDurationMilliseconds;
    struct { 
        unsigned int connectedAddressIndex : 1; 
        unsigned int connectionReuseCount : 1; 
        unsigned int dataStallCount : 1; 
        unsigned int flowConnectMilliseconds : 1; 
        unsigned int flowDurationMilliseconds : 1; 
        unsigned int ipv4AddressCount : 1; 
        unsigned int ipv6AddressCount : 1; 
        unsigned int pathTriggerMilliseconds : 1; 
        unsigned int proxyMilliseconds : 1; 
        unsigned int resolutionMilliseconds : 1; 
        unsigned int timestamp : 1; 
        unsigned int tlsMilliseconds : 1; 
        unsigned int trafficClass : 1; 
        unsigned int connectedAddressFamily : 1; 
        unsigned int connectedInterfaceType : 1; 
        unsigned int connectionMode : 1; 
        unsigned int failureReason : 1; 
        unsigned int firstAddressFamily : 1; 
        unsigned int usedProxyType : 1; 
        unsigned int customProxyConfigured : 1; 
        unsigned int fallbackEligible : 1; 
        unsigned int multipathConfigured : 1; 
        unsigned int resolutionRequired : 1; 
        unsigned int synthesizedIPv6Address : 1; 
        unsigned int systemProxyConfigured : 1; 
        unsigned int tfoConfigured : 1; 
        unsigned int tlsConfigured : 1; 
        unsigned int triggeredPath : 1; 
        unsigned int usedFallback : 1; 
        unsigned int weakFallback : 1; 
    }  _has;
    unsigned int  _ipv4AddressCount;
    unsigned int  _ipv6AddressCount;
    BOOL  _multipathConfigured;
    unsigned int  _pathTriggerMilliseconds;
    unsigned int  _proxyMilliseconds;
    unsigned int  _resolutionMilliseconds;
    BOOL  _resolutionRequired;
    BOOL  _synthesizedIPv6Address;
    BOOL  _systemProxyConfigured;
    BOOL  _tfoConfigured;
    unsigned int  _timestamp;
    BOOL  _tlsConfigured;
    unsigned int  _tlsMilliseconds;
    unsigned int  _trafficClass;
    BOOL  _triggeredPath;
    BOOL  _usedFallback;
    int  _usedProxyType;
    BOOL  _weakFallback;
}

@property (nonatomic) int connectedAddressFamily;
@property (nonatomic) unsigned int connectedAddressIndex;
@property (nonatomic) int connectedInterfaceType;
@property (nonatomic) int connectionMode;
@property (nonatomic) unsigned int connectionReuseCount;
@property (nonatomic) BOOL customProxyConfigured;
@property (nonatomic) unsigned int dataStallCount;
@property (nonatomic) int failureReason;
@property (nonatomic) BOOL fallbackEligible;
@property (nonatomic) int firstAddressFamily;
@property (nonatomic) unsigned int flowConnectMilliseconds;
@property (nonatomic) unsigned int flowDurationMilliseconds;
@property (nonatomic) BOOL hasConnectedAddressFamily;
@property (nonatomic) BOOL hasConnectedAddressIndex;
@property (nonatomic) BOOL hasConnectedInterfaceType;
@property (nonatomic) BOOL hasConnectionMode;
@property (nonatomic) BOOL hasConnectionReuseCount;
@property (nonatomic) BOOL hasCustomProxyConfigured;
@property (nonatomic) BOOL hasDataStallCount;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) BOOL hasFallbackEligible;
@property (nonatomic) BOOL hasFirstAddressFamily;
@property (nonatomic) BOOL hasFlowConnectMilliseconds;
@property (nonatomic) BOOL hasFlowDurationMilliseconds;
@property (nonatomic) BOOL hasIpv4AddressCount;
@property (nonatomic) BOOL hasIpv6AddressCount;
@property (nonatomic) BOOL hasMultipathConfigured;
@property (nonatomic) BOOL hasPathTriggerMilliseconds;
@property (nonatomic) BOOL hasProxyMilliseconds;
@property (nonatomic) BOOL hasResolutionMilliseconds;
@property (nonatomic) BOOL hasResolutionRequired;
@property (nonatomic) BOOL hasSynthesizedIPv6Address;
@property (nonatomic) BOOL hasSystemProxyConfigured;
@property (nonatomic) BOOL hasTfoConfigured;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTlsConfigured;
@property (nonatomic) BOOL hasTlsMilliseconds;
@property (nonatomic) BOOL hasTrafficClass;
@property (nonatomic) BOOL hasTriggeredPath;
@property (nonatomic) BOOL hasUsedFallback;
@property (nonatomic) BOOL hasUsedProxyType;
@property (nonatomic) BOOL hasWeakFallback;
@property (nonatomic) unsigned int ipv4AddressCount;
@property (nonatomic) unsigned int ipv6AddressCount;
@property (nonatomic) BOOL multipathConfigured;
@property (nonatomic) unsigned int pathTriggerMilliseconds;
@property (nonatomic) unsigned int proxyMilliseconds;
@property (nonatomic) unsigned int resolutionMilliseconds;
@property (nonatomic) BOOL resolutionRequired;
@property (nonatomic) BOOL synthesizedIPv6Address;
@property (nonatomic) BOOL systemProxyConfigured;
@property (nonatomic) BOOL tfoConfigured;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) BOOL tlsConfigured;
@property (nonatomic) unsigned int tlsMilliseconds;
@property (nonatomic) unsigned int trafficClass;
@property (nonatomic) BOOL triggeredPath;
@property (nonatomic) BOOL usedFallback;
@property (nonatomic) int usedProxyType;
@property (nonatomic) BOOL weakFallback;

- (int)StringAsConnectedAddressFamily:(id)arg1;
- (int)StringAsConnectedInterfaceType:(id)arg1;
- (int)StringAsConnectionMode:(id)arg1;
- (int)StringAsFailureReason:(id)arg1;
- (int)StringAsFirstAddressFamily:(id)arg1;
- (int)StringAsUsedProxyType:(id)arg1;
- (int)connectedAddressFamily;
- (id)connectedAddressFamilyAsString:(int)arg1;
- (unsigned int)connectedAddressIndex;
- (int)connectedInterfaceType;
- (id)connectedInterfaceTypeAsString:(int)arg1;
- (int)connectionMode;
- (id)connectionModeAsString:(int)arg1;
- (unsigned int)connectionReuseCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)customProxyConfigured;
- (unsigned int)dataStallCount;
- (id)description;
- (id)dictionaryRepresentation;
- (int)failureReason;
- (id)failureReasonAsString:(int)arg1;
- (BOOL)fallbackEligible;
- (int)firstAddressFamily;
- (id)firstAddressFamilyAsString:(int)arg1;
- (unsigned int)flowConnectMilliseconds;
- (unsigned int)flowDurationMilliseconds;
- (BOOL)hasConnectedAddressFamily;
- (BOOL)hasConnectedAddressIndex;
- (BOOL)hasConnectedInterfaceType;
- (BOOL)hasConnectionMode;
- (BOOL)hasConnectionReuseCount;
- (BOOL)hasCustomProxyConfigured;
- (BOOL)hasDataStallCount;
- (BOOL)hasFailureReason;
- (BOOL)hasFallbackEligible;
- (BOOL)hasFirstAddressFamily;
- (BOOL)hasFlowConnectMilliseconds;
- (BOOL)hasFlowDurationMilliseconds;
- (BOOL)hasIpv4AddressCount;
- (BOOL)hasIpv6AddressCount;
- (BOOL)hasMultipathConfigured;
- (BOOL)hasPathTriggerMilliseconds;
- (BOOL)hasProxyMilliseconds;
- (BOOL)hasResolutionMilliseconds;
- (BOOL)hasResolutionRequired;
- (BOOL)hasSynthesizedIPv6Address;
- (BOOL)hasSystemProxyConfigured;
- (BOOL)hasTfoConfigured;
- (BOOL)hasTimestamp;
- (BOOL)hasTlsConfigured;
- (BOOL)hasTlsMilliseconds;
- (BOOL)hasTrafficClass;
- (BOOL)hasTriggeredPath;
- (BOOL)hasUsedFallback;
- (BOOL)hasUsedProxyType;
- (BOOL)hasWeakFallback;
- (unsigned int)hash;
- (unsigned int)ipv4AddressCount;
- (unsigned int)ipv6AddressCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)multipathConfigured;
- (unsigned int)pathTriggerMilliseconds;
- (unsigned int)proxyMilliseconds;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)resolutionMilliseconds;
- (BOOL)resolutionRequired;
- (void)setConnectedAddressFamily:(int)arg1;
- (void)setConnectedAddressIndex:(unsigned int)arg1;
- (void)setConnectedInterfaceType:(int)arg1;
- (void)setConnectionMode:(int)arg1;
- (void)setConnectionReuseCount:(unsigned int)arg1;
- (void)setCustomProxyConfigured:(BOOL)arg1;
- (void)setDataStallCount:(unsigned int)arg1;
- (void)setFailureReason:(int)arg1;
- (void)setFallbackEligible:(BOOL)arg1;
- (void)setFirstAddressFamily:(int)arg1;
- (void)setFlowConnectMilliseconds:(unsigned int)arg1;
- (void)setFlowDurationMilliseconds:(unsigned int)arg1;
- (void)setHasConnectedAddressFamily:(BOOL)arg1;
- (void)setHasConnectedAddressIndex:(BOOL)arg1;
- (void)setHasConnectedInterfaceType:(BOOL)arg1;
- (void)setHasConnectionMode:(BOOL)arg1;
- (void)setHasConnectionReuseCount:(BOOL)arg1;
- (void)setHasCustomProxyConfigured:(BOOL)arg1;
- (void)setHasDataStallCount:(BOOL)arg1;
- (void)setHasFailureReason:(BOOL)arg1;
- (void)setHasFallbackEligible:(BOOL)arg1;
- (void)setHasFirstAddressFamily:(BOOL)arg1;
- (void)setHasFlowConnectMilliseconds:(BOOL)arg1;
- (void)setHasFlowDurationMilliseconds:(BOOL)arg1;
- (void)setHasIpv4AddressCount:(BOOL)arg1;
- (void)setHasIpv6AddressCount:(BOOL)arg1;
- (void)setHasMultipathConfigured:(BOOL)arg1;
- (void)setHasPathTriggerMilliseconds:(BOOL)arg1;
- (void)setHasProxyMilliseconds:(BOOL)arg1;
- (void)setHasResolutionMilliseconds:(BOOL)arg1;
- (void)setHasResolutionRequired:(BOOL)arg1;
- (void)setHasSynthesizedIPv6Address:(BOOL)arg1;
- (void)setHasSystemProxyConfigured:(BOOL)arg1;
- (void)setHasTfoConfigured:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTlsConfigured:(BOOL)arg1;
- (void)setHasTlsMilliseconds:(BOOL)arg1;
- (void)setHasTrafficClass:(BOOL)arg1;
- (void)setHasTriggeredPath:(BOOL)arg1;
- (void)setHasUsedFallback:(BOOL)arg1;
- (void)setHasUsedProxyType:(BOOL)arg1;
- (void)setHasWeakFallback:(BOOL)arg1;
- (void)setIpv4AddressCount:(unsigned int)arg1;
- (void)setIpv6AddressCount:(unsigned int)arg1;
- (void)setMultipathConfigured:(BOOL)arg1;
- (void)setPathTriggerMilliseconds:(unsigned int)arg1;
- (void)setProxyMilliseconds:(unsigned int)arg1;
- (void)setResolutionMilliseconds:(unsigned int)arg1;
- (void)setResolutionRequired:(BOOL)arg1;
- (void)setSynthesizedIPv6Address:(BOOL)arg1;
- (void)setSystemProxyConfigured:(BOOL)arg1;
- (void)setTfoConfigured:(BOOL)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setTlsConfigured:(BOOL)arg1;
- (void)setTlsMilliseconds:(unsigned int)arg1;
- (void)setTrafficClass:(unsigned int)arg1;
- (void)setTriggeredPath:(BOOL)arg1;
- (void)setUsedFallback:(BOOL)arg1;
- (void)setUsedProxyType:(int)arg1;
- (void)setWeakFallback:(BOOL)arg1;
- (BOOL)synthesizedIPv6Address;
- (BOOL)systemProxyConfigured;
- (BOOL)tfoConfigured;
- (unsigned int)timestamp;
- (BOOL)tlsConfigured;
- (unsigned int)tlsMilliseconds;
- (unsigned int)trafficClass;
- (BOOL)triggeredPath;
- (BOOL)usedFallback;
- (int)usedProxyType;
- (id)usedProxyTypeAsString:(int)arg1;
- (BOOL)weakFallback;
- (void)writeTo:(id)arg1;

@end