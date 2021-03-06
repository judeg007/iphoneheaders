/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:16:41 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <calaccessd/calaccessd-Structs.h>
#import <calaccessd/ClientConnectionDelegate.h>

@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, BirthdayCalendarManager, LocalAttachmentCleanUpSupport, NSLock;

@interface CADServer : NSObject <ClientConnectionDelegate> {

	BOOL _running;
	unsigned _serverPort;
	CFDictionaryRef _connectionMap;
	NSObject<OS_xpc_object>* _xpcConnection;
	NSObject<OS_dispatch_queue>* _xpcQueue;
	BirthdayCalendarManager* _birthdayManager;
	LocalAttachmentCleanUpSupport* _localAttachmentCleanupManager;
	NSLock* _connectionLock;
	NSObject<OS_dispatch_source>* _shutdownTimer;
	BOOL _keepAlive;
	NSObject<OS_dispatch_queue>* _notificationQueue;
	int _taskTransactionCount;

}

@property (assign,nonatomic) BOOL keepAlive;              //@synthesize keepAlive=_keepAlive - In the implementation block
+(id)server;
-(void)rebuildBirthdays;
-(void)dumpState;
-(id)clientConnectionFromPort:(unsigned)arg1 ;
-(void)clientConnectionDied:(id)arg1 ;
-(void)addClientConnection:(id)arg1 forPort:(unsigned)arg2 ;
-(BOOL)_isProtectedDataAvailable;
-(void)_handleXPCConnection:(id)arg1 ;
-(void)_registerForTimeChangeNotifications;
-(void)_registerForIdentityOrphanCleanup;
-(void)_beginTaskTransaction;
-(void)_updateOccurrenceCacheTimeZone;
-(BOOL)_trimAndExtendOccurrenceCache;
-(void)_endTaskTransaction;
-(void)_cancelShutdownTimer;
-(void)_startShutdownTimerIfNoConnections;
-(void)shutdownTimerExpired;
-(void)removeClientConnectionForPort:(unsigned)arg1 ;
-(void)_protectedDataWillBecomeUnavailable;
-(void)_protectedDataDidBecomeAvailable;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)setKeepAlive:(BOOL)arg1 ;
-(BOOL)keepAlive;
-(void)shutdown;
@end

