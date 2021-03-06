/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSDictionary, NSData, NSDate, NSString, NSArray, NSMutableArray;

@interface IDSBaseMessage : NSObject <NSCopying> {

	bool _forceCellular;
	bool _usingOutgoingPush;
	bool _wantsResponse;
	bool _wantsBinaryPush;
	bool _wantsIntegerUniqueIDs;
	bool _highPriority;
	int _timeoutRetries;
	id _context;
	NSDictionary* _clientInfo;
	NSData* _serviceData;
	unsigned long long _uniqueID;
	NSDictionary* _userInfo;
	NSDate* _creationDate;
	NSString* _topic;
	double _timeout;
	/*^block*/ id _completionBlock;
	/*^block*/ id _deliveryAcknowledgementBlock;
	NSDictionary* _cachedBody;
	NSString* _dsAuthID;
	double _timeSent;
	NSString* _dataUsageBundleIdentifier;
	NSDictionary* _responseAlert;

}

@property (readonly) bool isValidMessage; 
@property (readonly) bool payloadCanBeLogged; 
@property (assign) unsigned long long uniqueID;                                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (readonly) NSString * uniqueIDString; 
@property (readonly) NSString * dataUsageBundleIdentifier;                                 //@synthesize dataUsageBundleIdentifier=_dataUsageBundleIdentifier - In the implementation block
@property (assign) double timeout;                                                         //@synthesize timeout=_timeout - In the implementation block
@property (assign) double timeSent;                                                        //@synthesize timeSent=_timeSent - In the implementation block
@property (copy) id completionBlock;                                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (copy) id deliveryAcknowledgementBlock;                                          //@synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock - In the implementation block
@property (readonly) NSString * bagKey; 
@property (retain) NSString * topic;                                                       //@synthesize topic=_topic - In the implementation block
@property (readonly) long long command; 
@property (readonly) long long responseCommand; 
@property (assign) bool forceCellular;                                                     //@synthesize forceCellular=_forceCellular - In the implementation block
@property (assign) bool highPriority;                                                      //@synthesize highPriority=_highPriority - In the implementation block
@property (readonly) bool wantsSignature; 
@property (readonly) bool wantsBodySignature; 
@property (readonly) bool wantsCFNetworkTimeout; 
@property (readonly) bool wantsManagedRetries; 
@property (readonly) bool wantsExtraTimeoutRetry; 
@property (readonly) int maxTimeoutRetries; 
@property (readonly) bool wantsHTTPHeaders; 
@property (readonly) bool wantsCompressedBody; 
@property (assign) bool wantsBinaryPush;                                                   //@synthesize wantsBinaryPush=_wantsBinaryPush - In the implementation block
@property (assign) bool wantsIntegerUniqueIDs;                                             //@synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs - In the implementation block
@property (readonly) bool wantsJSONBody; 
@property (readonly) bool wantsBagKey; 
@property (readonly) bool wantsUserAgentInHeaders; 
@property (readonly) bool wantsHTTPGet; 
@property (readonly) bool wantsAPSRetries; 
@property (assign) bool wantsResponse;                                                     //@synthesize wantsResponse=_wantsResponse - In the implementation block
@property (assign) int timeoutRetries;                                                     //@synthesize timeoutRetries=_timeoutRetries - In the implementation block
@property (readonly) bool ignoresNetworkConnectivity; 
@property (readonly) bool wantsCustomRetryInterval; 
@property (readonly) double customRetryInterval; 
@property (readonly) NSArray * requiredKeys; 
@property (copy) NSDictionary * responseAlertInfo;                                         //@synthesize responseAlert=_responseAlert - In the implementation block
@property (readonly) NSDictionary * messageBody; 
@property (readonly) NSDictionary * messageBodyUsingCache; 
@property (readonly) NSDictionary * additionalMessageHeaders; 
@property (readonly) NSDictionary * additionalQueryStringParameters; 
@property (readonly) NSDictionary * additionalInternalHeaders; 
@property (readonly) NSDictionary * additionalMessageHeadersForOutgoingPush; 
@property (readonly) NSDictionary * nonStandardMessageHeadersForOutgoingPush; 
@property (assign,nonatomic) SecKeyRef pushPrivateKey; 
@property (assign,nonatomic) SecKeyRef pushPublicKey; 
@property (nonatomic,copy) NSData * pushCertificate; 
@property (nonatomic,copy) NSData * pushToken; 
@property (nonatomic,copy) NSMutableArray * certDataArray; 
@property (nonatomic,copy) NSMutableArray * publicKeyArray; 
@property (nonatomic,copy) NSMutableArray * privateKeyArray; 
@property (nonatomic,copy) NSMutableArray * userIDArray; 
@property (nonatomic,readonly) SecKeyRef identityPrivateKey; 
@property (nonatomic,readonly) SecKeyRef identityPublicKey; 
@property (nonatomic,readonly) NSData * IDCertificate; 
@property (setter=setDSAuthID:,nonatomic,copy) NSString * dsAuthID;                        //@synthesize dsAuthID=_dsAuthID - In the implementation block
@property (copy) NSData * serviceData;                                                     //@synthesize serviceData=_serviceData - In the implementation block
@property (copy) NSDictionary * clientInfo;                                                //@synthesize clientInfo=_clientInfo - In the implementation block
@property (readonly) NSString * userAgentHeaderString; 
@property (copy) NSDictionary * userInfo;                                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) NSDate * creationDate;                                                  //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) id context;                                                             //@synthesize context=_context - In the implementation block
@property (setter=_setUsingOutgoingPush:) bool _usingOutgoingPush;                         //@synthesize usingOutgoingPush=_usingOutgoingPush - In the implementation block
@property (setter=_setCachedBody:,retain) NSDictionary * _cachedBody;                      //@synthesize cachedBody=_cachedBody - In the implementation block
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setPushToken:(id)arg1 ;
-(id)clientInfo;
-(id)bagKey;
-(id)pushToken;
-(long long)command;
-(void)setClientInfo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)userInfo;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)completionBlock;
-(void)setUserInfo:(id)arg1 ;
-(unsigned long long)uniqueID;
-(void)setUniqueID:(unsigned long long)arg1 ;
-(id)IDCertificate;
-(id)certDataArray;
-(id)publicKeyArray;
-(id)privateKeyArray;
-(id)additionalInternalHeaders;
-(bool)wantsCFNetworkTimeout;
-(bool)isValidMessage;
-(int)timeoutRetries;
-(void)setTimeoutRetries:(int)arg1 ;
-(void)setTimeSent:(double)arg1 ;
-(id)uniqueIDString;
-(bool)wantsCustomRetryInterval;
-(double)customRetryInterval;
-(bool)wantsAPSRetries;
-(bool)highPriority;
-(bool)wantsUserAgentInHeaders;
-(id)userAgentHeaderString;
-(bool)wantsIntegerUniqueIDs;
-(void)_setUsingOutgoingPush:(bool)arg1 ;
-(bool)wantsResponse;
-(void)setPublicKeyArray:(id)arg1 ;
-(void)setPrivateKeyArray:(id)arg1 ;
-(void)setCertDataArray:(id)arg1 ;
-(void)setUserIDArray:(id)arg1 ;
-(bool)_usingOutgoingPush;
-(void)setDSAuthID:(id)arg1 ;
-(id)responseAlertInfo;
-(void)setPushPrivateKey:(SecKeyRef)arg1 ;
-(void)setPushCertificate:(id)arg1 ;
-(SecKeyRef)identityPrivateKey;
-(SecKeyRef)identityPublicKey;
-(id)userIDArray;
-(id)dsAuthID;
-(void)setResponseAlertInfo:(id)arg1 ;
-(bool)hasRequiredKeys:(id*)arg1 ;
-(bool)payloadCanBeLogged;
-(id)additionalMessageHeadersForOutgoingPush;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(bool)wantsExtraTimeoutRetry;
-(int)maxTimeoutRetries;
-(bool)wantsSignature;
-(bool)wantsBodySignature;
-(void)setTopic:(id)arg1 ;
-(void)setWantsResponse:(bool)arg1 ;
-(id)pushCertificate;
-(SecKeyRef)pushPrivateKey;
-(SecKeyRef)pushPublicKey;
-(void)setPushPublicKey:(SecKeyRef)arg1 ;
-(bool)wantsBagKey;
-(bool)wantsHTTPHeaders;
-(bool)wantsCompressedBody;
-(bool)wantsBinaryPush;
-(long long)responseCommand;
-(id)nonStandardMessageHeadersForOutgoingPush;
-(bool)wantsHTTPGet;
-(/*^block*/ id)deliveryAcknowledgementBlock;
-(void)setDeliveryAcknowledgementBlock:(/*^block*/ id)arg1 ;
-(id)topic;
-(id)messageBodyUsingCache;
-(bool)forceCellular;
-(void)setForceCellular:(bool)arg1 ;
-(id)additionalQueryStringParameters;
-(bool)wantsManagedRetries;
-(id)dataUsageBundleIdentifier;
-(void)handleResponseHeaders:(id)arg1 ;
-(void)setHighPriority:(bool)arg1 ;
-(void)setWantsIntegerUniqueIDs:(bool)arg1 ;
-(void)setWantsBinaryPush:(bool)arg1 ;
-(void)setServiceData:(id)arg1 ;
-(void)_setCachedBody:(id)arg1 ;
-(id)serviceData;
-(void)_cacheBody;
-(bool)wantsJSONBody;
-(id)_cachedBody;
-(bool)ignoresNetworkConnectivity;
-(double)timeSent;
-(id)messageBody;
-(id)creationDate;
-(void)setCreationDate:(id)arg1 ;
-(id)requiredKeys;
@end

