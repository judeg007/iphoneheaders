/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIStatusBarTinting.h>

@class UIColor, UIView, NSMutableArray, UIImageView;

@interface UISnapshotView : UIView <UIStatusBarTinting> {

	CGSize _contentSize;
	UIEdgeInsets _contentBeyondBounds;
	UIEdgeInsets _edgePadding;
	UIEdgeInsets _edgeInsets;
	CGPoint _contentOffset;
	UIColor* _edgePaddingColor;
	UIView* _imageView;
	NSMutableArray* _edgePaddingViews;
	CGRect _snapshotRect;
	UIImageView* _shadowView;
	unsigned _disableEdgeAntialiasing : 1;
	unsigned _disableVerticalStretch : 1;
	UIColor* _statusBarTintColor;

}

@property (assign,getter=isEdgeAntialiasingEnabled,nonatomic) bool edgeAntialiasingEnabled; 
@property (nonatomic,retain) UIView * shadowView;                                                                //@synthesize shadowView=_shadowView - In the implementation block
@property (setter=_setStatusBarTintColor:,nonatomic,retain) UIColor * _statusBarTintColor;                       //@synthesize statusBarTintColor=_statusBarTintColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgePadding;                                                           //@synthesize edgePadding=_edgePadding - In the implementation block
@property (nonatomic,retain) UIColor * edgePaddingColor;                                                         //@synthesize edgePaddingColor=_edgePaddingColor - In the implementation block
@property (getter=_snapshotView,nonatomic,readonly) UIView * snapshotView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (getter=_contentSize,nonatomic,readonly) CGSize contentSize;                                           //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,setter=_setContentOffset:,getter=_contentOffset,nonatomic) CGPoint contentOffset;              //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                            //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,getter=isVerticalStretchEnabled,nonatomic) bool verticalStretchEnabled; 
@property (assign,setter=_setSnapshotRect:,getter=_snapshotRect,nonatomic) CGRect snapshotRect; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)_statusBarTintColor;
-(UIEdgeInsets)edgeInsets;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)setContentStretch:(CGRect)arg1 ;
-(CGSize)_contentSize;
-(id)_snapshotView;
-(id)shadowView;
-(void)setShadowView:(id)arg1 ;
-(CGPoint)_contentOffset;
-(void)captureSnapshotOfView:(id)arg1 withSnapshotType:(int)arg2 ;
-(void)_setStatusBarTintColor:(id)arg1 ;
-(void)setEdgePadding:(UIEdgeInsets)arg1 ;
-(void)setEdgePaddingColor:(id)arg1 ;
-(void)captureSnapshotRect:(CGRect)arg1 fromView:(id)arg2 withSnapshotType:(int)arg3 ;
-(UIEdgeInsets)edgePadding;
-(void)_setContentOffset:(CGPoint)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setVerticalStretchEnabled:(bool)arg1 ;
-(void)setEdgeAntialiasingEnabled:(bool)arg1 ;
-(void)_positionImageView;
-(UIEdgeInsets)_edgePadding;
-(void)_updateContentsRect;
-(void)_addEdgePaddingViewInRect:(CGRect)arg1 ;
-(void)_drawEdges:(UIEdgeInsets)arg1 withContentSize:(CGSize)arg2 ;
-(CGRect)_contentsCenterForEdgePadding:(UIEdgeInsets)arg1 withContentSize:(CGSize)arg2 ;
-(bool)isEdgeAntialiasingEnabled;
-(bool)isVerticalStretchEnabled;
-(CGRect)_snapshotRect;
-(void)_setSnapshotRect:(CGRect)arg1 ;
-(id)edgePaddingColor;
@end

