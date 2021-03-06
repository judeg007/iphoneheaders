/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDictionary, UIWindow, NSMutableArray, NSArray, UISoftwareDimmingWindow, UIScreenMode;

@interface UIScreen : NSObject {

	id _display;
	CGRect _bounds;
	double _scale;
	double _horizontalScale;
	long long _userInterfaceIdiom;
	NSDictionary* _capabilities;
	long long _workspaceCapableScreenType;
	UIWindow* _screenDisablingWindow;
	double _startedPausingWindows;
	NSMutableArray* _pausedWindows;
	CFDictionaryRef _touchMap;
	NSArray* _availableDisplayModes;
	unsigned _canAccessDisplaySeed;
	unsigned _connectionSeed;
	struct {
		unsigned bitsPerComponent : 4;
		unsigned initialized : 1;
		unsigned connected : 1;
		unsigned overscanCompensation : 2;
		unsigned canAccessDisplay : 1;
		unsigned canAccessDisplaySeedValid : 1;
		unsigned screenUpdatesDisabled : 1;
	}  _screenFlags;
	bool _wantsSoftwareDimming;
	UISoftwareDimmingWindow* _softwareDimmingWindow;
	long long _lastNotifiedBacklightLevel;

}

@property (nonatomic,readonly) CGRect bounds;                                                                                                             //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) CGRect applicationFrame; 
@property (nonatomic,readonly) double scale;                                                                                                              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) NSArray * availableModes; 
@property (nonatomic,readonly) UIScreenMode * preferredMode; 
@property (nonatomic,retain) UIScreenMode * currentMode; 
@property (assign,nonatomic) long long overscanCompensation; 
@property (nonatomic,readonly) UIScreen * mirroredScreen; 
@property (assign,nonatomic) double brightness; 
@property (assign,nonatomic) bool wantsSoftwareDimming;                                                                                                   //@synthesize wantsSoftwareDimming=_wantsSoftwareDimming - In the implementation block
@property (setter=_setSoftwareDimmingWindow:,nonatomic,retain) UISoftwareDimmingWindow * _softwareDimmingWindow;                                          //@synthesize softwareDimmingWindow=_softwareDimmingWindow - In the implementation block
@property (assign,setter=_setLastNotifiedBacklightLevel:,nonatomic) long long _lastNotifiedBacklightLevel;                                                //@synthesize lastNotifiedBacklightLevel=_lastNotifiedBacklightLevel - In the implementation block
@property (assign,setter=_setWorkspaceCapableScreenType:,getter=_workspaceCapableScreenType,nonatomic) long long workspaceCapableScreenType;              //@synthesize workspaceCapableScreenType=_workspaceCapableScreenType - In the implementation block
+(id)sbs_launchImageInfoPlistKeyModifier:(long long)arg1 ;
+(id)sbs_snapshotImagePathComponent:(long long)arg1 ;
+(id)sbs_screenTypes;
+(id)mainScreen;
+(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
+(id)_workspaceCapableScreens;
+(void)_enumerateScreensWithBlock:(/*^block*/ id)arg1 ;
+(void)_prepareScreensForAppResume;
+(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
+(void)initialize;
+(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
+(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
+(void)_beginDisableScreenUpdatesForSnapshot;
+(void)_endDisableScreenUpdates;
+(CGAffineTransform)transformToRotateScreen:(double)arg1 ;
+(id)screens;
+(id)_screenWithDisplayName:(id)arg1 ;
+(CGAffineTransform)transformForScreenOriginRotation:(double)arg1 ;
+(id)_screenWithDisplayID:(id)arg1 ;
+(void)_beginDisableScreenUpdatesForSnapshotUsingSnapshotCover:(bool)arg1 ;
+(bool)_shouldDisableJail;
+(void)_videoOutSettingsChanged;
+(id)_screenWithIntegerDisplayID:(unsigned)arg1 ;
-(id)_mapkit_display;
-(id)_display;
-(bool)sbs_isCarScreen;
-(bool)sbs_isMainScreen;
-(bool)sbs_isCloned;
-(id)sbs_launchImageInfoPlistKeyModifier;
-(id)sbs_snapshotImagePathComponent;
-(id)snapshotView;
-(id)snapshotViewAfterScreenUpdates:(bool)arg1 ;
-(id)snapshot;
-(void)_disableScreenUpdates:(bool)arg1 ;
-(void)_enableScreenUpdates;
-(void)_setSpeed:(double)arg1 forWindow:(id)arg2 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)description;
-(long long)_userInterfaceIdiom;
-(CGRect)applicationFrame;
-(bool)_isMainScreen;
-(double)scale;
-(unsigned)_integerDisplayID;
-(long long)_workspaceCapableScreenType;
-(void)_updateUserInterfaceIdiom;
-(void)_setScale:(double)arg1 ;
-(CFDictionaryRef)_touchMap;
-(bool)_areBoundsJailed;
-(void)_setTouchMap:(CFDictionaryRef)arg1 ;
-(double)_scale;
-(double)_pointsPerInch;
-(int)bitsPerComponent;
-(UIEdgeInsets)_jailedBoundsEdgeInsets;
-(CGRect)_realDisplayBounds;
-(double)_rotation;
-(double)_horizontalPixelScale;
-(id)_name;
-(void)_prepareForWindow;
-(id)_displayID;
-(bool)_canFocusViews;
-(long long)_imageOrientation;
-(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)_setUserInterfaceIdiom:(long long)arg1 ;
-(id)mirroredScreen;
-(id)_capabilityForKey:(id)arg1 ;
-(id)currentMode;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDisplay:(id)arg1 ;
-(void)_computeMetrics;
-(id)availableModes;
-(bool)_isWorkspaceCapable;
-(void)_connectScreen;
-(void)_updateAvailableDisplayModes;
-(void)_updateOverscanCompensationAllowingBackgroundUpdate:(bool)arg1 ;
-(bool)_isExternal;
-(void)_beginObservingBacklightLevelNotifications;
-(void)_endObservingBacklightLevelNotifications;
-(void)_setSoftwareDimmingWindow:(id)arg1 ;
-(void)_disconnectScreen;
-(void)_ensureConnectedIfPossible;
-(bool)_hasWindows;
-(bool)_overscanAdjustmentNeedsUpdate;
-(bool)_isOverscanned;
-(bool)_hasStatusBar;
-(UIEdgeInsets)_rawJailedBoundsEdgeInsets;
-(void)_updateWorkspaceCapableScreenType;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 ;
-(id)preferredMode;
-(void)setCurrentMode:(id)arg1 ;
-(void)_updateCapabilities;
-(id)_capabilities;
-(bool)_isUIElementLimited:(id)arg1 ;
-(id)_softwareDimmingWindow;
-(long long)_lastNotifiedBacklightLevel;
-(void)_setLastNotifiedBacklightLevel:(long long)arg1 ;
-(void)_postBrightnessDidChangeNotificationIfAppropriate;
-(bool)_supportsBrightness;
-(float)rawBrightnessForBacklightLevel:(float)arg1 ;
-(id)_lazySoftwareDimmingWindow;
-(bool)_isRotatable;
-(CGRect)_boundsInPixels;
-(double)_refreshRate;
-(void)setBitsPerComponent:(int)arg1 ;
-(int)screenType;
-(long long)overscanCompensation;
-(void)setOverscanCompensation:(long long)arg1 ;
-(unsigned)_seed;
-(void)_setCapability:(id)arg1 forKey:(id)arg2 ;
-(bool)_areListsLimited;
-(bool)_areMusicListsLimited;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
-(id)_snapshotExcludingWindows:(id)arg1 withRect:(CGRect)arg2 ;
-(void)_setWorkspaceCapableScreenType:(long long)arg1 ;
-(bool)wantsSoftwareDimming;
-(void)setWantsSoftwareDimming:(bool)arg1 ;
@end

