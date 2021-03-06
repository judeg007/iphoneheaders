/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDText, WDCharacterRun, NSDate, NSString;

@interface WDAnnotation : WDRun {

	int mType;
	WDText* mText;
	WDCharacterRun* mReference;
	bool mReferencePopertiesFixed;
	NSDate* mDate;
	NSString* mOwner;
	WDAnnotation* mOtherEndOfRangedAnnotation;

}
-(void)dealloc;
-(id)date;
-(id)text;
-(void)setDate:(id)arg1 ;
-(id)reference;
-(int)runType;
-(bool)referencePropertiesFixed;
-(void)setReferencePropertiesFixed;
-(id)initWithParagraph:(id)arg1 type:(int)arg2 ;
-(int)annotationType;
-(id)owner;
-(id)otherEndOfRangedAnnotation;
-(void)setOtherEndOfRangedAnnotation:(id)arg1 ;
-(void)setOwner:(id)arg1 ;
@end

