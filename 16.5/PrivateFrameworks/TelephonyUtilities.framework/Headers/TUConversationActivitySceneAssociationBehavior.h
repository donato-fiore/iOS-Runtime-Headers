// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONACTIVITYSCENEASSOCIATIONBEHAVIOR_H
#define TUCONVERSATIONACTIVITYSCENEASSOCIATIONBEHAVIOR_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationActivitySceneAssociationBehavior : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL shouldAssociateScene; // ivar: _shouldAssociateScene
@property (readonly, copy, nonatomic) NSString *targetContentIdentifier; // ivar: _targetContentIdentifier


+(BOOL)supportsSecureCoding;
+(id)defaultBehavior;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToSceneAssociationBehavior:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTargetContentIdentifier:(id)arg0 shouldAssociateScene:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif