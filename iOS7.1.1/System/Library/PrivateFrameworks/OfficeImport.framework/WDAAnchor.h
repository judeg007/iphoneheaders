/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WDAAnchor : NSObject {

	CGRect mBounds;
	int mTextWrappingMode;
	int mTextWrappingModeType;
	double mWrapDistanceLeft;
	double mWrapDistanceTop;
	double mWrapDistanceRight;
	double mWrapDistanceBottom;
	int mHorizontalPosition;
	int mRelativeHorizontalPosition;
	int mVerticalPosition;
	int mRelativeVerticalPosition;
	bool mIsBehindText;
	bool mAllowOverlap;
	bool mMoveWithText;
	long long mZIndexTotal;
	long long mZIndex;

}

@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) int textWrappingMode; 
@property (assign,nonatomic) int textWrappingModeType; 
@property (assign,nonatomic) bool allowOverlap; 
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(id).cxx_construct;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(int)relativeVerticalPosition;
-(bool)isBehindText;
-(int)textWrappingMode;
-(int)relativeHorizontalPosition;
-(int)horizontalPosition;
-(int)verticalPosition;
-(void)setRelativeHorizontalPosition:(int)arg1 ;
-(void)setRelativeVerticalPosition:(int)arg1 ;
-(void)setTextWrappingMode:(int)arg1 ;
-(void)setTextWrappingModeType:(int)arg1 ;
-(void)setHorizontalPosition:(int)arg1 ;
-(void)setVerticalPosition:(int)arg1 ;
-(void)setWrapDistanceLeft:(double)arg1 ;
-(void)setWrapDistanceTop:(double)arg1 ;
-(void)setWrapDistanceRight:(double)arg1 ;
-(void)setWrapDistanceBottom:(double)arg1 ;
-(void)setAllowOverlap:(bool)arg1 ;
-(void)setBehindText:(bool)arg1 ;
-(double)wrapDistanceLeft;
-(double)wrapDistanceTop;
-(double)wrapDistanceRight;
-(double)wrapDistanceBottom;
-(long long)zIndexTotal;
-(void)setZIndexTotal:(long long)arg1 ;
-(int)textWrappingModeType;
-(bool)allowOverlap;
@end

