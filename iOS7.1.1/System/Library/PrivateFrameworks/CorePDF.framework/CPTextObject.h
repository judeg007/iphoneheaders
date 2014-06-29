/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPTextObject : CPChunk {

	CGPoint anchor;
	bool metricInfoCalculated;
	float maxFontSize;
	double maxFontLineHeight;

}
-(void)translateObjectYBy:(double)arg1 ;
-(void)clearCachedInfo;
-(float)maxFontSize;
-(double)maxFontLineHeight;
-(void)calculateMetrics;
@end
