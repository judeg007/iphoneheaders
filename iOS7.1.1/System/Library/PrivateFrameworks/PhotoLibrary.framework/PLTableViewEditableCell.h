/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class PLTextView, UITextField, UILabel;

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate> {

	PLTextView* _textView;
	UITextField* _textField;
	UILabel* _sizeTextLabel;
	id _delegate;
	bool _forceFirstResponder;
	int _cellStyle;

}

@property (assign,nonatomic) int style;              //@synthesize cellStyle=_cellStyle - In the implementation block
+(id)posterCellIdentifier;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setStyle:(int)arg1 ;
-(bool)resignFirstResponder;
-(bool)becomeFirstResponder;
-(void)setValue:(id)arg1 ;
-(int)style;
-(id)value;
-(CGSize)contentSize;
-(bool)isEditing;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(bool)textFieldShouldEndEditing:(id)arg1 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(bool)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_textFieldChanged;
-(id)initWithFrame:(CGRect)arg1 multiLine:(bool)arg2 ;
-(id)initHDSDCell;
-(id)initWithFrame:(CGRect)arg1 cellStyle:(int)arg2 ;
-(void)forceFirstResponder:(bool)arg1 ;
-(id)sizeTextLabel;
-(void)setPlaceholderText:(id)arg1 ;
@end

