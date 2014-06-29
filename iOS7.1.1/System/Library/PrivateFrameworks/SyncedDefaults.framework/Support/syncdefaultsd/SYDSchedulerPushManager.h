/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:16:10 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SYDSchedulerPushManager : NSObject {

	NSString* _environment;
	NSString* _user;
	double _refreshInterval;

}

@property (nonatomic,readonly) NSString * environment; 
@property (nonatomic,readonly) NSString * user;                     //@synthesize user=_user - In the implementation block
+(void)registerGlobalPersistentState:(id)arg1 ;
+(id)globalPersistentState;
+(void)_registerManager:(id)arg1 ;
+(void)_managerDidChange:(id)arg1 ;
+(void)_unregisterManager:(id)arg1 ;
-(id)persistentState;
-(id)initWithPersistentState:(id)arg1 ;
-(void)setEnvironment:(id)arg1 forUser:(id)arg2 refreshInterval:(double)arg3 ;
-(double)nextUpdateInterval;
-(void)resetUpdates;
-(void)didUpdateTokenOnServer:(id)arg1 ;
-(void)_managerNeedsUpdateOnServer:(id)arg1 ;
-(void)_managerDidReceivePushNotification:(id)arg1 ;
-(id)user;
-(void)dealloc;
-(id)environment;
-(id)publicToken;
-(double)refreshInterval;
-(void)shutdown;
-(BOOL)needsUpdate;
@end
