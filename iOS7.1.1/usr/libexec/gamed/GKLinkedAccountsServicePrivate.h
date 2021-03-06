/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:26 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKLinkedAccountsService.h>
#import <gamed/GKLinkedAccountsServicePrivate.h>

@protocol GKLinkedAccountsServicePrivate <GKLinkedAccountsService>
@required
-(oneway void)connectExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)disconnectExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)notifyAvailableExternalServicesWithHandler:(/*^block*/ id)arg1;
-(oneway void)availableExternalServicesWithHandler:(/*^block*/ id)arg1;
-(oneway void)getAuthTokenForExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2;
@end


@interface GKLinkedAccountsServicePrivate : GKLinkedAccountsService <GKLinkedAccountsServicePrivate>
+(Class)interfaceClass;
+(unsigned long)requiredEntitlements;
-(void)refreshRecommendationsWithHandler:(/*^block*/ id)arg1 ;
-(void)setUserID:(id)arg1 forService:(BOOL)arg2 ;
-(void)addLinkedAccountForService:(BOOL)arg1 userID:(id)arg2 userName:(id)arg3 authToken:(id)arg4 syncContacts:(BOOL)arg5 handler:(/*^block*/ id)arg6 ;
-(void)linkFacebookAccountWithHandler:(/*^block*/ id)arg1 ;
-(void)linkICloudAccountWithHandler:(/*^block*/ id)arg1 ;
-(void)removeLinkedAccountForService:(BOOL)arg1 userID:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(BOOL)isLocalPlayerUnderage;
-(BOOL)permittedToLinkToAccountType:(id)arg1 accountStore:(id)arg2 ;
-(oneway void)connectExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)disconnectExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)notifyAvailableExternalServicesWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)availableExternalServicesWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)getAuthTokenForExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2 ;
@end

