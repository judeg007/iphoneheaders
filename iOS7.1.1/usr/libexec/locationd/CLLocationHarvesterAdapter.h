/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <CoreMotion/CLIntersiloService.h>
#import <locationd/CLLocationHarvesterProtocol.h>

@interface CLLocationHarvesterAdapter : CLIntersiloService <CLLocationHarvesterProtocol> {

	CLLocationHarvester* _harvester;

}

@property (assign,nonatomic) CLLocationHarvester* harvester;              //@synthesize harvester=_harvester - In the implementation block
+(id)getSilo;
-(void)setHarvestingEnabled:(BOOL)arg1 ;
-(CLLocationHarvester*)harvester;
-(void)setHarvester:(CLLocationHarvester*)arg1 ;
-(void)setPrivateMode:(BOOL)arg1 ;
-(id)initInSilo:(id)arg1 ;
-(void)heartAttack;
-(void)beginService;
-(void)endService;
-(void)shutdown;
@end

