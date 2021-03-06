/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIView.h>

@class StrokableLabel, UIColor;

@interface AXColorWell : UIView {

	StrokableLabel* _sampleTextLabel;
	int _colorType;
	int _transparencyType;
	float _textAlpha;
	UIColor* wellColor;
	long long _edgeStyle;

}

@property (nonatomic,retain) UIColor * wellColor; 
@property (assign,nonatomic) int colorType;                     //@synthesize colorType=_colorType - In the implementation block
@property (assign,nonatomic) int transparencyType;              //@synthesize transparencyType=_transparencyType - In the implementation block
@property (assign,nonatomic) long long edgeStyle;               //@synthesize edgeStyle=_edgeStyle - In the implementation block
@property (assign,nonatomic) float textAlpha;                   //@synthesize textAlpha=_textAlpha - In the implementation block
-(int)transparencyType;
-(void)setTransparencyType:(int)arg1 ;
-(void)updateProperties;
-(void)setColorType:(int)arg1 ;
-(id)wellColor;
-(void)setWellColor:(id)arg1 ;
-(long long)edgeStyle;
-(float)textAlpha;
-(void)setEdgeStyle:(long long)arg1 ;
-(int)colorType;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTextAlpha:(float)arg1 ;
@end

