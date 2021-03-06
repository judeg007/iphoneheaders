/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUModalTransition.h>

@protocol PUPhotosSharingTransitionViewController, PUPhotosSharingTransitionDelegate;
@class UIViewController, PUPhotosSharingTransitionContext, UICollectionViewLayout;

@interface PUPhotosSharingTransition : PUModalTransition {

	UIViewController<PUPhotosSharingTransitionViewController>* _sharingTransitionViewController;
	PUPhotosSharingTransitionContext* _photosSharingTransitionContext;
	<PUPhotosSharingTransitionDelegate>* _delegate;
	UICollectionViewLayout* __transitionLayout;

}

@property (nonatomic,retain) UIViewController<PUPhotosSharingTransitionViewController> * sharingTransitionViewController;              //@synthesize sharingTransitionViewController=_sharingTransitionViewController - In the implementation block
@property (nonatomic,retain) PUPhotosSharingTransitionContext * photosSharingTransitionContext;                                        //@synthesize photosSharingTransitionContext=_photosSharingTransitionContext - In the implementation block
@property (assign,nonatomic,__weak) <PUPhotosSharingTransitionDelegate> * delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _transitionLayout;                                  //@synthesize _transitionLayout=__transitionLayout - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(void)_setTransitionLayout:(id)arg1 ;
-(id)_transitionLayout;
-(id)photosSharingTransitionContext;
-(void)setPhotosSharingTransitionContext:(id)arg1 ;
-(id)sharingTransitionViewController;
-(void)animatePresentTransition;
-(void)animateDismissTransition;
-(void)setSharingTransitionViewController:(id)arg1 ;
@end

