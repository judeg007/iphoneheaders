/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface SKUITrailersCell : UICollectionViewCell {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) CGRect imageFrame; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)image;
-(id)title;
-(void)prepareForReuse;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void).cxx_destruct;
-(CGRect)imageFrame;
@end

