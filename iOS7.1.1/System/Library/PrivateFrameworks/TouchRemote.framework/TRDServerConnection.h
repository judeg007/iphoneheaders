/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRTCPConnection.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, TRDBrowser, TRService;

@interface TRDServerConnection : TRTCPConnection {

	NSObject<OS_dispatch_queue>* _accessQueue;
	NSMutableArray* _authorizationCompletionHandlers;
	bool _authorized;
	TRDBrowser* _browser;
	NSObject<OS_dispatch_queue>* _packetEventQueue;
	TRService* _service;

}

@property (nonatomic,readonly) TRService * service;              //@synthesize service=_service - In the implementation block
-(id)service;
-(void)dealloc;
-(void)close;
-(void).cxx_destruct;
-(void)_handleReceivedPacketEvent:(id)arg1 ;
-(id)_initWithUniqueID:(int)arg1 connectionStream:(id)arg2 service:(id)arg3 browser:(id)arg4 ;
-(void)_browserDidRemoveServiceNotification:(id)arg1 ;
@end

