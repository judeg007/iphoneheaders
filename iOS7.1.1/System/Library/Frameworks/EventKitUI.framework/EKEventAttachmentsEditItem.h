/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>
#import <EventKitUI/EKEventAttachmentCellControllerDelegate.h>
#import <EventKitUI/EKEventAttachmentEditViewControllerDelegate.h>

@class NSArray;

@interface EKEventAttachmentsEditItem : EKEventEditItem <EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate> {

	NSArray* _cellControllers;

}
-(bool)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(unsigned long long)numberOfSubitemsInSubsection:(unsigned long long)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 forWidth:(double)arg3 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(void)refreshFromCalendarItemAndStore;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(void)_cleanUpCellControllers;
-(id)parentViewControllerForAttachmentCellController:(id)arg1 ;
-(id)owningEventForAttachmentCellController:(id)arg1 ;
-(bool)_shouldCondenseIntoSingleItem;
-(id)owningEventForAttachmentEditViewController:(id)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
@end

