/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXInterestAreaViewDataSource <NSObject>
@required
-(unsigned long long)numberOfInterestAreaPathsForInterestAreaView:(id)arg1;
-(id)interestAreaView:(id)arg1 interestAreaPathAtIndex:(unsigned long long)arg2;
-(unsigned long long)numberOfDynamicInterestAreaPathsForInterestAreaView:(id)arg1;
-(id)interestAreaView:(id)arg1 dynamicInterestAreaPathAtIndex:(unsigned long long)arg2;
@end

