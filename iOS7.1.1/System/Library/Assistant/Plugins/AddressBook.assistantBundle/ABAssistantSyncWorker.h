/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/AFSyncHandler.h>

@protocol ABAssistantSyncDelegate;
@interface ABAssistantSyncWorker : NSObject <AFSyncHandler> {

	<ABAssistantSyncDelegate>* _delegate;
	CFArrayRef _allRecords;
	CFArrayRef _changedIDs;
	CFArrayRef _changeTypes;
	CFArrayRef _sequenceNumbers;
	long long _syncIndex;
	long long _syncCount;
	bool _databaseNotAvailable;

}
-(void)syncDidEnd;
-(void)clearSyncCache;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(id)getCurrentValidity;
-(void).cxx_destruct;
-(id)initWithDelegate:(id)arg1 ;
@end

