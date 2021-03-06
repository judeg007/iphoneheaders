/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableSet, NSMutableArray, NSObject;

@interface ADAdSheetProxy : NSObject {

	bool _serviceLaunchThrottled;
	int _bootstrapState;
	int _classicUnavailableToken;
	double _lastTermination;
	double _lastBootstrap;
	unsigned long long _adSheetBootstrapAttempts;
	NSXPCConnection* _adSheetConnection;
	NSMutableSet* _connectionAssertions;
	NSMutableArray* _performWhenConnectedBlocks;
	NSObject<OS_dispatch_queue>* _proxyQueue;

}

@property (nonatomic,readonly) bool connectionAvailable; 
@property (assign,nonatomic) bool serviceLaunchThrottled;                              //@synthesize serviceLaunchThrottled=_serviceLaunchThrottled - In the implementation block
@property (nonatomic,readonly) <ADSSession_RPC> * rpcProxy; 
@property (assign,nonatomic) int bootstrapState;                                       //@synthesize bootstrapState=_bootstrapState - In the implementation block
@property (assign,nonatomic) double lastTermination;                                   //@synthesize lastTermination=_lastTermination - In the implementation block
@property (assign,nonatomic) double lastBootstrap;                                     //@synthesize lastBootstrap=_lastBootstrap - In the implementation block
@property (assign,nonatomic) unsigned long long adSheetBootstrapAttempts;              //@synthesize adSheetBootstrapAttempts=_adSheetBootstrapAttempts - In the implementation block
@property (nonatomic,retain) NSXPCConnection * adSheetConnection;                      //@synthesize adSheetConnection=_adSheetConnection - In the implementation block
@property (assign,nonatomic) int classicUnavailableToken;                              //@synthesize classicUnavailableToken=_classicUnavailableToken - In the implementation block
@property (nonatomic,retain) NSMutableSet * connectionAssertions;                      //@synthesize connectionAssertions=_connectionAssertions - In the implementation block
@property (nonatomic,retain) NSMutableArray * performWhenConnectedBlocks;              //@synthesize performWhenConnectedBlocks=_performWhenConnectedBlocks - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * proxyQueue;               //@synthesize proxyQueue=_proxyQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)resetAdSheetThrottle;
-(id)rpcProxy;
-(void)takeConnectionAssertion:(id)arg1 ;
-(void)releaseConnectionAssertion:(id)arg1 ;
-(void)performWhenConnected:(/*^block*/ id)arg1 ;
-(void)_considerConnectingToAdSheet;
-(void)_considerLaunchingAdSheet;
-(id)proxyQueue;
-(id)connectionAssertions;
-(id)adSheetConnection;
-(bool)serviceLaunchThrottled;
-(id)performWhenConnectedBlocks;
-(int)bootstrapState;
-(void)setBootstrapState:(int)arg1 ;
-(unsigned long long)adSheetBootstrapAttempts;
-(void)setServiceLaunchThrottled:(bool)arg1 ;
-(void)setAdSheetBootstrapAttempts:(unsigned long long)arg1 ;
-(void)setLastTermination:(double)arg1 ;
-(void)setAdSheetConnection:(id)arg1 ;
-(void)_adSheetConnectionLost;
-(void)setLastBootstrap:(double)arg1 ;
-(double)lastBootstrap;
-(bool)connectionAvailable;
-(double)lastTermination;
-(int)classicUnavailableToken;
-(void)setClassicUnavailableToken:(int)arg1 ;
-(void)setConnectionAssertions:(id)arg1 ;
-(void)setPerformWhenConnectedBlocks:(id)arg1 ;
@end

