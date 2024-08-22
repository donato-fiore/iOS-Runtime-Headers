// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISAPPLICATIONINITIALIZATIONCONTEXT_H
#define UISAPPLICATIONINITIALIZATIONCONTEXT_H

@class NSString, FBSSceneIdentityToken, NSSet;
@protocol BSXPCCoding, NSCopying, NSMutableCopying, BSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "UISCompatibilityContext.h"
#import "UISDeviceContext.h"
#import "UISDisplayContext.h"

@interface UISApplicationInitializationContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSXPCSecureCoding>



@property (readonly, nonatomic) UISCompatibilityContext *compatibilityContext; // ivar: _compatibilityContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FBSSceneIdentityToken *defaultSceneToken; // ivar: _defaultSceneToken
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UISDeviceContext *deviceContext; // ivar: _deviceContext
@property (readonly, nonatomic) UISDisplayContext *displayContext;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UISDisplayContext *launchDisplayContext; // ivar: _launchDisplayContext
@property (readonly, nonatomic) UISDisplayContext *mainDisplayContext; // ivar: _mainDisplayContext
@property (readonly, nonatomic) NSSet *persistedSceneIdentifiers; // ivar: _persistedSceneIdentifiers
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportAppSceneRequests; // ivar: _supportAppSceneRequests


+(BOOL)supportsBSXPCSecureCoding;
+(id)defaultContext;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithDisplayContext:(id)arg0 deviceContext:(id)arg1 persistedSceneIdentifiers:(id)arg2 ;
-(id)initWithDisplayContext:(id)arg0 deviceContext:(id)arg1 persistedSceneIdentifiers:(id)arg2 supportAppSceneRequests:(BOOL)arg3 ;
-(id)initWithMainDisplayContext:(id)arg0 launchDisplayContext:(id)arg1 deviceContext:(id)arg2 persistedSceneIdentifiers:(id)arg3 supportAppSceneRequests:(BOOL)arg4 ;
-(id)initWithUISApplicationInitializationContext:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif