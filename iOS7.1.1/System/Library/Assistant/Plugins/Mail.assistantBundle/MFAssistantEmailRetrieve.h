/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/Mail.assistantBundle/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectRetrieve.h>
#import <AppleAccount/MSSearchDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableArray, NSObject;

@interface MFAssistantEmailRetrieve : SADomainObjectRetrieve <MSSearchDelegate> {

	NSMutableArray* _results;
	NSObject<OS_dispatch_queue>* _resultsQueue;
	NSObject<OS_dispatch_semaphore>* _searchCompleted;

}
-(void)performWithCompletion:(/*^block*/ id)arg1 ;
-(id)_convertMSEmailToSAEmail:(id)arg1 ;
-(void)_searchFinished:(id)arg1 ;
-(id)_retrieveEmails:(id)arg1 ;
-(id)_validateEmails:(id)arg1 ;
-(void)_populateResults:(id)arg1 ;
-(void)dealloc;
-(bool)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
@end

