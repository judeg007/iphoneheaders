/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mobileassetd/ASAssetMetadataUpdatePolicy.h>

@protocol ASAssetMetadataUpdatePolicy <NSObject>
@required
-(id)serverURLForAssetType:(id)arg1;
-(double)defaultNetworkTimeout;
-(double)automaticMetadataUpdateIntervalForAssetType:(id)arg1;
@end


@interface ASAssetMetadataUpdatePolicy : NSObject <ASAssetMetadataUpdatePolicy>
+(id)policy;
-(id)serverURLForAssetType:(id)arg1 ;
-(void)getDelay:(double*)arg1 andGracePeriod:(double*)arg2 forUpdateError:(id)arg3 ;
-(void)getDelay:(double*)arg1 andGracePeriod:(double*)arg2 forUpdateInterval:(double)arg3 ;
-(double)defaultNetworkTimeout;
-(double)automaticMetadataUpdateIntervalForAssetType:(id)arg1 ;
-(id)_stringPreferenceValueForKey:(id)arg1 ;
@end
