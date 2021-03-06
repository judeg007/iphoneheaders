/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class SUDownloadManager, NSArray;

@interface SUDownloadManagerDataSource : SUTableDataSource {

	SUDownloadManager* _downloadManager;

}

@property (nonatomic,readonly) SUDownloadManager * downloadManager; 
@property (nonatomic,readonly) NSArray * downloads; 
-(id)initWithDownloadManager:(id)arg1 ;
-(bool)canSelectIndexPath:(id)arg1 ;
-(id)downloads;
-(void)dealloc;
-(void)reloadData;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(long long)tableViewStyle;
-(bool)deleteIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
-(bool)canDeleteIndexPath:(id)arg1 ;
-(id)downloadManager;
-(id)downloadForIndexPath:(id)arg1 ;
@end

