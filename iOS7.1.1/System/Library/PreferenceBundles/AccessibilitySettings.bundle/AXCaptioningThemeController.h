/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AXCaptionStyleChooserController.h>

@class NSMutableArray;

@interface AXCaptioningThemeController : AXCaptionStyleChooserController {

	NSMutableArray* _editableHiddenSpecifiers;
	NSMutableArray* _editableVisibleSpecifiers;
	bool _isEditingTable;
	NSMutableArray* _customProfiles;
	NSMutableArray* _defaultProfiles;

}

@property (nonatomic,retain) NSMutableArray * customProfiles;               //@synthesize customProfiles=_customProfiles - In the implementation block
@property (nonatomic,retain) NSMutableArray * defaultProfiles;              //@synthesize defaultProfiles=_defaultProfiles - In the implementation block
-(void)setDefaultProfiles:(id)arg1 ;
-(void)setCustomProfiles:(id)arg1 ;
-(void)_themeCountChanged:(id)arg1 ;
-(void)_resetActiveProfileToDefault;
-(bool)_profileOverridesStyle:(CFStringRef)arg1 ;
-(id)_videoOverridesStyle:(id)arg1 ;
-(id)customProfiles;
-(id)defaultProfiles;
-(void)_manageHiddenSpecifiers:(bool)arg1 editing:(bool)arg2 ;
-(void)_setVideoOverridesStyle:(id)arg1 specifier:(id)arg2 ;
-(void)_selectProfile:(id)arg1 ;
-(void)_editPressed;
-(void)_donePressed;
-(void)_addEditButton;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(id)specifiers;
@end

