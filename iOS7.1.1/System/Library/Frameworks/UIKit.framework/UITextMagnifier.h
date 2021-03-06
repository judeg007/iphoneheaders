/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol UITextInput;
@class UIView, UIResponder, UITextMagnifierTimeWeightedPoint;

@interface UITextMagnifier : UIView {

	UIView* _target;
	CGPoint _magnificationPoint;
	CGPoint _animationPoint;
	CGPoint _terminalPoint;
	bool _terminalPointPlacedCarefully;
	UIResponder<UITextInput>* _text;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	UIView* _magnifierRenderer;
	UIView* _autoscrollRenderer;
	int _autoscrollDirections;

}

@property (nonatomic,retain) UIView * target;                                  //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIResponder<UITextInput> * text;                  //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGPoint magnificationPoint;                       //@synthesize magnificationPoint=_magnificationPoint - In the implementation block
@property (assign,nonatomic) CGPoint animationPoint;                           //@synthesize animationPoint=_animationPoint - In the implementation block
@property (nonatomic,readonly) CGPoint terminalPoint;                          //@synthesize terminalPoint=_terminalPoint - In the implementation block
@property (nonatomic,readonly) bool terminalPointPlacedCarefully;              //@synthesize terminalPointPlacedCarefully=_terminalPointPlacedCarefully - In the implementation block
+(id)getLoupeBackgroundColorForViewService:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)target;
-(void)autoscrollWillNotStart;
-(void)postAutoscrollPoint:(CGPoint)arg1 ;
-(void)stopMagnifying:(bool)arg1 ;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(bool)arg5 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(CGPoint)terminalPoint;
-(bool)terminalPointPlacedCarefully;
-(void)setAnimationPoint:(CGPoint)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)animateToMagnifierRenderer;
-(void)animateToAutoscrollRenderer;
-(void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)remove;
-(CGPoint)magnificationPoint;
-(void)detectLostTouches:(id)arg1 ;
-(void)setToMagnifierRenderer;
-(void)zoomUpAnimation;
-(void)windowWillRotate:(id)arg1 ;
-(CGPoint)animationPoint;
-(void)zoomDownAnimation;
@end

