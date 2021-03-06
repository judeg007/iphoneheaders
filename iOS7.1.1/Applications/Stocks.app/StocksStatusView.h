/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIButton, UIPageControl, UILabel, StocksMainView, Stock;

@interface StocksStatusView : UIView {

	UIButton* _infoButton;
	UIButton* _viewStockButton;
	UIPageControl* _pageControl;
	UILabel* _statusLabel;
	StocksMainView* _stocksView;
	Stock* _stock;

}

@property (assign,nonatomic,__weak) StocksMainView * stocksView;              //@synthesize stocksView=_stocksView - In the implementation block
@property (nonatomic,retain) Stock * stock;                                   //@synthesize stock=_stock - In the implementation block
-(id)stocksView;
-(void)setStocksView:(id)arg1 ;
-(void)_infoButtonPressed;
-(void)_viewStockButtonPressed;
-(void)quotesUpdated;
-(id)initWithStocksView:(id)arg1 ;
-(void)layoutSubviews;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setCurrentPage:(int)arg1 ;
-(void).cxx_destruct;
-(void)setStock:(id)arg1 ;
-(id)stock;
@end

