/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSURLAuthenticationChallengeInternal;

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding> {

	NSURLAuthenticationChallengeInternal* _internal;

}
+(id)_authenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
+(id)_createAuthenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
+(bool)supportsSecureCoding;
-(CFURLAuthChallengeRef)_createCFAuthChallenge;
-(void)setSender:(id)arg1 ;
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
-(id)proposedCredential;
-(id)failureResponse;
-(id)_initWithCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(long long)previousFailureCount;
-(id)protectionSpace;
-(id)sender;
-(id)error;
@end

