/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:34:43 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSDate, NSError, NSURL, NSURLConnection, NSURLResponse, NSMutableData, NSMutableArray, NSNumber;

@interface APSConfiguration : NSObject {

	NSString* _name;
	NSDictionary* _plist;
	NSDate* _expiry;
	NSDate* _fetchDate;
	NSError* _loadingError;
	BOOL _isLoaded;
	BOOL _hasValidSignature;
	BOOL _isLoadBalanced;
	NSURL* _url;
	NSURLConnection* _urlConnection;
	NSURLResponse* _urlResponse;
	NSMutableData* _urlData;
	NSMutableArray* _pendingCompletionBlocks;

}

@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) unsigned serverCount; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) NSNumber * numberOfCriticalMessageKeepAlivesBeforeDisconnecting; 
@property (nonatomic,readonly) NSNumber * criticalMessageKeepAliveTimerDuration; 
@property (nonatomic,readonly) NSNumber * criticalMessageTimeout; 
@property (nonatomic,readonly) NSNumber * wwanTrackedLinkQualityTimeInterval; 
@property (nonatomic,readonly) NSNumber * wwanTrackedLinkQualityOffTransitions; 
@property (nonatomic,readonly) NSNumber * awdSlowReceiveThreshold; 
@property (nonatomic,readonly) NSNumber * activeInterval; 
@property (nonatomic,readonly) NSNumber * forcedShortTimeoutInterval; 
@property (nonatomic,readonly) NSNumber * costDrivenDualChannelAttempts; 
@property (nonatomic,readonly) NSNumber * piggybackDualChannelAttempts; 
@property (nonatomic,readonly) NSNumber * disableCostDrivenDualChannelAttempts; 
@property (nonatomic,copy) NSDate * expiry;                                                                  //@synthesize expiry=_expiry - In the implementation block
@property (nonatomic,copy) NSDate * fetchDate;                                                               //@synthesize fetchDate=_fetchDate - In the implementation block
@property (assign,nonatomic) BOOL hasValidSignature;                                                         //@synthesize hasValidSignature=_hasValidSignature - In the implementation block
+(void)loadConfigurationForEnvironment:(id)arg1 block:(/*^block*/ id)arg2 ;
+(id)_onQueue_configurationForEnvironment:(id)arg1 ;
+(id)configurationForEnvironment:(id)arg1 ;
+(void)invalidateConfigurationForEnvironment:(id)arg1 ;
+(void)initialize;
-(id)initWithEnvironment:(id)arg1 ;
-(id)disableCostDrivenDualChannelAttempts;
-(id)piggybackDualChannelAttempts;
-(id)costDrivenDualChannelAttempts;
-(id)numberOfCriticalMessageKeepAlivesBeforeDisconnecting;
-(id)criticalMessageKeepAliveTimerDuration;
-(id)criticalMessageTimeout;
-(id)forcedShortTimeoutInterval;
-(id)awdSlowReceiveThreshold;
-(unsigned)serverCount;
-(void)_callCompletionBlocksWithError:(id)arg1 ;
-(void)_finishLoadWithResponse:(id)arg1 data:(id)arg2 ;
-(id)pendingCompletionBocks;
-(id)wwanTrackedLinkQualityTimeInterval;
-(id)wwanTrackedLinkQualityOffTransitions;
-(id)activeInterval;
-(BOOL)_isLoaded;
-(id)fetchDate;
-(void)setFetchDate:(id)arg1 ;
-(void)setExpiry:(id)arg1 ;
-(BOOL)hasValidSignature;
-(void)setHasValidSignature:(BOOL)arg1 ;
-(BOOL)_isExpired;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(int)status;
-(id)expiry;
-(void)addCompletionBlock:(/*^block*/ id)arg1 ;
-(id)hostname;
-(void)_failWithError:(id)arg1 ;
@end

