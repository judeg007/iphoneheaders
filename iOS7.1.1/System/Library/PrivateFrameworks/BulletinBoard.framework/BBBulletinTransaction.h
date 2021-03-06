/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BBBulletinTransaction : NSObject {

	NSString* _bulletinID;
	unsigned long long _transactionID;

}

@property (nonatomic,readonly) NSString * bulletinID;                         //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,readonly) unsigned long long transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
+(id)transactionWithBulletinID:(id)arg1 ;
-(void)dealloc;
-(id)bulletinID;
-(unsigned long long)transactionID;
-(unsigned long long)incrementTransactionID;
-(id)initWithBulletinID:(id)arg1 ;
@end

