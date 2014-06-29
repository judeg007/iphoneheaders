/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <EventKitUI/MFContactsSearchConsumer.h>
#import <EventKitUI/MFComposeRecipientViewDelegate.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <EventKitUI/ABPersonViewControllerDelegate.h>
#import <EventKitUI/ABUnknownPersonViewControllerDelegate.h>

@protocol EKEventAttendeePickerDelegate;
@class NSArray, MFComposeRecipientView, UIScrollView, UITableView, MFSearchShadowView, UIKeyboard, NSNumber, MFContactsSearchManager, MFContactsSearchResultsModel, NSString;

@interface EKEventAttendeePicker : UIViewController <UITableViewDataSource, UITableViewDelegate, MFContactsSearchConsumer, MFComposeRecipientViewDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate> {

	NSArray* _recipients;
	MFComposeRecipientView* _composeRecipientView;
	UIScrollView* _recipientScrollView;
	UITableView* _searchResultsView;
	MFSearchShadowView* _shadowView;
	bool _showingSearchField;
	UIKeyboard* _keyboard;
	NSNumber* _lastSearchId;
	bool _ABAccessDenied;
	MFContactsSearchManager* _searchManager;
	MFContactsSearchResultsModel* _searchResultsModel;
	NSArray* _searchResults;
	bool _shouldReenableAutomaticKeyboard;
	CGRect _initialFrame;
	NSString* _searchAccountID;
	<EKEventAttendeePickerDelegate>* _emailValidationDelegate;

}

@property (nonatomic,copy) NSString * searchAccountID;                                                      //@synthesize searchAccountID=_searchAccountID - In the implementation block
@property (nonatomic,readonly) NSArray * addresses; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,readonly) NSString * remainingText; 
@property (assign,nonatomic,__weak) <EKEventAttendeePickerDelegate> * emailValidationDelegate;              //@synthesize emailValidationDelegate=_emailValidationDelegate - In the implementation block
-(bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(bool)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)setSearchAccountID:(id)arg1 ;
-(void)commitRemainingText;
-(id)peoplePickerPrompt;
-(void)_setRecipientsOnComposeView;
-(id)_searchResultsView;
-(double)_maxScrollerHeight;
-(void)_hideSearchFieldAndCancelOutstandingSearches:(bool)arg1 ;
-(unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1 ;
-(id)remainingText;
-(void)_copyRecipientsFromComposeView;
-(double)_properHeight;
-(id)searchAccountID;
-(id)emailValidationDelegate;
-(void)setEmailValidationDelegate:(id)arg1 ;
-(id)addresses;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)animationDidStop:(id)arg1 ;
-(id)_shadowView;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void).cxx_destruct;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)searchWithText:(id)arg1 ;
-(void)_showSearchField;
-(id)recipients;
-(void)setRecipients:(id)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(id)_searchManager;
-(void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(int)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3 ;
@end
