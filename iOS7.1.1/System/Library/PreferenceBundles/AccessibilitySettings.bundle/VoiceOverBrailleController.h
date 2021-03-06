/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/VoiceOverBluetoothDevicesController.h>

@class SCROBrailleClient, NSDictionary, NSTimer, NSString;

@interface VoiceOverBrailleController : VoiceOverBluetoothDevicesController {

	SCROBrailleClient* _brailleClient;
	NSDictionary* _brailleDriverDeviceDetectionInfo;
	NSTimer* _bluetoothDeviceLoadFailedTimer;
	bool _isContractedBrailleEnabled;
	bool _isEightDotBrailleEnabled;
	NSString* _statusKey;

}
-(id)alwaysUseNemethEnabled:(id)arg1 ;
-(id)bluetoothPowerAlertMessage;
-(void)_handleSettingsChange:(id)arg1 ;
-(id)_statusKeyFromPreferences;
-(void)_stopDeviceLoadFailedTimer;
-(void)_startDeviceLoadFailedTimer;
-(id)_currentBrailleTable:(id)arg1 ;
-(id)devicesGroupName;
-(void)deviceConnected:(id)arg1 ;
-(void)_connectToBrailleClient:(bool)arg1 ;
-(bool)shouldAddDevice:(id)arg1 ;
-(id)eightDotBrailleEnabled:(id)arg1 ;
-(id)bluetoothPoweredOffFooter;
-(void)primaryDeviceWasUnpaired;
-(void)handleSettingsChange:(id)arg1 ;
-(id)_bluetoothDisplayAddressFromPreferences;
-(void)_handleBrailleConfigurationChanged;
-(void)_bluetoothDeviceLoadFailedTimerFireMethod:(id)arg1 ;
-(void)_handleFailedToLoadBluetoothDevice:(id)arg1 ;
-(void)setSoftwareKeyboardWithBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setContractedBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)contractedBrailleEnabled:(id)arg1 ;
-(void)setEightDotBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setAlwaysUseNemethEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)softwareKeyboardWithBrailleEnabled:(id)arg1 ;
-(id)statusCellStatus:(id)arg1 ;
-(void)setGradeTwoAutoTransateEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)gradeTwoAutoTranslatedEnabled:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)setBluetoothIsBusy:(bool)arg1 ;
-(void)handleBrailleDidReconnect:(id)arg1 ;
-(void)handleBrailleConfigurationChanged:(id)arg1 ;
-(void)handleFailedToLoadBluetoothDevice:(id)arg1 ;
@end

