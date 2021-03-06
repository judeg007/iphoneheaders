/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SPSearchResult;

@interface SPApplication : NSObject {

	NSString* _displayIdentifier;
	NSString* _displayName;
	NSString* _longDisplayName;

}

@property (nonatomic,retain) NSString * displayIdentifier;                 //@synthesize displayIdentifier=_displayIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * longDisplayName;                   //@synthesize longDisplayName=_longDisplayName - In the implementation block
@property (nonatomic,readonly) SPSearchResult * searchResult; 
-(void)dealloc;
-(id)description;
-(id)displayIdentifier;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(void)setDisplayIdentifier:(id)arg1 ;
-(void)setLongDisplayName:(id)arg1 ;
-(id)searchResult;
-(id)longDisplayName;
@end

