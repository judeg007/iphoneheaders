/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol OS_dispatch_source;
@class SKUIClientContext, ASPurchasesDatabase, NSOperationQueue, NSString, NSObject, NSArray;

@interface ASPurchasedAppViewController : UIViewController <UISearchBarDelegate> {

	SKUIClientContext* _clientContext;
	int _currentDeviceType;
	int _currentSortIndex;
	ASPurchasesDatabase* _database;
	BOOL _hideInstalledApps;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _searchOperationQueue;
	NSString* _searchString;
	NSObject<OS_dispatch_source>* _searchTimer;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                     //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) BOOL hideInstalledApps;                                //@synthesize hideInstalledApps=_hideInstalledApps - In the implementation block
@property (assign,nonatomic) int currentSortIndex;                                  //@synthesize currentSortIndex=_currentSortIndex - In the implementation block
@property (assign,nonatomic) int currentDeviceType;                                 //@synthesize currentDeviceType=_currentDeviceType - In the implementation block
@property (nonatomic,readonly) NSArray * titlesForAvailableSortOrders; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                     //@synthesize operationQueue=_operationQueue - In the implementation block
-(int)currentSortIndex;
-(void)setCurrentSortIndex:(int)arg1 ;
-(int)currentDeviceType;
-(void)setCurrentDeviceType:(int)arg1 ;
-(void)setHideInstalledApps:(BOOL)arg1 ;
-(id)titlesForAvailableSortOrders;
-(id)currentItems;
-(BOOL)hideInstalledApps;
-(void)_currentItemsDidChange;
-(void)_searchStringDidChange:(id)arg1 ;
-(void)_databaseDidChangeNotification:(id)arg1 ;
-(id)_removeInstalledAppsFromPurchasedApps:(id)arg1 ;
-(void)_cancelSearchTimer;
-(void)_searchTimerFiredWithString:(id)arg1 ;
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void).cxx_destruct;
-(id)clientContext;
-(void)setClientContext:(id)arg1 ;
@end

