/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADCommandCenterRequestDelegate <NSObject>
@required
-(void)adRequestDidFinish;
-(void)adRequestDidFailWithError:(id)arg1 requestClass:(id)arg2;
-(void)adRequestRequestedDismissAssistant;
-(void)adRequestDidReceiveCommand:(id)arg1 reply:(/*^block*/ id)arg2;
@end

