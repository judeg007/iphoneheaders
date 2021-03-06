/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>
#import <UIKit/UITextViewDelegate.h>

@class CalendarNotesCell;

@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate> {

	CalendarNotesCell* _cell;

}
-(bool)saveAndDismissWithForce:(bool)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 forWidth:(double)arg3 ;
-(bool)textViewShouldReturn:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(bool)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)reset;
-(void).cxx_destruct;
-(bool)isInline;
@end

