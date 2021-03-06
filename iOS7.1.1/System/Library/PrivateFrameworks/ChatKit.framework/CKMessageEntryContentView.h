/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UITextViewDelegate.h>

@class CKComposition, CKMessageEntryTextView, CKMessageEntryRichTextView, UIView, NSString;

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate> {

	bool _shouldShowSubject;
	bool _needsTextLayout;
	bool _needsEnsureSelectionVisible;
	CKComposition* _composition;
	CKMessageEntryTextView* _subjectView;
	CKMessageEntryRichTextView* _textView;
	UIView* _activeView;
	double _placeholderHeight;
	UIView* _dividerLine;
	UIEdgeInsets _textAlignmentInsets;
	UIEdgeInsets _subjectAlignmentInsets;

}

@property (assign,nonatomic) bool shouldShowSubject;                                                               //@synthesize shouldShowSubject=_shouldShowSubject - In the implementation block
@property (nonatomic,retain) CKComposition * composition;                                                          //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) CKMessageEntryTextView * subjectView;                                                 //@synthesize subjectView=_subjectView - In the implementation block
@property (nonatomic,retain) CKMessageEntryRichTextView * textView;                                                //@synthesize textView=_textView - In the implementation block
@property (getter=isActive,nonatomic,readonly) bool active; 
@property (assign,nonatomic) UIView * activeView;                                                                  //@synthesize activeView=_activeView - In the implementation block
@property (nonatomic,copy) NSString * placeholderText; 
@property (getter=isSingleLine,nonatomic,readonly) bool singleLine; 
@property (getter=isShowingDictationPlaceholder,nonatomic,readonly) bool showingDictationPlaceholder; 
@property (assign,nonatomic) double placeholderHeight;                                                             //@synthesize placeholderHeight=_placeholderHeight - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentTextAlignmentInsets; 
@property (assign,nonatomic) BOOL balloonColor; 
@property (assign,nonatomic) UIEdgeInsets textAlignmentInsets;                                                     //@synthesize textAlignmentInsets=_textAlignmentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets subjectAlignmentInsets;                                                  //@synthesize subjectAlignmentInsets=_subjectAlignmentInsets - In the implementation block
@property (nonatomic,retain) UIView * dividerLine;                                                                 //@synthesize dividerLine=_dividerLine - In the implementation block
@property (assign,nonatomic) bool needsTextLayout;                                                                 //@synthesize needsTextLayout=_needsTextLayout - In the implementation block
@property (assign,nonatomic) bool needsEnsureSelectionVisible;                                                     //@synthesize needsEnsureSelectionVisible=_needsEnsureSelectionVisible - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(bool)isActive;
-(void)setTextView:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(bool)textViewShouldBeginEditing:(id)arg1 ;
-(bool)hasContent;
-(void)textViewDidChange:(id)arg1 ;
-(id)textView;
-(void)calculateTextMetrics;
-(UIEdgeInsets)contentTextAlignmentInsets;
-(bool)isSingleLine;
-(double)placeholderHeight;
-(void)setShouldShowSubject:(bool)arg1 ;
-(id)initWithFrame:(CGRect)arg1 shouldShowSubject:(bool)arg2 ;
-(void)setComposition:(id)arg1 ;
-(void)clearMessage;
-(bool)shouldShowSubject;
-(void)setTextAlignmentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)textAlignmentInsets;
-(bool)isShowingDictationPlaceholder;
-(void)setBalloonColor:(BOOL)arg1 ;
-(id)activeView;
-(id)subjectView;
-(void)insertMessagePart:(id)arg1 ;
-(void)setMessageParts:(id)arg1 ;
-(bool)makeActive;
-(bool)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2 ;
-(BOOL)balloonColor;
-(bool)needsTextLayout;
-(id)dividerLine;
-(void)ensureSelectionVisibleIfNeeded;
-(void)setNeedsTextLayout:(bool)arg1 ;
-(void)setSubjectView:(id)arg1 ;
-(void)setDividerLine:(id)arg1 ;
-(void)invalidateComposition;
-(UIEdgeInsets)subjectAlignmentInsets;
-(void)setNeedsEnsureSelectionVisible:(bool)arg1 ;
-(void)setActiveView:(id)arg1 ;
-(bool)needsEnsureSelectionVisible;
-(void)setPlaceholderHeight:(double)arg1 ;
-(void)setSubjectAlignmentInsets:(UIEdgeInsets)arg1 ;
-(id)composition;
-(id)placeholderText;
-(void)setPlaceholderText:(id)arg1 ;
@end

