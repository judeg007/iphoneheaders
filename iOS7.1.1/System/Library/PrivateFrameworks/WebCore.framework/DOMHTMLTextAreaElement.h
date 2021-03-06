/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement

@property (assign) bool autofocus; 
@property (assign) int cols; 
@property (assign) bool disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * name; 
@property (assign) bool readOnly; 
@property (assign) int rows; 
@property (readonly) NSString * type; 
@property (copy) NSString * defaultValue; 
@property (copy) NSString * value; 
@property (readonly) bool willValidate; 
@property (assign) int selectionStart; 
@property (assign) int selectionEnd; 
@property (copy) NSString * accessKey; 
-(void)_startAssistingDocumentView:(id)arg1 ;
-(void)_stopAssistingDocumentView:(id)arg1 ;
-(bool)_requiresAccessoryView;
-(bool)_requiresInputView;
-(bool)_supportsAutoFill;
-(id)_textFormElement;
-(bool)nodeCanBecomeFirstResponder;
-(bool)isEditing;
-(id)textInputTraits;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(bool)isTextControl;
-(id)startPosition;
-(id)endPosition;
-(int)structuralComplexityContribution;
-(int)_autocapitalizeType;
-(bool)_isEdited;
-(id)type;
-(void)setValue:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)value;
-(id)name;
-(void)setPlaceholder:(id)arg1 ;
-(id)form;
-(bool)autocorrect;
-(id)placeholder;
-(int)rows;
-(bool)disabled;
-(void)setDisabled:(bool)arg1 ;
-(bool)readOnly;
-(void)setRows:(int)arg1 ;
-(id)accessKey;
-(void)setAccessKey:(id)arg1 ;
-(bool)autofocus;
-(void)setAutofocus:(bool)arg1 ;
-(bool)willValidate;
-(id)validity;
-(id)validationMessage;
-(id)labels;
-(bool)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(void)setAutocorrect:(bool)arg1 ;
-(id)autocapitalize;
-(void)setAutocapitalize:(id)arg1 ;
-(int)cols;
-(void)setCols:(int)arg1 ;
-(id)dirName;
-(void)setDirName:(id)arg1 ;
-(int)maxLength;
-(void)setMaxLength:(int)arg1 ;
-(void)setReadOnly:(bool)arg1 ;
-(bool)required;
-(void)setRequired:(bool)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(int)selectionStart;
-(void)setSelectionStart:(int)arg1 ;
-(int)selectionEnd;
-(void)setSelectionEnd:(int)arg1 ;
-(id)selectionDirection;
-(void)setSelectionDirection:(id)arg1 ;
-(void)select;
-(void)setRangeText:(id)arg1 ;
-(void)setRangeText:(id)arg1 start:(unsigned)arg2 end:(unsigned)arg3 selectionMode:(id)arg4 ;
-(void)setSelectionRange:(int)arg1 end:(int)arg2 ;
-(id)wrap;
-(void)setWrap:(id)arg1 ;
-(unsigned)textLength;
@end

