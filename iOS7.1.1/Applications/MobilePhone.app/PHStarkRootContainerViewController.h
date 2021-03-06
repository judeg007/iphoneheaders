/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UINavigationController, PHStarkMainMenuContainerViewController;

@interface PHStarkRootContainerViewController : UIViewController <UINavigationControllerDelegate> {

	UINavigationController* _wrapperNavigationController;
	PHStarkMainMenuContainerViewController* _mainMenuContainerViewController;

}

@property (retain) UINavigationController * wrapperNavigationController;                                  //@synthesize wrapperNavigationController=_wrapperNavigationController - In the implementation block
@property (retain) PHStarkMainMenuContainerViewController * mainMenuContainerViewController;              //@synthesize mainMenuContainerViewController=_mainMenuContainerViewController - In the implementation block
-(id)wrapperNavigationController;
-(void)setMainMenuContainerViewController:(id)arg1 ;
-(id)mainMenuContainerViewController;
-(void)setWrapperNavigationController:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
@end

