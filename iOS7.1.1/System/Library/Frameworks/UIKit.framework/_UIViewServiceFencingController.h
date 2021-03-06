/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray, NSTimer;

@interface _UIViewServiceFencingController : NSObject {

	int _lock;
	NSMutableSet* _pendingFenceSendRights;
	NSMutableArray* _resumeActions;
	unsigned long long _expectedParticipatingFencingProxyCount;
	NSTimer* _fencingControlTimeoutTimer;

}
+(id)activeFencePort;
-(void)dealloc;
-(id)init;
-(void)fencingControlProxy:(id)arg1 didBeginFencingWithSendRight:(id)arg2 expectedParticipatingFencingProxyCount:(unsigned long long)arg3 ;
-(void)fencingControlProxy:(id)arg1 didEndFencingWithSendRight:(id)arg2 ;
-(void)_fencingControlTimedOut;
@end

