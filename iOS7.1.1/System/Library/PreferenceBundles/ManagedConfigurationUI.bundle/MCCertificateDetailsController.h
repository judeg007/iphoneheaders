/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSListController.h>

@class NSArray;

@interface MCCertificateDetailsController : PSListController {

	NSArray* _properties;

}
+(id)_dateFormatter;
-(void).cxx_destruct;
-(id)specifiersFromCertificateProperties:(id)arg1 ;
-(id)valueForSpecifier:(id)arg1 ;
-(id)_propertiesFromTrust:(SecTrustRef)arg1 ;
-(id)specifiersFromTrust:(SecTrustRef)arg1 ;
-(id)specifiers;
@end
