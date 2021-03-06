/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:16 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface SCATAxisLayer : CALayer {

	int _axis;
	int _theme;
	CALayer* _foregroundLayer;
	CALayer* _compositingLayer;

}

@property (assign,nonatomic) int axis;                                //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) int theme;                               //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) BOOL isAnimatingForwards; 
@property (nonatomic,retain) CALayer * foregroundLayer;               //@synthesize foregroundLayer=_foregroundLayer - In the implementation block
@property (nonatomic,retain) CALayer * compositingLayer;              //@synthesize compositingLayer=_compositingLayer - In the implementation block
+(float)rangeLayerMaxWidth;
+(float)rangeLayerBorderWidth;
+(float)lineLayerMaxWidth;
-(id)initWithAxis:(int)arg1 ;
-(void)updateTheme:(int)arg1 animated:(BOOL)arg2 ;
-(void)updateLayerTreePosition:(CGPoint)arg1 ;
-(BOOL)isAnimatingForwards;
-(id)foregroundLayer;
-(id)compositingLayer;
-(void)setForegroundLayer:(id)arg1 ;
-(void)setCompositingLayer:(id)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(int)axis;
-(void)setAxis:(int)arg1 ;
-(int)theme;
-(void)setTheme:(int)arg1 ;
@end

