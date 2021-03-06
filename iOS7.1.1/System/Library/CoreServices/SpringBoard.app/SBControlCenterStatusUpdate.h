/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SBControlCenterStatusUpdate : NSObject {

	NSString* _reason;
	NSArray* _statusStrings;
	int _type;

}

@property (nonatomic,copy) NSString * reason;                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * statusStrings;              //@synthesize statusStrings=_statusStrings - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
+(id)statusUpdateWithString:(id)arg1 reason:(id)arg2 ;
-(id)statusStrings;
-(id)popStatusString;
-(void)addStatusString:(id)arg1 ;
-(void)setStatusStrings:(id)arg1 ;
-(void)setReason:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)reason;
@end

