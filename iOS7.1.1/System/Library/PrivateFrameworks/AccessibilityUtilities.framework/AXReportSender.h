/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface AXReportSender : NSObject {

	bool _shouldAnnounce;
	NSMutableArray* _reportCache;
	NSObject<OS_dispatch_queue>* _dispatchQueue;

}

@property (assign,nonatomic) bool shouldAnnounce;                                      //@synthesize shouldAnnounce=_shouldAnnounce - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * reportCache;                             //@synthesize reportCache=_reportCache - In the implementation block
+(id)sharedInstance;
-(id)dispatchQueue;
-(void)dealloc;
-(id)init;
-(void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2 ;
-(void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2 ;
-(void)sendExceptionForSafeBlock:(id)arg1 ;
-(void)setShouldAnnounce:(bool)arg1 ;
-(void)setReportCache:(id)arg1 ;
-(void)_announceAndLogMessage:(id)arg1 ;
-(void)_addDeviceInfoToSimpleParamters:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)_addCreatedDateToSimpleParameters:(id)arg1 ;
-(void)_sendReportWithAction:(id)arg1 route:(id)arg2 simpleParameters:(id)arg3 fileParameters:(id)arg4 ;
-(void)_addOtherCommonToSimpleParameters:(id)arg1 ;
-(void)_sendReportWithAction:(id)arg1 route:(id)arg2 simpleParameters:(id)arg3 fileParameters:(id)arg4 forceSilent:(bool)arg5 asynchronously:(bool)arg6 timeoutInterval:(double)arg7 ;
-(void)_sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2 asynchronously:(bool)arg3 timeoutInterval:(double)arg4 ;
-(void)sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)sendFailedAssertionSynchronouslyWithErrorMessage:(id)arg1 timeoutInterval:(double)arg2 overrideProcessName:(id)arg3 ;
-(void)_sendReportWithAction:(id)arg1 route:(id)arg2 simpleParameters:(id)arg3 fileParameters:(id)arg4 forceSilent:(bool)arg5 ;
-(void)sendFailedTestCase:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendGenericReport:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendExceptionForSafeBlock:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(id)_gatherDeviceInfo;
-(bool)shouldAnnounce;
-(void)_sendReport:(id)arg1 asynchronously:(bool)arg2 timeoutInterval:(double)arg3 ;
-(id)reportCache;
-(void)sendScreenshot:(id)arg1 type:(id)arg2 description:(id)arg3 ;
-(void)sendStackshot:(id)arg1 description:(id)arg2 ;
-(void)sendFailedAssertionWithErrorMessage:(id)arg1 ;
-(void)sendFailedAssertionSynchronouslyWithErrorMessage:(id)arg1 timeoutInterval:(double)arg2 ;
-(void)sendFailedTestCase:(id)arg1 withTag:(id)arg2 ;
-(void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2 ;
-(void)sendGenericReport:(id)arg1 withTag:(id)arg2 ;
-(void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2 ;
-(void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 ;
-(void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3 ;
-(void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 ;
-(void)setDispatchQueue:(id)arg1 ;
@end

