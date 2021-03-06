/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, XPCClientConnectionDelegate;
@class NSString, NSObject;

@interface XPCClientConnection : NSObject {

	NSString* _serviceName;
	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _queue;
	<XPCClientConnectionDelegate>* _delegate;

}

@property (nonatomic,readonly) <XPCClientConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)debugDescription;
-(id)delegate;
-(void).cxx_destruct;
-(void)shutDownCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_handleIncomingMessage:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 delegate:(id)arg2 ;
-(void)_handleConnectionEvent:(id)arg1 ;
-(void)_reallySendMessage:(id)arg1 handler:(/*^block*/ id)arg2 sequence:(unsigned long long)arg3 retryCount:(unsigned long long)arg4 ;
-(void)sendMessage:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
@end

