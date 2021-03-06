/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCECellValue.h>

@interface TSCEBooleanCellValue : TSCECellValue {

	TSCEBooleanValue* mBooleanValue;

}
-(void)encodeToArchive:(BooleanCellValueArchive*)arg1 ;
-(SCD_Struct_TS52*)formatStruct;
-(bool)isEqualToCellValue:(id)arg1 ;
-(id)initWithBooleanValue:(TSCEBooleanValue*)arg1 ;
-(id)initWithBoolean:(bool)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)displayString;
-(id)initWithArchive:(const BooleanCellValueArchive*)arg1 ;
-(TSCEBooleanValue*)booleanValue;
@end

