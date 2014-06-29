/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString;

@interface LoadMatchStatusOperation : ISOperation {

	NSNumber* _accountID;
	unsigned _matchStatus;
	NSString* _userAgent;

}

@property (copy) NSString * userAgent; 
@property (readonly) unsigned matchStatus; 
-(id)_newMatchStatusOperationWithURLBag:(id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(unsigned)matchStatus;
-(void)setUserAgent:(id)arg1 ;
-(id)userAgent;
@end
