/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface _CIScreenFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputAngle;
	NSNumber* inputWidth;
	NSNumber* inputSharpness;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputSharpness; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputAngle:(id)arg1 ;
-(id)inputAngle;
-(id)_kernel_name;
-(void)setInputCenter:(id)arg1 ;
-(id)inputCenter;
-(void)setInputWidth:(id)arg1 ;
-(void)setInputSharpness:(id)arg1 ;
-(id)inputWidth;
-(id)inputSharpness;
-(id)_kernel_code;
@end
