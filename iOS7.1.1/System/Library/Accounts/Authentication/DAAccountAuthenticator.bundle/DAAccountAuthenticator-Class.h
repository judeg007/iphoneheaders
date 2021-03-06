/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Accounts/Authentication/DAAccountAuthenticator.bundle/DAAccountAuthenticator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAAccountAuthenticator/DAAccountAuthenticator-Structs.h>
#import <AccountsDaemon/ACDAccountAuthenticationPlugin.h>
#import <DAAccountAuthenticator/DAValidityCheckConsumer.h>

@class NSMutableDictionary;

@interface DAAccountAuthenticator : NSObject <ACDAccountAuthenticationPlugin, DAValidityCheckConsumer> {

	NSMutableDictionary* _accountIDToVerificationHandler;
	NSMutableDictionary* _accountIDToAccount;

}
-(id)appIdsForPromptingForDAAccount:(id)arg1 ;
-(void)_handlePasswordNotification:(CFUserNotificationRef)arg1 response:(unsigned long long)arg2 callback:(/*^block*/ id)arg3 account:(id)arg4 accountStore:(id)arg5 resetAuthenticatedOnAlertFailure:(bool)arg6 ;
-(void)parkBackgroundThread:(id)arg1 ;
-(void)invokeAndReleaseBlock:(/*^block*/ id)arg1 ;
-(id)backgroundThread;
-(id)init;
-(void).cxx_destruct;
-(bool)isPushSupportedForAccount:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)account:(id)arg1 isValid:(bool)arg2 validationError:(id)arg3 ;
@end

