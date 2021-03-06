/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface GEOVPointOnRoad : PBCodable {

	int _featureIndex;
	int _vertexIndex;
	SCD_Struct_GE55 _has;

}

@property (assign,nonatomic) int featureIndex;                 //@synthesize featureIndex=_featureIndex - In the implementation block
@property (assign,nonatomic) bool hasVertexIndex; 
@property (assign,nonatomic) int vertexIndex;                  //@synthesize vertexIndex=_vertexIndex - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(bool)hasVertexIndex;
-(int)vertexIndex;
-(void)setVertexIndex:(int)arg1 ;
-(void)setHasVertexIndex:(bool)arg1 ;
-(void)setFeatureIndex:(int)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)featureIndex;
@end

