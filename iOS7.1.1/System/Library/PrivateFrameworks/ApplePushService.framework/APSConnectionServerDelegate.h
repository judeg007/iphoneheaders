/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:34:43 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol APSConnectionServerDelegate <NSObject>
@required
-(void)connectionWasClosed:(id)arg1;
-(void)connection:(id)arg1 handleAckIncomingMessageWithGuid:(id)arg2;
-(void)connectionTopicsChanged:(id)arg1;
-(BOOL)connectionDelegateHasIdentity:(id)arg1;
-(BOOL)connectionDelegateIsConnectedToService:(id)arg1;
-(void)connectionChangedCriticalReliability:(id)arg1;
-(void)connection:(id)arg1 didReceiveOutgoingMessageToSend:(id)arg2;
-(void)connection:(id)arg1 didReceiveCancellationForOutgoingMessageWithID:(unsigned)arg2;
-(void)connection:(id)arg1 didReceiveFakeMessageToSend:(id)arg2;
-(void)connection:(id)arg1 didRequestPublicTokenForTopic:(id)arg2 identifier:(id)arg3;
-(void)connection:(id)arg1 didInvalidatePublicTokenForTopic:(id)arg2 identifier:(id)arg3;
@end

