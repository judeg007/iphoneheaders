/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CITriangleKaleidoscope : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	NSNumber* inputSize;
	NSNumber* inputRotation;
	NSNumber* inputDecay;
	CIImage* _decayImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputRotation; 
@property (nonatomic,retain) NSNumber * inputDecay; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)inputPoint;
-(void)setInputRotation:(id)arg1 ;
-(void)setInputSize:(id)arg1 ;
-(void)setInputDecay:(id)arg1 ;
-(id)_geomKernel;
-(id)_colorKernel;
-(id)inputSize;
-(id)inputRotation;
-(id)inputDecay;
-(void)dealloc;
-(void)setInputPoint:(id)arg1 ;
@end

