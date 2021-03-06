/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OABShapeBaseManager.h>
#import <OfficeImport/OABPropertiesManager.h>

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {

	EshShape* mShape;

}
-(id)initWithShape:(EshShape*)arg1 ;
-(bool)isStroked;
-(bool)isFilled;
-(bool)isFillOK;
-(bool)isStrokeOK;
-(bool)isShadowOK;
-(bool)isTextPath;
-(id)textPathUnicodeString;
-(int)textPathTextAlignment;
-(int)textPathFontSize;
-(id)textPathFontFamily;
-(bool)textPathBold;
-(bool)textPathItalic;
-(bool)textPathUnderline;
-(bool)textPathSmallcaps;
-(bool)textPathStrikethrough;
-(bool)isShadowed;
-(id)initWithShape:(EshShape*)arg1 masterShape:(EshShape*)arg2 ;
-(bool)hidden;
@end

