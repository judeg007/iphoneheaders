/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSArray;

@interface TNChartFormulaArgumentCollection : NSObject <NSFastEnumeration, NSCopying, NSMutableCopying> {

	NSArray* mArray;

}
+(id)argumentCollectionFromFormula:(TSCEFormula*)arg1 inOwner:(CFUUIDRef)arg2 usingCalcEngine:(id)arg3 ;
-(id)elementEnumerator;
-(id)initWithFormula:(TSCEFormula*)arg1 inOwner:(CFUUIDRef)arg2 usingCalcEngine:(id)arg3 ;
-(id)wrappedChartFormulaWithID:(SCD_Struct_TS287)arg1 ;
-(id)reverseElementEnumerator;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(id)firstElement;
-(id)lastElement;
-(id)elementAtIndex:(unsigned long long)arg1 ;
@end

