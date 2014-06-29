/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKTranscriptCell.h>

@class UIButton, UIImageView, UIImage;

@interface CKTranscriptMessageCell : CKTranscriptCell {

	bool _wantsContactImageLayout;
	UIButton* _failureButton;
	UIImageView* _contactImageView;

}

@property (assign,nonatomic) bool wantsContactImageLayout;                //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (nonatomic,retain) UIImage * contactImage; 
@property (assign,nonatomic) bool failed; 
@property (nonatomic,retain) UIButton * failureButton;                    //@synthesize failureButton=_failureButton - In the implementation block
@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
-(void)configureForRow:(id)arg1 ;
-(id)contactImageView;
-(void)setContactImageView:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)layoutSubviewsForContents;
-(id)failureButton;
-(id)contactImage;
-(bool)wantsContactImageLayout;
-(void)setWantsContactImageLayout:(bool)arg1 ;
-(bool)failed;
-(void)setFailureButton:(id)arg1 ;
-(void)setContactImage:(id)arg1 ;
-(void)setFailed:(bool)arg1 ;
@end
