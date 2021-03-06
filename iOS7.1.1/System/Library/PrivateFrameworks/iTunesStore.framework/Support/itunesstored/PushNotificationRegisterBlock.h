/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface PushNotificationRegisterBlock : NSObject {

	NSNumber* _accountIdentifier;
	/*^block*/ id _block;
	NSString* _environmentName;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) id block;                                  //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) NSString * environmentName;                //@synthesize environmentName=_environmentName - In the implementation block
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(/*^block*/ id)block;
-(void)setBlock:(/*^block*/ id)arg1 ;
-(id)accountIdentifier;
-(void)setEnvironmentName:(id)arg1 ;
-(id)environmentName;
@end

