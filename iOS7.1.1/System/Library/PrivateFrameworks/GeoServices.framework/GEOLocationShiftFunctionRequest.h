/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOLocationShiftRequest, GEOPolyLocationShiftRequest, PBRequest;

@interface GEOLocationShiftFunctionRequest : NSObject {

	unsigned short _providerID;
	GEOLocationShiftRequest* _locationShiftRequest;
	GEOPolyLocationShiftRequest* _polyLocationShiftRequest;

}

@property (assign,nonatomic) unsigned short providerID;               //@synthesize providerID=_providerID - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE12 coordinate; 
@property (nonatomic,readonly) PBRequest * shiftRequest; 
-(void)dealloc;
-(unsigned short)providerID;
-(void)setProviderID:(unsigned short)arg1 ;
-(id)shiftRequest;
-(SCD_Struct_GE12)coordinate;
-(void)setCoordinate:(SCD_Struct_GE12)arg1 ;
@end

