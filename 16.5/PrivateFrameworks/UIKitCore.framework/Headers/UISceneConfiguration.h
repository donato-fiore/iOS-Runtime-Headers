// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCENECONFIGURATION_H
#define UISCENECONFIGURATION_H

@class NSString;
@protocol BSDebugDescriptionProviding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIStoryboard.h"

@interface UISceneConfiguration : NSObject <BSDebugDescriptionProviding, NSCopying, NSSecureCoding>

 {
    Class _sceneClass;
    Class _delegateClass;
    UIStoryboard *_storyboard;
}


@property (readonly, nonatomic) BOOL _fromPlist; // ivar: _fromPlist
@property (readonly, nonatomic) BOOL _hadResolutionErrorsOnLoad; // ivar: _hadResolutionErrorsOnLoad
@property (readonly, nonatomic) BOOL _isDefault; // ivar: _isDefault
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class delegateClass;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *role; // ivar: _role
@property (retain, nonatomic) Class sceneClass;
@property (retain, nonatomic) UIStoryboard *storyboard;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)configurationWithName:(id)arg0 sessionRole:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithConfiguration:(id)arg0 ;
-(id)_initWithLoadErrorForSessionRole:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 sessionRole:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif