/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;
@class NSMutableDictionary, NSObject, NSCountedSet, NSMutableSet;

@interface Daemon : NSObject {

	BOOL _aliveForOperationQueues;
	NSMutableDictionary* _backgroundTaskObservers;
	NSMutableDictionary* _cachedObjects;
	int _dialogCount;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSObject<OS_dispatch_source>* _jetsamSource;
	NSCountedSet* _keepAliveAssertions;
	NSMutableSet* _keepAliveOperationQueues;
	NSObject<OS_xpc_object>* _satisfiedWakeRequests;

}
+(id)daemon;
-(void)_initBackgroundTaskAgent;
-(void)takeKeepAliveAssertion:(id)arg1 ;
-(void)releaseKeepAliveAssertion:(id)arg1 ;
-(void)keepAliveWithAssertion:(id)arg1 block:(/*^block*/ id)arg2 ;
-(void)addKeepAliveOperationQueue:(id)arg1 ;
-(void)removeKeepAliveOperationQueue:(id)arg1 ;
-(id)addObserverForBackgroundTaskWithIdentifierPrefix:(id)arg1 withBlock:(/*^block*/ id)arg2 ;
-(void)addBackgroundTaskWithRequest:(id)arg1 ;
-(void)_warmUpSharedURLCache;
-(void)_networkUsageStateChangeNotification:(id)arg1 ;
-(void)_operationCountChanged:(id)arg1 ;
-(void)_reloadOperationKeepAliveTransaction;
-(void)_expireCachedObjectForKey:(id)arg1 ;
-(void)_releaseKeepAliveAssertion:(id)arg1 ;
-(BOOL)hasBackgroundTaskWithIdentifier:(id)arg1 ;
-(void)_setGlobalState;
-(void)_observeNotifications;
-(void)_getShowingDialogWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_reloadWiFiManager;
-(void)_handleWakeWithName:(const char*)arg1 job:(id)arg2 ;
-(void)cacheObject:(id)arg1 withKey:(id)arg2 expirationInterval:(double)arg3 ;
-(void)cancelBackgroundTaskWithIdentifier:(id)arg1 ;
-(void)removeBackgroundTaskObserver:(id)arg1 ;
-(void)removeCachedObjectForKey:(id)arg1 ;
-(void)scheduleDuetBlockedRetry;
-(void)dealloc;
-(id)init;
-(void)start;
-(id)cachedObjectForKey:(id)arg1 ;
-(void)beginShowingDialog;
-(void)endShowingDialog;
@end
