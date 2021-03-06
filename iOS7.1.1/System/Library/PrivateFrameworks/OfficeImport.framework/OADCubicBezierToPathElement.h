/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADCubicBezierToPathElement : OADPathElement {

	OADAdjustPoint mControlPoint1;
	OADAdjustPoint mControlPoint2;
	OADAdjustPoint mToPoint;
	bool mRelative;

}
-(id).cxx_construct;
-(OADAdjustPoint)toPoint;
-(OADAdjustPoint)controlPoint1;
-(OADAdjustPoint)controlPoint2;
-(void)setRelative:(bool)arg1 ;
-(bool)relative;
-(id)initWithControlPoint1:(OADAdjustPoint)arg1 controlPoint2:(OADAdjustPoint)arg2 toPoint:(OADAdjustPoint)arg3 ;
@end

