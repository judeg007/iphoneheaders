/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class SKStarRatingAlertView;

@interface SKStarRatingAlertViewDelegate : NSObject <UIAlertViewDelegate> {

	SKStarRatingAlertView* _alertView;
	/*^block*/ id _completionBlock;

}
-(void)showAlertView:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(void)alertViewCancel:(id)arg1 ;
-(bool)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
@end

