/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditableTableCell.h>

@class UILabel, NSString;

@interface KeychainSyncSecurityCodeCell : PSEditableTableCell {

	UILabel* _bulletTextLabel;
	int _securityCodeType;
	int _mode;
	NSString* _firstPasscodeEntry;

}

@property (assign,nonatomic) int securityCodeType;                       //@synthesize securityCodeType=_securityCodeType - In the implementation block
@property (assign,nonatomic) int mode;                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSString * firstPasscodeEntry;              //@synthesize firstPasscodeEntry=_firstPasscodeEntry - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(bool)textFieldShouldBeginEditing:(id)arg1 ;
-(bool)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setBulletText:(id)arg1 ;
-(int)securityCodeType;
-(void)setSecurityCodeType:(int)arg1 ;
-(id)firstPasscodeEntry;
-(void)setFirstPasscodeEntry:(id)arg1 ;
@end

