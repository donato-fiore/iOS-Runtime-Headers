// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEVENTDEFERRINGDESCRIPTOR_H
#define _UIEVENTDEFERRINGDESCRIPTOR_H

@class BKSHIDEventDeferringEnvironment, NSString;
@protocol NSCopying, BSDebugDescriptionProviding;

#import <Foundation/Foundation.h>


@interface _UIEventDeferringDescriptor : NSObject <NSCopying, BSDebugDescriptionProviding>

 {
    BOOL _compatibility;
    unsigned int _predicateContextID;
    int _targetPID;
    unsigned int _targetContextID;
    NSUInteger _scope;
    BKSHIDEventDeferringEnvironment *_environment;
    NSString *_displayHardwareIdentifier;
    NSString *_predicateSceneIdentityString;
    *void _predicateWindowPointer;
    *void _targetWindowPointer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif