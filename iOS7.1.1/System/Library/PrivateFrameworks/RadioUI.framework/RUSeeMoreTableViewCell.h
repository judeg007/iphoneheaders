/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class SKUICircleProgressIndicator, UILabel;

@interface RUSeeMoreTableViewCell : UITableViewCell {

	SKUICircleProgressIndicator* _activityIndicator;
	UILabel* _detailLabel;
	long long _seeMoreState;

}

@property (assign,nonatomic) long long seeMoreState;              //@synthesize seeMoreState=_seeMoreState - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void).cxx_destruct;
-(void)setSeeMoreState:(long long)arg1 ;
-(void)_updateForChangedState;
-(long long)seeMoreState;
@end

