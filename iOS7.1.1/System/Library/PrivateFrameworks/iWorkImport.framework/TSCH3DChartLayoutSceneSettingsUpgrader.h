/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAbstractLimitingSeriesUpgrader.h>

@class TSCH3DChartLayout, NSValue;

@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {

	TSCH3DChartLayout* mChartLayout;
	bool mIsMutatedForSceneSettings;
	NSValue* mInfoGeometryOffset;
	bool hasConstantDepth;

}

@property (assign,nonatomic) bool hasConstantDepth; 
-(id)sceneResetWithLayoutSettings:(SCD_Struct_TS408)arg1 ;
-(CGRect)oldResizingFrame;
-(id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(CGRect)arg2 ;
-(SCD_Struct_TS408)oldLayoutSettings;
-(bool)hasConstantDepth;
-(void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2 ;
-(void)updateInfoGeometryIfNecessary;
-(void)setHasConstantDepth:(bool)arg1 ;
-(void)dealloc;
-(void)upgrade;
@end

