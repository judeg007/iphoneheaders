/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPattern.h>

@interface OADPresetPattern : OADPattern {

	int mType;
	bool mIsTypeOverridden;

}
+(id)defaultProperties;
+(id)nameForPresetPatternType:(int)arg1 ;
+(id)namedBitmapDataForPresetPatternType:(int)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithDefaults;
-(bool)isTypeOverridden;
@end

