/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSDictionary;

@interface NSStringDrawingContext : NSObject {

	double _minimumScaleFactor;
	double _minimumTrackingAdjustment;
	double _actualScaleFactor;
	double _actualTrackingAdjustment;
	CGRect _totalBounds;
	NSDictionary* _linkAttributes;
	unsigned long long _numberOfLineFragments;
	unsigned long long _maximumNumberOfLines;
	double _baselineOffset;
	double _scaledBaselineOffset;
	double _scaledLineHeight;
	id _layout;
	struct {
		unsigned _wantsNumberOfLineFragments : 1;
		unsigned _wrapsForTruncationMode : 1;
		unsigned _wantsBaselineOffset : 1;
		unsigned _wantsScaledBaselineOffset : 1;
		unsigned _wantsScaledLineHeight : 1;
		unsigned _drawsDebugBaselines : 1;
		unsigned _cachesLayout : 1;
		unsigned _usesSimpleTextEffects : 1;
	}  _sdcFlags;
	bool _wantsNumberOfLineFragments;

}

@property (assign,nonatomic) double minimumScaleFactor;                             //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) double minimumTrackingAdjustment;                      //@synthesize minimumTrackingAdjustment=_minimumTrackingAdjustment - In the implementation block
@property (assign,nonatomic) double actualScaleFactor;                              //@synthesize actualScaleFactor=_actualScaleFactor - In the implementation block
@property (assign,nonatomic) double actualTrackingAdjustment;                       //@synthesize actualTrackingAdjustment=_actualTrackingAdjustment - In the implementation block
@property (assign,nonatomic) CGRect totalBounds;                                    //@synthesize totalBounds=_totalBounds - In the implementation block
@property (assign,nonatomic) bool wantsNumberOfLineFragments;                       //@synthesize wantsNumberOfLineFragments=_wantsNumberOfLineFragments - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLineFragments;              //@synthesize numberOfLineFragments=_numberOfLineFragments - In the implementation block
@property (assign,nonatomic) bool wrapsForTruncationMode; 
@property (assign,nonatomic) unsigned long long maximumNumberOfLines;               //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) bool wantsBaselineOffset; 
@property (assign,nonatomic) double baselineOffset;                                 //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) bool wantsScaledBaselineOffset; 
@property (assign,nonatomic) double scaledBaselineOffset;                           //@synthesize scaledBaselineOffset=_scaledBaselineOffset - In the implementation block
@property (assign,nonatomic) bool wantsScaledLineHeight; 
@property (assign,nonatomic) double scaledLineHeight;                               //@synthesize scaledLineHeight=_scaledLineHeight - In the implementation block
@property (assign,nonatomic) bool drawsDebugBaselines; 
@property (assign,nonatomic) bool cachesLayout; 
@property (nonatomic,retain) id layout;                                             //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) bool usesSimpleTextEffects; 
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(CGRect)totalBounds;
-(void)setWrapsForTruncationMode:(bool)arg1 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(id)layout;
-(double)actualScaleFactor;
-(void)setActualScaleFactor:(double)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(double)scaledBaselineOffset;
-(void)setScaledBaselineOffset:(double)arg1 ;
-(double)scaledLineHeight;
-(void)setScaledLineHeight:(double)arg1 ;
-(double)minimumScaleFactor;
-(void)setMinimumTrackingAdjustment:(double)arg1 ;
-(void)setDrawsDebugBaselines:(bool)arg1 ;
-(void)setCachesLayout:(bool)arg1 ;
-(void)setLayout:(id)arg1 ;
-(void)setUsesSimpleTextEffects:(bool)arg1 ;
-(void)setWantsBaselineOffset:(bool)arg1 ;
-(void)setWantsScaledBaselineOffset:(bool)arg1 ;
-(void)setWantsScaledLineHeight:(bool)arg1 ;
-(void)setWantsNumberOfLineFragments:(bool)arg1 ;
-(double)actualTrackingAdjustment;
-(bool)cachesLayout;
-(unsigned long long)numberOfLineFragments;
-(unsigned long long)maximumNumberOfLines;
-(double)minimumTrackingAdjustment;
-(bool)wantsNumberOfLineFragments;
-(bool)wrapsForTruncationMode;
-(bool)wantsBaselineOffset;
-(bool)wantsScaledBaselineOffset;
-(bool)wantsScaledLineHeight;
-(bool)drawsDebugBaselines;
-(bool)usesSimpleTextEffects;
-(void)setActualTrackingAdjustment:(double)arg1 ;
-(void)setTotalBounds:(CGRect)arg1 ;
-(void)setNumberOfLineFragments:(unsigned long long)arg1 ;
@end

