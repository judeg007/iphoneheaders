/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MNLockScreenDimmingBehavior : NSObject {

	int _dimmingState;
	bool _userLockedScreenForCurrentManeuver;
	unsigned long long _lastSeenState;
	NSArray* _lastSeenInstructions;
	int _lastSeenManeuver;
	unsigned long long _lastSeenAlert;
	bool _wasWithinManeuver;
	bool _guidanceAffectsDimming;

}

@property (nonatomic,readonly) int dimmingState;                            //@synthesize dimmingState=_dimmingState - In the implementation block
@property (assign,nonatomic) bool guidanceAffectsDimming;                   //@synthesize guidanceAffectsDimming=_guidanceAffectsDimming - In the implementation block
@property (assign,nonatomic) unsigned long long lastSeenState;              //@synthesize lastSeenState=_lastSeenState - In the implementation block
@property (nonatomic,copy) NSArray * lastSeenInstructions;                  //@synthesize lastSeenInstructions=_lastSeenInstructions - In the implementation block
@property (assign,nonatomic) int lastSeenManeuver;                          //@synthesize lastSeenManeuver=_lastSeenManeuver - In the implementation block
@property (assign,nonatomic) unsigned long long lastSeenAlert;              //@synthesize lastSeenAlert=_lastSeenAlert - In the implementation block
@property (assign,nonatomic) bool wasWithinManeuver;                        //@synthesize wasWithinManeuver=_wasWithinManeuver - In the implementation block
-(int)lastSeenManeuver;
-(void)setLastSeenInstructions:(id)arg1 ;
-(void)setLastSeenState:(unsigned long long)arg1 ;
-(void)setWasWithinManeuver:(bool)arg1 ;
-(bool)wasWithinManeuver;
-(id)lastSeenInstructions;
-(bool)guidanceAffectsDimming;
-(void)setLastSeenAlert:(unsigned long long)arg1 ;
-(void)setLastSeenManeuver:(int)arg1 ;
-(void)setGuidanceAffectsDimming:(bool)arg1 ;
-(unsigned long long)lastSeenAlert;
-(unsigned long long)lastSeenState;
-(void)userDidLockScreen;
-(void)didReceiveGuidanceUpdateWithNewState:(unsigned long long)arg1 maneuver:(int)arg2 instructions:(id)arg3 alert:(unsigned long long)arg4 ;
-(int)dimmingState;
-(id)init;
-(void).cxx_destruct;
@end

