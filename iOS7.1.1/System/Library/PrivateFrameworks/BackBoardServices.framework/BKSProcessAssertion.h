/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, BKSSignal, NSString;

@interface BKSProcessAssertion : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_xpc_object>* _serverConnection;
	bool _valid;
	BKSSignal* _invalidationSignal;
	int _pid;
	NSString* _bundleIdentifier;
	NSString* _name;
	unsigned _flags;
	unsigned _reason;
	/*^block*/ id _invalidationHandler;
	/*^block*/ id _acquisitionHandler;

}

@property (nonatomic,@dynamic,copy) NSString * name; 
@property (nonatomic,@dynamic,readonly) bool valid; 
@property (assign,nonatomic,@dynamic) unsigned flags; 
@property (nonatomic,@dynamic,readonly) unsigned reason; 
@property (nonatomic,@dynamic,copy) id invalidationHandler; 
@property (nonatomic,@dynamic,copy) id acquisitionHandler; 
+(id)NameForReason:(unsigned)arg1 ;
-(/*^block*/ id)invalidationHandler;
-(void)setValid:(bool)arg1 ;
-(void)setReason:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/ id)arg5 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(bool)valid;
-(void)setInvalidationHandler:(/*^block*/ id)arg1 ;
-(unsigned)reason;
-(void)queue_invalidate:(bool)arg1 ;
-(void)setAcquisitionHandler:(/*^block*/ id)arg1 ;
-(void)queue_registerWithServer;
-(void)queue_acquireAssertion;
-(void)queue_updateAssertion;
-(void)queue_notifyAssertionAcquired:(bool)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/ id)arg5 ;
-(/*^block*/ id)acquisitionHandler;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
@end

