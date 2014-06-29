/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectPunchOut.h>
#import <AddressBook/ABAssistantCommand.h>

@interface ABAssistantCommandPunchOut : SADomainObjectPunchOut <ABAssistantCommand> {

	void* _addressBook;

}

@property (assign,nonatomic) void* addressBook; 
-(id)_displayIdentifier;
-(id)_abURLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3 ;
-(id)_punchOutWithServiceHelper:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/ id)arg1 serviceHelper:(id)arg2 ;
-(id)validateIdentifier;
-(id)_validate;
-(void)dealloc;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
@end
