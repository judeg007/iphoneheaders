/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, NSNumber, CIColor;

@interface CIRadialGradient : CIFilter {

	CIVector* inputCenter;
	NSNumber* inputRadius0;
	NSNumber* inputRadius1;
	CIColor* inputColor0;
	CIColor* inputColor1;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius0; 
@property (nonatomic,retain) NSNumber * inputRadius1; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)_kernel;
-(void)setInputColor0:(id)arg1 ;
-(void)setInputColor1:(id)arg1 ;
-(id)inputColor0;
-(id)inputColor1;
-(void)setInputCenter:(id)arg1 ;
-(id)inputCenter;
-(void)setInputRadius0:(id)arg1 ;
-(void)setInputRadius1:(id)arg1 ;
-(id)inputRadius0;
-(id)inputRadius1;
@end

