/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@class NSString, NSArray;

@interface ABNamePredicate : ABPredicate {

	void* _addressBook;
	NSString* _name;
	bool _matchWholeWords;
	bool _matchPersonOrCompanyNamesExclusively;
	bool _matchPreferredName;
	void* _tokenizations;
	CFArrayRef _tokenizationSortKeys;
	NSArray* _groups;
	NSArray* _sources;

}

@property (assign,nonatomic) void* addressBook;                                      //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * sources;                                      //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSArray * groups;                                       //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic) void* source; 
@property (assign,nonatomic) void* group; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (assign,nonatomic) bool matchWholeWords;                                   //@synthesize matchWholeWords=_matchWholeWords - In the implementation block
@property (assign,nonatomic) bool matchPersonOrCompanyNamesExclusively;              //@synthesize matchPersonOrCompanyNamesExclusively=_matchPersonOrCompanyNamesExclusively - In the implementation block
@property (assign,nonatomic) bool matchPreferredName;                                //@synthesize matchPreferredName=_matchPreferredName - In the implementation block
-(id)queryWhereString;
-(void)ab_bindStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(void)setGroups:(id)arg1 ;
-(void)setSources:(id)arg1 ;
-(void*)tokenizations;
-(id)_personNameKeys;
-(id)queryJoinsInCompound:(bool)arg1 ;
-(bool)matchWholeWords;
-(void)setMatchWholeWords:(bool)arg1 ;
-(bool)matchPersonOrCompanyNamesExclusively;
-(void)setMatchPersonOrCompanyNamesExclusively:(bool)arg1 ;
-(bool)matchPreferredName;
-(void)setMatchPreferredName:(bool)arg1 ;
-(id)groups;
-(id)predicateFormat;
-(id)sources;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isValid;
-(void)setName:(id)arg1 ;
-(id)name;
-(void*)source;
-(void)setSource:(void*)arg1 ;
-(void)setGroup:(void*)arg1 ;
-(void*)group;
-(id)accountIdentifier;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
@end

