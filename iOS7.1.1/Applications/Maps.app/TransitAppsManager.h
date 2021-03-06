/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class TransitAppRanker;

@interface TransitAppsManager : NSObject {

	TransitAppRanker* _transitAppRanker;

}

@property (nonatomic,retain) TransitAppRanker * transitAppRanker;              //@synthesize transitAppRanker=_transitAppRanker - In the implementation block
+(id)defaultManager;
-(void)updateCoverageFiles;
-(void)recordAppLaunch:(id)arg1 ;
-(void)loadRelevantTransitAppsForSource:(SCD_Struct_Si13)arg1 destination:(SCD_Struct_Si13)arg2 completion:(/*^block*/ id)arg3 ;
-(id)transitAppRanker;
-(id)_installedApps;
-(id)_appIdsStringWithApplicationProxies:(id)arg1 ;
-(void)_updateCoverageFileForAppProxy:(id)arg1 libraryItem:(id)arg2 ;
-(void)setTransitAppRanker:(id)arg1 ;
-(void).cxx_destruct;
@end

