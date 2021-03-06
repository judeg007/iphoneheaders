/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:39 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLeafIcon.h>

@class NSString, UIImage;

@interface SBApplicationIcon : SBLeafIcon {

	NSString* _displayIdentifier;
	UIImage* _cachedSquareHomeScreenContentsImage;

}
+(id)_squareHomeScreenIconImagesMemoryPool;
-(id)__loadIconImageForDataSource:(id)arg1 format:(int)arg2 ;
-(id)__loadUnmaskedIconImageForFormat:(int)arg1 ;
-(/*^block*/ id)_blockForGeneratingIconImageInBackgroundWithFormat:(int)arg1 complete:(/*^block*/ id)arg2 ;
-(id)folderTitleOptions;
-(id)applicationBundleID;
-(void)generateIconImageInBackground:(/*^block*/ id)arg1 ;
-(BOOL)canGenerateImageInBackgroundForFormat:(int)arg1 ;
-(id)getUnmaskedIconImage:(int)arg1 ;
-(id)automationID;
-(id)folderFallbackTitle;
-(id)applicationDisplayID;
-(id)generateIconImage:(int)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)tags;
-(void)setBadge:(id)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(id)application;
@end

