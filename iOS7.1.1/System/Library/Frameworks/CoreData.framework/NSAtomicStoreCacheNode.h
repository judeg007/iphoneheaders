/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long long __versionNumber;
	NSMutableDictionary* _propertyCache;
	void* _reserved1;

}
+(bool)accessInstanceVariablesDirectly;
+(void)initialize;
-(unsigned)_versionNumber;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(id)propertyCache;
-(void)setPropertyCache:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)objectID;
-(id)initWithObjectID:(id)arg1 ;
@end

