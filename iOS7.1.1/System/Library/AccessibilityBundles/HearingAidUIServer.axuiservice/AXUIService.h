/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AXUIService <NSObject>
@optional
+(id)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned long long)arg1;
+(id)possibleRequiredEntitlementsForProcessingMessageWithIdentifier:(unsigned long long)arg1;
-(void)serviceWasFullyInitialized;
-(void)processInitializationMessage:(id)arg1;
-(bool)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned long long)arg1;
-(void)processMessageAsynchronously:(id)arg1 withIdentifier:(unsigned long long)arg2 completion:(/*^block*/ id)arg3;
-(id)accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg1;
-(bool)messageWithIdentifierRequiresWritingBlock:(unsigned long long)arg1;
-(void)connectionWithClientWillBeInterrupted;

@required
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 error:(id*)arg3;
@end

