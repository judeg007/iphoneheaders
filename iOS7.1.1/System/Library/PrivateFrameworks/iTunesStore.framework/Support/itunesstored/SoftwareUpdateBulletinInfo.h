/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:12 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface SoftwareUpdateBulletinInfo : NSObject {

	NSMutableArray* _readTitles;
	NSMutableArray* _unreadTitles;

}

@property (nonatomic,readonly) BOOL hasUnreadTitles; 
-(void)addReadTitle:(id)arg1 ;
-(void)addUnreadTitle:(id)arg1 ;
-(id)newBulletin;
-(BOOL)hasUnreadTitles;
-(void)dealloc;
-(id)description;
@end

