/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSDownloadMetadata.h>

@class NSArray, NSNumber;

@interface StoreDownload : SSDownloadMetadata

@property (readonly) NSArray * assets; 
@property (readonly) NSNumber * matchedStatus; 
@property (readonly) NSNumber * redownloadedStatus; 
-(id)_newDeltaPackageAssetsWithAssetDictionary:(id)arg1 ;
-(id)_newPrimaryAssetsWithAssetDictionary:(id)arg1 assetType:(id)arg2 ;
-(id)_copyPinfValueWithField:(int)arg1 ;
-(id)matchedStatus;
-(id)redownloadedStatus;
-(id)_newAssetPropertiesWithStoreDictionary:(id)arg1 assetType:(id)arg2 ;
-(id)_newLocalCacheAssetPropertiesWithStoreDictionary:(id)arg1 assetType:(id)arg2 ;
-(id)initWithDownload:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(BOOL)writeToFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)assets;
-(id)newDownloadProperties;
-(id)_newAssetWithURL:(id)arg1 assetType:(id)arg2 ;
@end
