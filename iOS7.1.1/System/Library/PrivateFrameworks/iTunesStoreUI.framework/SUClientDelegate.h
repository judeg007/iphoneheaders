/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUClientDelegate <NSObject>
@optional
-(bool)client:(id)arg1 presentComposeReviewViewController:(id)arg2 animated:(bool)arg3;
-(id)topViewControllerForClient:(id)arg1;
-(bool)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(bool)arg3;
-(bool)client:(id)arg1 openInternalURL:(id)arg2;
-(id)downloadManagerForClient:(id)arg1 downloadKinds:(id)arg2;
-(id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2;

@required
-(bool)client:(id)arg1 presentModalViewController:(id)arg2 animated:(bool)arg3;
@end

