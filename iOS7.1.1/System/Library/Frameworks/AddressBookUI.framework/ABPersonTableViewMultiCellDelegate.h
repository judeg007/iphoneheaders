/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABMultiCellContentViewUpdateDelegate.h>
#import <AddressBookUI/ABPersonTableHeaderViewDelegate.h>
#import <AddressBookUI/ABDatePickerViewControllerDismissDelegate.h>

@class UIDatePicker, ABPersonTableViewDataSource, ABStyleProvider, ABPersonPickersDelegate;

@interface ABPersonTableViewMultiCellDelegate : NSObject <ABMultiCellContentViewUpdateDelegate, ABPersonTableHeaderViewDelegate, ABDatePickerViewControllerDismissDelegate> {

	UIDatePicker* _datePicker;
	ABPersonTableViewDataSource* _dataSource;
	ABStyleProvider* _styleProvider;
	ABPersonPickersDelegate* _pickersDelegate;

}

@property (nonatomic,retain) ABStyleProvider * styleProvider;                        //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) ABPersonPickersDelegate * pickersDelegate;              //@synthesize pickersDelegate=_pickersDelegate - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(id)datePickerForDateField:(id)arg1 ;
-(bool)dateField:(id)arg1 shouldPresentDatePicker:(id)arg2 ;
-(void)dateField:(id)arg1 delegatePresentDatePicker:(id)arg2 ;
-(void)dateField:(id)arg1 delegatePrepareToPresentDatePicker:(id)arg2 ;
-(void)dateField:(id)arg1 delegateDismissDatePicker:(id)arg2 ;
-(void)datePickerViewControllerWillDisappear:(id)arg1 ;
-(bool)ABTabToNextResponder:(bool)arg1 fromView:(id)arg2 ;
-(bool)multiCellContentView:(id)arg1 entryFieldShouldBeginEditing:(id)arg2 ;
-(void)multiCellContentView:(id)arg1 entryFieldDidBeginEditing:(id)arg2 ;
-(void)multiCellContentView:(id)arg1 entryField:(id)arg2 didUpdateValue:(id)arg3 forKey:(id)arg4 ;
-(void)multiCellContentView:(id)arg1 entryFieldDidEndEditing:(id)arg2 forKey:(id)arg3 ;
-(void)multiCellContentViewDidEndEditing:(id)arg1 ;
-(void)multiCellContentView:(id)arg1 touchesBeganForView:(id)arg2 ;
-(void)multiCellContentView:(id)arg1 touchesEndedForView:(id)arg2 ;
-(void)multiCellContentView:(id)arg1 touchesCancelledForView:(id)arg2 ;
-(bool)tabToNextResponder:(bool)arg1 fromView:(id)arg2 ;
-(void)multiCellContentView:(id)arg1 willResizeAnimated:(bool)arg2 ;
-(void)multiCellContentView:(id)arg1 didResizeAnimated:(bool)arg2 ;
-(void)multiCellContentViewWillShowDeleteConfirmation:(id)arg1 ;
-(void)multiCellContentViewWillHideDeleteConfirmation:(id)arg1 ;
-(id)pickersDelegate;
-(void)personTableHeaderView:(id)arg1 imageViewWasSelected:(id)arg2 ;
-(void)setPickersDelegate:(id)arg1 ;
-(void)_multiCellContentView:(id)arg1 selectedAlert:(id)arg2 ;
-(void)_multiCellContentView:(id)arg1 selectedService:(id)arg2 ;
-(void)_multiCellContentView:(id)arg1 selectedLabel:(id)arg2 ;
-(void)_multiCellContentView:(id)arg1 selectedCountry:(id)arg2 ;
-(id)_capitalizedTitleForContentView:(id)arg1 ;
-(bool)_tableView:(id)arg1 isValidIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
@end

