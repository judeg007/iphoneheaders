/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIScrollView.h>
#import <AddressBookUI/ABPersonTabsScrollView.h>

@protocol ABPersonTabsLayoutManager;
@class UIView;

@interface ABPersonOverlayingContainerView : UIScrollView <ABPersonTabsScrollView> {

	double _minimumBottomInset;
	UIEdgeInsets _savedContentInset;
	UIView* _backgroundView;
	UIView* _abContentView;
	<ABPersonTabsLayoutManager>* _tabsLayoutManager;

}

@property (nonatomic,retain) UIView * contentView;                                         //@synthesize abContentView=_abContentView - In the implementation block
@property (assign,nonatomic) double minimumBottomInset; 
@property (nonatomic,retain) UIView * backgroundView;                                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) <ABPersonTabsLayoutManager> * tabsLayoutManager;              //@synthesize tabsLayoutManager=_tabsLayoutManager - In the implementation block
-(double)minimumBottomInset;
-(void)setMinimumBottomInset:(double)arg1 ;
-(id)tabsLayoutManager;
-(void)setTabsLayoutManager:(id)arg1 ;
-(void)_updateContentFrameAndSize;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(id)backgroundView;
@end
