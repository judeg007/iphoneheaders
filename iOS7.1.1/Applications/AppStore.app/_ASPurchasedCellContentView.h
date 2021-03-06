/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface _ASPurchasedCellContentView : UIView {

	UILabel* _publisherLabel;
	UILabel* _titleLabel;
	UILabel* _versionLabel;
	NSString* _text;

}

@property (nonatomic,retain) UILabel * publisherLabel;              //@synthesize publisherLabel=_publisherLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * versionLabel;                //@synthesize versionLabel=_versionLabel - In the implementation block
@property (nonatomic,readonly) NSString * publisher; 
@property (nonatomic,readonly) NSString * text;                     //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * version; 
-(id)publisherLabel;
-(void)setPublisherLabel:(id)arg1 ;
-(id)versionLabel;
-(void)setVersionLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)text;
-(id)title;
-(id)titleLabel;
-(id)version;
-(void).cxx_destruct;
-(void)setTitleLabel:(id)arg1 ;
-(id)publisher;
@end

