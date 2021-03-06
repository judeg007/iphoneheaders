/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUStructuredPageGroupedViewController.h>

@class SUSegmentedControl, NSIndexPath, SUAudioPlayer, SUPlayerStatus;

@interface MSStructuredPageViewController : SUStructuredPageGroupedViewController {

	SUSegmentedControl* _inlineSegmentedControl;
	NSIndexPath* _previewIndexPath;
	SUAudioPlayer* _previewPlayer;
	SUPlayerStatus* _previewStatus;

}
-(void)setLoading:(bool)arg1 ;
-(void)applicationDidEnterBackground;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)_stopPreviewPlayback;
-(void)_setPreviewStatus:(id)arg1 forIndexPath:(id)arg2 animated:(bool)arg3 ;
-(bool)_handlePreviewForIndexPath:(id)arg1 ;
-(void)_playerStatusChangeNotification:(id)arg1 ;
-(bool)_handleMediaPreviewForIndexPath:(id)arg1 ;
-(bool)_handleInlinePreviewForIndexPath:(id)arg1 ;
-(void)reloadWithStorePage:(id)arg1 forURL:(id)arg2 ;
-(bool)canDisplaySectionGroup:(id)arg1 ;
-(id)setDisplayedSectionGroup:(id)arg1 ;
-(bool)canSelectRowAtIndexPath:(id)arg1 ;
-(bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2 ;
-(bool)purchaseItemAtIndexPath:(id)arg1 ;
@end

