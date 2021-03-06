/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter {

	NSLocale* _locale;
	unsigned long long _units;
	unsigned long long _unitStyle;

}

@property (nonatomic,copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) unsigned long long units;                  //@synthesize units=_units - In the implementation block
@property (assign,nonatomic) unsigned long long unitStyle;              //@synthesize unitStyle=_unitStyle - In the implementation block
-(bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(bool)_useMetric;
-(id)stringFromDistance:(double)arg1 ;
-(double)distanceFromString:(id)arg1 ;
-(unsigned long long)unitStyle;
-(void)setUnitStyle:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(void)setLocale:(id)arg1 ;
-(id)locale;
-(void).cxx_destruct;
-(id)stringForObjectValue:(id)arg1 ;
-(bool)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(unsigned long long)units;
-(void)setUnits:(unsigned long long)arg1 ;
@end

