/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UILabel, UIProgressView, NSString;

@interface SyncFooterView : UITableViewHeaderFooterView <PSHeaderFooterView> {

	UILabel* _notConnectedLabel;
	UILabel* _hostNameLabel;
	UILabel* _syncedAssetsLabel;
	UILabel* _timestampLabel;
	UILabel* _timestampLabel2;
	UILabel* _timestampLabel3;
	UILabel* _syncStatusLabel;
	UILabel* _assetInfoLabel;
	UIProgressView* _assetProgress;
	NSString* _hostIdentifier;
	bool _showHostName;
	double _currentHeight;

}

@property (nonatomic,retain) NSString * hostIdentifier;              //@synthesize hostIdentifier=_hostIdentifier - In the implementation block
@property (assign,nonatomic) bool showHostName;                      //@synthesize showHostName=_showHostName - In the implementation block
-(bool)updateProgress:(id)arg1 dataSource:(id)arg2 ;
-(void)configureTimestampLabels:(id)arg1 ;
-(void)setShowHostName:(bool)arg1 ;
-(bool)showHostName;
-(id)hostIdentifier;
-(void)configureLabelsForSyncState:(id)arg1 dataSource:(id)arg2 ;
-(id)newSingleLineLabel:(id)arg1 ;
-(id)newLabel:(id)arg1 ;
-(void)configureLabelsForWakingState:(id)arg1 dataSource:(id)arg2 ;
-(void)configureLabelsForConnectedState:(id)arg1 dataSource:(id)arg2 ;
-(void)configureLabelsForDisconnectedState:(id)arg1 dataSource:(id)arg2 ;
-(void)setHostIdentifier:(id)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end

