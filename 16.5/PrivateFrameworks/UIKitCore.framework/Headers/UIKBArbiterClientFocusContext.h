// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBARBITERCLIENTFOCUSCONTEXT_H
#define UIKBARBITERCLIENTFOCUSCONTEXT_H

@class FBSSceneIdentityToken;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIKBArbiterClientFocusContext : NSObject <NSSecureCoding>



@property (nonatomic) unsigned int contextID; // ivar: _contextID
@property (retain, nonatomic) FBSSceneIdentityToken *sceneIdentity; // ivar: _sceneIdentity


+(BOOL)supportsSecureCoding;
+(id)focusContextForSceneIdentity:(id)arg0 contextID:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif