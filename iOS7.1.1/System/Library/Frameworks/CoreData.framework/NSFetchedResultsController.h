/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSFetchRequest, NSManagedObjectContext, NSString, NSArray;

@interface NSFetchedResultsController : NSObject {

	NSFetchRequest* _fetchRequest;
	NSManagedObjectContext* _managedObjectContext;
	NSString* _sectionNameKeyPath;
	NSString* _sectionNameKey;
	NSString* _cacheName;
	void* _cache;
	struct {
		unsigned _sendObjectChangeNotifications : 1;
		unsigned _sendSectionChangeNotifications : 1;
		unsigned _sendDidChangeContentNotifications : 1;
		unsigned _sendWillChangeContentNotifications : 1;
		unsigned _sendSectionIndexTitleForSectionName : 1;
		unsigned _changedResultsSinceLastSave : 1;
		unsigned _hasMutableFetchedResults : 1;
		unsigned _hasBatchedArrayResults : 1;
		unsigned _hasSections : 1;
		unsigned _usesNonpersistedProperties : 1;
		unsigned _includesSubentities : 1;
		unsigned _reservedFlags : 21;
	}  _flags;
	id _delegate;
	id _sortKeys;
	id _fetchedObjects;
	id _sections;
	id _sectionsByName;
	id _sectionIndexTitles;
	id _sectionIndexTitlesSections;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                              //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSString * sectionNameKeyPath;                              //@synthesize sectionNameKeyPath=_sectionNameKeyPath - In the implementation block
@property (nonatomic,readonly) NSString * cacheName;                                       //@synthesize cacheName=_cacheName - In the implementation block
@property (assign,nonatomic) <NSFetchedResultsControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * fetchedObjects; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
@property (nonatomic,readonly) NSArray * sections; 
+(id)_CoreDataSectionCachesPath;
+(unsigned long long)_insertIndexForObject:(id)arg1 inArray:(id)arg2 lowIdx:(unsigned long long)arg3 highIdx:(unsigned long long)arg4 sortDescriptors:(id)arg5 ;
+(void)deleteCacheWithName:(id)arg1 ;
+(void)initialize;
-(bool)_keyPathContainsNonPersistedProperties:(id)arg1 ;
-(void)_managedObjectContextDidSave:(id)arg1 ;
-(void)_managedObjectContextDidChange:(id)arg1 ;
-(bool)_restoreCachedSectionInfo;
-(bool)_computeSectionInfo:(id)arg1 error:(id*)arg2 ;
-(id)_sectionNameForObject:(id)arg1 ;
-(id)_sectionCachePath;
-(bool)_computeSectionInfoWithGroupBy:(id)arg1 error:(id*)arg2 ;
-(id)_resolveSectionIndexTitleForSectionName:(id)arg1 ;
-(void)_makeMutableFetchedObjects;
-(bool)_objectInResults:(id)arg1 ;
-(unsigned long long)_indexOfFetchedID:(id)arg1 ;
-(id)_createNewSectionForObject:(id)arg1 ;
-(void)_insertObjectInFetchedObjects:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_updateSectionOffsetsStartingAtSection:(id)arg1 ;
-(id)_indexPathForIndex:(unsigned long long)arg1 ;
-(unsigned long long)_sectionNumberForIndex:(unsigned long long)arg1 ;
-(void)_removeObjectInFetchedObjectsAtIndex:(unsigned long long)arg1 ;
-(bool)_postprocessDeletedObjects:(id)arg1 ;
-(bool)_postprocessInsertedObjects:(id)arg1 ;
-(bool)_hasFetchedObjects;
-(id)_fetchedObjectsArrayOfObjectIDs;
-(void)_preprocessInsertedObjects:(id)arg1 insertsInfo:(id)arg2 newSectionNames:(id)arg3 ;
-(void)_preprocessDeletedObjects:(id)arg1 deletesInfo:(id)arg2 sectionsWithDeletes:(id)arg3 ;
-(void)_preprocessUpdatedObjects:(id)arg1 insertsInfo:(id)arg2 deletesInfo:(id)arg3 updatesInfo:(id)arg4 sectionsWithDeletes:(id)arg5 newSectionNames:(id)arg6 treatAsRefreshes:(bool)arg7 ;
-(bool)_postprocessUpdatedObjects:(id)arg1 ;
-(void)_appendAffectedStoreInfoToData:(id)arg1 adjustedOffset:(long long*)arg2 ;
-(void)_updateCachedStoreInfo;
-(bool)_didUseCachedSectionInfo;
-(bool)_didUpdateOnlyStoreInfo;
-(bool)_didFailPostprocessing;
-(bool)_didUseGroupBy;
-(void)_dumpSectionInfo;
-(id)fetchedObjects;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4 ;
-(bool)performFetch:(id*)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(id)sectionIndexTitleForSectionName:(id)arg1 ;
-(long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2 ;
-(id)sectionNameKeyPath;
-(id)cacheName;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)sectionIndexTitles;
-(id)sections;
-(id)managedObjectContext;
-(id)fetchRequest;
@end

