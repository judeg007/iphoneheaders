/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface PassLocationSource : SQLiteEntity
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)queryWithDatabase:(id)arg1 passPID:(unsigned long long)arg2 locationSourcePID:(unsigned long long)arg3 ;
+(id)queryWithDatabase:(id)arg1 passPID:(unsigned long long)arg2 ;
+(id)queryWithDatabase:(id)arg1 locationSourcePID:(unsigned long long)arg2 ;
+(id)insertPassLocationSourceWithPass:(id)arg1 locationSource:(id)arg2 inDatabase:(id)arg3 ;
+(id)locationSourcePIDPredicate:(id)arg1 ;
+(id)passPIDPredicate:(unsigned long long)arg1 ;
+(id)databaseTable;
-(id)initWithPassPID:(unsigned long long)arg1 locationSourcePID:(unsigned long long)arg2 inDatabase:(id)arg3 ;
-(BOOL)deleteFromDatabase;
@end

