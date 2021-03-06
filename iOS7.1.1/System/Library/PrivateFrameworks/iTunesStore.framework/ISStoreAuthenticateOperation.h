/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/SSAuthenticateRequestDelegate.h>

@class NSNumber, SSMutableAuthenticationContext, SSAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {

	NSNumber* _authenticatedDSID;
	SSMutableAuthenticationContext* _authenticationContext;

}

@property (readonly) SSAuthenticationContext * authenticationContext; 
-(id)uniqueKey;
-(void)dealloc;
-(void)run;
-(id)_authenticatedDSID;
-(void)_handleAuthenticateResponse:(id)arg1 ;
-(void)_setAuthenticatedDSID:(id)arg1 ;
-(id)authenticationContext;
-(id)authenticatedAccountDSID;
-(id)initWithAuthenticationContext:(id)arg1 ;
@end

