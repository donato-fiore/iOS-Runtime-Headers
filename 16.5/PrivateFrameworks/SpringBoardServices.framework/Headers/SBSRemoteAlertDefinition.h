// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSREMOTEALERTDEFINITION_H
#define SBSREMOTEALERTDEFINITION_H

@class NSString, NSDictionary;
@protocol BSXPCCoding, BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface SBSRemoteAlertDefinition : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isForCarPlay) BOOL forCarPlay; // ivar: _forCarPlay
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *impersonatedCarPlayAppIdentifier; // ivar: _impersonatedCarPlayAppIdentifier
@property (nonatomic) BOOL prefersEmbeddedDisplayPresentation; // ivar: _prefersEmbeddedDisplayPresentation
@property (copy, nonatomic) NSString *secondaryViewControllerClassName; // ivar: _secondaryViewControllerClassName
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, copy, nonatomic) NSString *viewControllerClassName; // ivar: _viewControllerClassName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithServiceName:(id)arg0 viewControllerClassName:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif