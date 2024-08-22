// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIREMOTEVIEWCONTROLLERSCENECONTEXT_H
#define _UIREMOTEVIEWCONTROLLERSCENECONTEXT_H

@class FBSDisplayIdentity;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIRemoteViewControllerSceneContext : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _enhancedWindowingEnabled;
    FBSDisplayIdentity *_displayIdentity;
    NSInteger _screenReferenceDisplayModeStatus;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayIdentity:(id)arg0 screenReferenceDisplayModeStatus:(NSInteger)arg1 enhancedWindowEnabled:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif