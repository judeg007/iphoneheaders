/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class ContinuousReadingItem, UIView, ContinuousReadingBannerView, UILabel;

@interface ContinuousReadingPreviewView : UIView {

	ContinuousReadingItem* _continuousReadingItem;
	UIView* _contentView;
	ContinuousReadingBannerView* _bannerView;
	UIView* _headerView;
	UIView* _contentBackgroundView;
	UILabel* _headerLabel;

}

@property (nonatomic,readonly) ContinuousReadingItem * continuousReadingItem;              //@synthesize continuousReadingItem=_continuousReadingItem - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) float rubberBandingHeight; 
@property (nonatomic,readonly) float headerHeight; 
@property (nonatomic,retain) ContinuousReadingBannerView * bannerView;                     //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * contentBackgroundView;                               //@synthesize contentBackgroundView=_contentBackgroundView - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                                        //@synthesize headerLabel=_headerLabel - In the implementation block
-(id)continuousReadingItem;
-(id)initWithContinuousReadingItem:(id)arg1 ;
-(float)rubberBandingHeight;
-(void)_layOutHeader;
-(void)_layOutContentView;
-(id)contentBackgroundView;
-(void)setContentBackgroundView:(id)arg1 ;
-(void)setHeaderLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(id)headerView;
-(void)setHeaderView:(id)arg1 ;
-(float)headerHeight;
-(void)setBannerView:(id)arg1 ;
-(id)bannerView;
-(id)headerLabel;
@end

