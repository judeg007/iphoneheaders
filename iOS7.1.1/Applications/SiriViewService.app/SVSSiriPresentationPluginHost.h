/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary;

@interface SVSSiriPresentationPluginHost : NSObject {

	BOOL _loaded;
	NSURL* _URL;
	NSMutableDictionary* _bundleURLsByBundleIdentifier;

}

@property (getter=_URL,nonatomic,readonly) NSURL * URL;                                                                              //@synthesize URL=_URL - In the implementation block
@property (assign,setter=_setLoaded:,getter=_isLoaded,nonatomic) BOOL loaded;                                                        //@synthesize loaded=_loaded - In the implementation block
@property (getter=_bundleURLsByBundleIdentifier,nonatomic,readonly) NSMutableDictionary * bundleURLsByBundleIdentifier;              //@synthesize bundleURLsByBundleIdentifier=_bundleURLsByBundleIdentifier - In the implementation block
+(id)sharedSiriPresentationPluginHost;
+(id)_defaultURL;
-(id)_bundleURLsByBundleIdentifier;
-(id)_cachedURLForBundleWithIdentifier:(id)arg1 ;
-(void)_rescanBundles;
-(id)_siriPresentationPluginBundleWithIdentifier:(id)arg1 ;
-(BOOL)_isLoaded;
-(void)_loadFromPropertyListRepresentation:(id)arg1 ;
-(void)_setLoaded:(BOOL)arg1 ;
-(id)presentationWithIdentifier:(id)arg1 ;
-(id)_URL;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void).cxx_destruct;
-(void)_save;
-(void)_load;
-(id)_propertyListRepresentation;
@end
